// Control Torniquete
// 

void setup()
{
	pinMode(3, OUTPUT); // control 24 Vdc - 12Vdc
	pinMode(4, OUTPUT); // control GND
	pinMode(5, OUTPUT);
	pinMode(6, OUTPUT);
	pinMode(7, INPUT);
	pinMode(8, INPUT);
}


void loop()
{

digitalWrite(4, LOW);
delay(1000);
digitalWrite(4, HIGH);
delay(500);
digitalWrite(3, LOW);
delay(1000);
digitalWrite(3, HIGH);
delay(2000);
	
}