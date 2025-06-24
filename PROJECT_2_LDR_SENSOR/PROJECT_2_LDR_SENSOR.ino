/***************************************************

  HỌ VÀ TÊN: 
  TRƯỜNG: 
  LỚP: 



***************************************************/
const byte LED_PIN = 8; 

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT); 
  Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(A0); 

  if (value < 900) {
    digitalWrite(LED_PIN, LOW); 
  } else {
    digitalWrite(LED_PIN, HIGH); 
  }

  Serial.print("giá trị nhân từ cảm biến là: "); Serial.println(value);

}
