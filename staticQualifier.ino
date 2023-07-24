
void setup(){
  //write your setup code here to run once:
  Serial.begin(115200); 
}

void loop(){
  static int xyz = 0;
  xyz++;
  Serial.println(xyz);
  delay(1000);
}
