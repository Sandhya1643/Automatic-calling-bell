void setup() {
  // put your setup code here, to run once:
pinMode(4,INPUT);
pinMode(5,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int a=digitalRead(4);
Serial.println(a);
if (a==1)
{
  digitalWrite(5,HIGH);
  delay(1000);
  digitalWrite(5,LOW);
  delay(1000);
}
else
{
  digitalWrite(5,LOW);
  delay(1000);
}
}
