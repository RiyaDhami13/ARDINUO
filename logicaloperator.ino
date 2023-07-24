void setup() {
  // put your setup code here, to run once:
  // &&, ||, !:
   Serial.begin(115200);
   Serial.println("This shows for and operator");
   Serial.println("true and true is ");
   Serial.println(6>3 && 9<13);
   Serial.println("false and true is");
   Serial.println(9<8 && 4>2);
   Serial.println();
   Serial.println();
   Serial.println();
   Serial.println("this shows for or operator");
   Serial.println("true and true gives");
   Serial.println(7>3 || 3==3);
   Serial.println("the false and false is");
   Serial.println(5==1 || 9<3);
   Serial.println();
   Serial.println();
   Serial.println();
  


}

void loop() {
  // put your main code here, to run repeatedly:
   Serial.println();
   delay(1000);
}
