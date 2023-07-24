#define pi 3.14
const int myVariable = 5; 
void setup() {
  // put your setup code here, to run once:
      Serial.begin(115200);
      Serial.println();
}

void loop() {
  // put your main code here, to run repeatedly:
       float areaofCircle = pi*5*5;
       Serial.println(areaofCircle);
}
