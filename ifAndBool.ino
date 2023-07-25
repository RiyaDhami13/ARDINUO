void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
   Serial.println("This line should be printed irrespective of anything.");
   bool myBool = "false";
   Serial.println();
   if (myBool = "true") {
    Serial.println("This line should be printed if the condition is true");
    Serial.println("This is the second line");
   }

}

void loop() {
  // put your main code here, to run repeatedly:
   Serial.println();
   delay(1000);
}
