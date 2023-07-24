
  int myVariable = 3;
void setup(){
  //put your setup code to run once:
  
    Serial.begin(9600);
    Serial.println(myVariable);
    }

    void loop(){
      //put your main code here to run repeatdly:
        Serial.println(myVariable);
    }