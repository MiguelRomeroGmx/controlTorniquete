// Control Torniquete
// 
// 
int entrar;
int salir;

void setup()
{
	pinMode(3, OUTPUT); // control 24 Vdc - 12Vdc entrar
	pinMode(4, OUTPUT); // control GND entrar
	pinMode(5, OUTPUT); // control 24 Vdc - 12 Vdc salir
	pinMode(6, OUTPUT); // control GND salir
	pinMode(7, INPUT); // Entrada boton / Controladora Entrar
	pinMode(8, INPUT); // Entrada boton / Controladora Salir
	digitalWrite(3, HIGH); // Todas las salidas en Alto
	digitalWrite(4, HIGH);
	digitalWrite(5, HIGH);
	digitalWrite(6, HIGH);
	delay(500);
	digitalWrite(3, LOW); // Activar 24Vdc a torniquete para cierre
	delay(1000);
	digitalWrite(3, HIGH); //Desactivar 24 Vdc y mantener 12 Vdc
	delay(1000);
	digitalWrite(5, LOW); // Activar 24Vdc a torniquete para cierre
	delay(1000);
	digitalWrite(5, HIGH); //Desactivar 24 Vdc y mantener 12 Vdc
	delay(2000);
}


void loop()
{

entrar = digitalRead(7); // Leyendo entradas
salir = digitalRead(8);

	if(entrar == 1){

	    digitalWrite(4, LOW); // Desactivar GND (Liberar torniquete)
		delay(1000);
		digitalWrite(4, HIGH); //Activar GND
		delay(500);
		digitalWrite(3, LOW); // Activar 24Vdc a torniquete para cierre
		delay(1000);
		digitalWrite(3, HIGH); //Desactivar 24 Vdc y mantener 12 Vdc
		delay(2000);
	}

	if(salir == 1){

	    digitalWrite(6, LOW); // Desactivar GND (Liberar torniquete)
		delay(1000);
		digitalWrite(6, HIGH); //Activar GND
		delay(500);
		digitalWrite(5, LOW); // Activar 24Vdc a torniquete para cierre
		delay(1000);
		digitalWrite(5, HIGH); //Desactivar 24 Vdc y mantener 12 Vdc
		delay(2000);

	
	}

}