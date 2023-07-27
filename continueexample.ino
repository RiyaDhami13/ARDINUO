void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  for(int i=1;i<=10;i++){
    if(i==5){
      continue;
    }
    Serial.println(i);
    
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
