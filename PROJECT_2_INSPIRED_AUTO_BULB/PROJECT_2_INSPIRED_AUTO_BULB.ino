/*******************************************

    INSPIRED PROJECT 2: ĐÈN TỰ ĐỘNG TẮT/BẬT KHI TRỜI SÁNG


Ngưỡng sáng/tối: ? lux 


*******************************************/
#include <Wire.h>
#include <BH1750.h>

// chân 
const byte BULB_PIN = 8; 

// đối tượng toàn cục 
BH1750 lightSensor; 


void setup() {
  // Phần khởi tạo 
  // khởi tạo wire
  Wire.begin(); 
  // khởi tạo Serial
  Serial.begin(115200); 
  // khởi tạo light sensor 
  lightSensor.begin(); 
  // khởi tạo chân đèn 
  pinMode(BULB_PIN, OUTPUT); 
  // in màn hình bắt đầu 
  Serial.println("Bắt đầu chương trình"); 
}

void loop() {
  // lấy giá trị độ sáng lux 
  float lux = lightSensor.readLightLevel(); lux = (int)lux;
  Serial.print("Độ sáng: "); Serial.print(lux); Serial.println(" lux"); 

  // nếu độ sáng trên nguong thì tắt 
  if (lux <= 7) {
    digitalWrite(BULB_PIN, HIGH); 
  } else {
    digitalWrite(BULB_PIN, LOW); 
  }



  delay(1000); // đọc lại sau mỗi 1s 
}















