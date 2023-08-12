#include "Adafruit_CCS811.h"

Adafruit_CCS811 ccs; // erzeugen einer Var ccs von type adafruit_ccs811
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
  Serial.println("CCS811");
  if (!ccs.begin()) {
      Serial.println("failed");
      while(1);
  }
  while(!ccs.available());
  Serial.println("startet");
}

void red(){
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}

void blue(){
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
}

void green(){
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
}

void loop() {
  if(!ccs.readData()){
    uint16_t co2 = ccs.geteCO2();
    enum quality {
      high,
      normal,
      low
    };
    quality current_quality;
    String quality_msg;
    if(co2 < 800){
      current_quality = high;
      quality_msg = "hoch";
      green();
    } else if(co2 < 1000){
      current_quality = normal;
      quality_msg = "normal";
      blue();
    } else {
      current_quality = low;
      quality_msg = "niedrig";
      red();
    }
    Serial.print("CO2: ");
    Serial.print(co2);
    Serial.print(" ppm / Raumluft Qualität: ");
    Serial.println(quality_msg);
  }
  delay(500);
}
