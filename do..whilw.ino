void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
   static int testVariable = 4;
   do{
    Serial.println("This will be printed at least once");
   } while(testVariable>5);
}
