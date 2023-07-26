void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
static int testVariable;
while (testVariable<5) {
  Serial.println("We are in while loop");
}
testVariable++;
Serial.println(testVariable);
delay(1000);
}
