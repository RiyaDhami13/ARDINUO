void setup() {
  // put your setup code here, to run once:
    Serial.begin(115200);
    int x = 5;
    switch (x){
      case 1 ... 10:
      Serial.println("Choice1");
      break;
      case 11 ... 20:
      Serial.println("Choice2");
      break;
      case 21 ... 30:
      Serial.println("Choice3");
      break;
      case 31 ... 40:
      Serial.println("Choice 4");
      break;
      case 41 ... 50:
      Serial.println("Choice 5");
      break;
      default:
      Serial.println("It doesn't match anywhere");
      break;

    }
}

void loop() {
  // put your main code here, to run repeatedly:

}
