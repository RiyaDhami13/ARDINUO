void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  int multiple = 1;
  while(true){
    Serial.println("This is endless loop");
    multiple++;
    if (multiple>10){
      Serial.println("Here, we break it");
      break;
    }
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
