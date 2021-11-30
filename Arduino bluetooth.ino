const int ledpin=13;
int state=0;

void setup() {
pinMode(ledpin, OUTPUT);
Serial.begin(9600);
}
void loop() {
// put your main code here, to run repeatedly:
if (Serial.available()>0)
{
int state= Serial.read();
if (state=='0')
{
digitalWrite(ledpin,LOW);
Serial.println("LED is OFF");
}
if (state=='1')
{
digitalWrite(ledpin,HIGH);
Serial.println("LED is ON");
}
}
delay(1000);
}
