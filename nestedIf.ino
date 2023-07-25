void setup() {
  // put your setup code here, to run once:
      Serial.begin(115200);
      bool myBool = false;
      Serial.println("This line should be printed irrespective of anything");
      Serial.println();
      if (myBool){
        Serial.println("This line should be printed if the condition is true");
        Serial.println();
        if (true){
          Serial.println("This is nested if");
        }
        Serial.println();
        if (false){
         Serial.println("This is another line which will not execute");
        }
      }
}

void loop() {
  // put your main code here, to run repeatedly:
   Serial.println();
   delay(2000);
}
