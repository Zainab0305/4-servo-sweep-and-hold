// C++ code
//

#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

int pos = 0;        
int direction = 1;   

unsigned long startTime;
bool sweepDone = false;

void setup()
{
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(7);
  servo4.attach(9);
  
  startTime = millis();
}

void loop()
{
 unsigned long currentTime = millis();

  if (currentTime - startTime < 2000) {
    
    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    servo4.write(pos);

    pos += direction * 3;   

    if (pos >= 180) {
      pos = 180;
      direction = -1;
    } else if (pos <= 0) {
      pos = 0;
      direction = 1;
    }

    delay(10); 
  } else {
    servo1.write(90);
    servo2.write(90);
    servo3.write(90);
    servo4.write(90);
  }
}