void setup() {
  // put your setup code here, to run once:
   Serial.begin(115200);
   Serial.println("This line should be printed irrespective of anything");
   Serial.println();
   if (4==4 && 8>5){
    Serial.println("Yes the values are correct");
    Serial.println();
   }
   if (4!=9 || 9>4){
    Serial.println("At least one or both are true");
    Serial.println("Or else this line won't be printed");
   }
}

void loop() {
  // put your main code here, to run repeatedly:
    Serial.println();
    delay(9600);
}
