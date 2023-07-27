void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("this is the first line");
  Serial.println("this is the second line");

  Serial.println("this is the third line");
  Serial.println("this is the fourth line");
  for(int i=1;i<=10;i++){
    Serial.println(i);
    delay(1000);
    return;
  }
}
