void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  int myArray[5]={780,90,45,1223,56,};
  Serial.println(myArray[2]);
  Serial.println();
 myArray[2]=67;
 Serial.println(myArray[2]);
 Serial.println();
 int myVariable=myArray[1]-myArray[2]+0;
 Serial.println(myVariable);
 Serial.println();
 for(int i=0;i<5;i++){
  Serial.println();
  Serial.println(myArray[i]);
 }
 Serial.println();
 for(int i=0;i<5;i++){
  Serial.println();
  myArray[i]=myArray[i]+5;
  Serial.println(myArray[i]);
 }

}

void loop() {
  // put your main code here, to run repeatedly:

}
