#include <Arduino.h>

void setup() {
	// put your setup code here, to run once:

	/* Built in LED example */
	// pinMode(LED_BUILTIN,OUTPUT);  //LED_BUILTIN  D4

	/* PWM example */
	// pinMode(D8, OUTPUT);
	// analogWriteFreq(25000);  // recommended freq for the Delta fan

	/* Serial example */
	Serial.pins(D10, D9);
	Serial.begin(9600);
}

void loop() {
	// put your main code here, to run repeatedly:

	/* Built in LED example */
	// digitalWrite(LED_BUILTIN,HIGH);
	// delay(1000);
	// digitalWrite(LED_BUILTIN,LOW);
	// delay(1000);

	/* PWM example */
	// for (int i = 0; i < 255; i ++) {
	// 	analogWrite(D8, i);  // 255 max
	// 	delay(10);
	// }
	// for (int i = 255; i > 0; i --) {
	// 	analogWrite(D8, i);  // 255 max
	// 	delay(10);
	// }

	/* Serial example */
	Serial.print("CAT\r");
  	delay(1000);
}
