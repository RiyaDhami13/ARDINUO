void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  /*to print like
  *
  **
  ***
  ****
  *****          
  */
  for (int i=0;i<5;i++){
    for (int j=0;j<=i;j++){
      Serial.print("*");
    }
Serial.println();
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
