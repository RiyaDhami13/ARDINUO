  const int MyVariable = 5;
   int myGlobalVariable =763;

void setup(){
  //put your setup code here to run once:
   Serial.begin(9600);
   Serial.println(myGlobalVariable);
   myGlobalVariable = myGlobalVariable-3;
   //this doesn't use qualifier "const" so it can be refined:
   Serial.println(myGlobalVariable);
   Serial.println();

}

void loop (){
  //put your main code here to run repeatdly:
  Serial.println("Printing in loop");
  Serial.println(myGlobalVariable);
  delay(1000);
}