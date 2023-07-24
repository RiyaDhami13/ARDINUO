void setup() {
  // put your setup code here, to run once:
// <,>,<=,>=,==,!=:
      int myFirstVariable = 9;
      int mySecondVariable = 10;
      Serial.begin(115200);
      Serial.println(mySecondVariable>myFirstVariable);
}

void loop() {
  // put your main code here, to run repeatedly:
    Serial.println();
    delay(500);
}
