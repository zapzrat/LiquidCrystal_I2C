#include <Wire.h>
#include <LiquidCrystal_I2C.h>
// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

int count_c = 0;
void setup()
{
	// initialize the LCD
	Serial.begin(9600);
	Serial.println("Micto Project Thailand ~^.^~");

	lcd.begin();
	lcd.setCursor(0, 0);
	lcd.print("Micro Project TH");
	// lcd.setCursor(0, 1);
	// lcd.print("Micro Project Thailand");
}

void loop()
{

	count_c++;
	if (count_c > 9)
	{
		count_c = 0;
	}

	lcd.setCursor(0, 1);
	lcd.print(count_c);

	Serial.println(count_c);
	delay(1000);

	// Do nothing here...
}
