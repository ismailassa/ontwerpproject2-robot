#include <QMC5883LCompass.h>

QMC5883LCompass compass;


void setup() {
  Serial.begin(9600);
  compass.init();
  compass.setCalibrationOffsets(873.00, 1801.00, -3776.00);
  compass.setCalibrationScales(2.46, 1.19, 0.57);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x, y, z;
	
	compass.read();
  
	x = compass.getX();
	y = compass.getY();
	z = compass.getZ();
  
  
	Serial.print("X: ");
	Serial.print(x);

	Serial.print(" Y: ");
	Serial.print(y);

	Serial.print(" Z: ");
	Serial.print(z);
	Serial.println("");
  delay(1000);

}
