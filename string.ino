void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("This is string");

char Str[5]={'r','i','y','a'};
Serial.println(Str);

char Str2[5]={'r','i','y','a','\0'};
Serial.println(Str2);

char Str3[]="riya";
Serial.println(Str);

char Str4[5]="riya";
Serial.println(Str4);

char Str5[14]="riya";
Serial.println(Str5);

char Str6="riya";
Serial.println(Str6);
}

void loop() {
  // put your main code here, to run repeatedly:

}
