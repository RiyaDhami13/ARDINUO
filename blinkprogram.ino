int temp =6 ;
void setup() {
  // put your setup code here, to run once:
pinMode(7, OUTPUT);
pinMode(6, OUTPUT);
pinMode(0, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(temp<50 && temp>10){
  //do thing A:
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(7, LOW);
  delay(1000);
}
else if (temp>50 && temp<70){
  //do thing B:
  digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(6, LOW);
  delay(1000);
}
else 
{
//do thing C:
digitalWrite(0, HIGH);
delay(1000);
digitalWrite(0,LOW);
delay(1000);
}
}
