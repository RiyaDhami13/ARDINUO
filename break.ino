void setup() {
Serial.begin(9600);
int multiple = 1;
while (multiple<=10){
  Serial.println(multiple*2);
  multiple++;
  if (multiple == 5){
    Serial.println("Breaking the loop now");
    break;
  }
}

}
 



void loop() {
  // put your main code here, to run repeatedly:

}
