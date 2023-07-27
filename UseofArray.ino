void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
int myArray[9]={98,675,86,706,543,72,189,329,200,};
Serial.println(myArray[4]);
Serial.println();
 myArray[2]=55;
Serial.println(myArray[2]);
Serial.println();
int myVariable = myArray[4]+myArray[7]-0;
Serial.println(myVariable);
}

void loop() {
  // put your main code here, to run repeatedly:

}
