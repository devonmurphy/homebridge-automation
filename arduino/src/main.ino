#include <Servo.h>

Servo yaw;
Servo pitch;// create servo object to control a servo
// twelve servo objects can be created on most boards

void setup() {
  yaw.attach(9);  // attaches the servo on pin 9 to the servo object
  pitch.attach(10);  // attaches the servo on pin 9 to the servo object
}

void point(int horz, int vert) {
  yaw.write(horz);
  pitch.write(vert + 90);
}

void sweep(int pitchOffset, int maxAngle, int delayTime) {
  int pos = 0;
  for (pos = 0; pos <= maxAngle; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    yaw.write(pos);              // tell servo to go to position in variable 'pos'
    pitch.write(pitchOffset);
    delay(delayTime);                       // waits 15ms for the servo to reach the position
  }
  for (pos = maxAngle; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    yaw.write(pos);              // tell servo to go to position in variable 'pos'
    pitch.write(pitchOffset);              // tell servo to go to position in variable 'pos'
    delay(delayTime);                       // waits 15ms for the servo to reach the position
  }
}

void fullSweep(int startPos, int maxAngle, int delayTime) {
  for ( int pitch = startPos; pitch <= 180; pitch += 5) {
    sweep(pitch, maxAngle, delayTime);
  }
  for ( int pitch = 180; pitch >= startPos; pitch -= 5) {
    sweep(pitch, maxAngle, delayTime);
  }
}

void loop() {
  int count = 0;
  for ( count = 0; count < 20; count += 1) {
    // Close fast sweep
    fullSweep(random(160, 180), random(60, 100), random(5, 20));
    point(random(0.45), random(160, 180));
    delay(1000 * random(10, 15));
  }
  exit(0);
}

