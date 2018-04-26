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
	digitalWrite(3, HIGH);
	digitalWrite(4, HIGH);
	digitalWrite(5, HIGH);
	digitalWrite(6, HIGH);
}


void loop()
{

digitalWrite(4, LOW); // Desactivar GND (Liberar torniquete)
delay(1000);
digitalWrite(4, HIGH); //Activar GND
delay(500);
digitalWrite(3, LOW); // Activar 24Vdc a torniquete para cierre
delay(1000);
digitalWrite(3, HIGH); //Desactivar 24 Vdc y mantener 12 Vdc
delay(2000);
	
}