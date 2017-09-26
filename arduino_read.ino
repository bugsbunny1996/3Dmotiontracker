#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BNO055.h>
#include <utility/imumaths.h>
  
Adafruit_BNO055 bno = Adafruit_BNO055(Adafruit_BNO055::VECTOR_ACCELEROMETER);

void setup(void) 
{
  Serial.begin(9600);

  /* Initialise the sensor */
  if(!bno.begin())
  {
   }
  
  delay(1000);
    
  bno.setExtCrystalUse(true);
}

void loop(void) 
{

  sensors_event_t event; 
  bno.getEvent(&event);
  
  Serial.print(event.orientation.x, 4);
  Serial.print(",");
  Serial.print(event.orientation.y, 4);
  Serial.print(",");
  Serial.print(event.orientation.z, 4);

  
  delay(100);
}