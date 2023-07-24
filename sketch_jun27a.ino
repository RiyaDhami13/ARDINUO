void setup() {
  // #include <AFMotor.h>
#include <SoftwareSerial.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

SoftwareSerial bluetooth(10, 11); // RX, TX pins for Bluetooth module

void setup() {
  motor1.setSpeed(255); // Set maximum speed for motor1
  motor2.setSpeed(255); // Set maximum speed for motor2
  motor3.setSpeed(255); // Set maximum speed for motor3
  motor4.setSpeed(255); // Set maximum speed for motor4

  bluetooth.begin(9600); // Set Bluetooth baud rate to 9600
}

void loop() {
  if (bluetooth.available()) {
    char command = bluetooth.read();
    executeCommand(command);
  }
}

void executeCommand(char command) {
  // Execute different commands based on the received character
  switch (command) {
    case 'F':
      moveForward();
      break;
    case 'B':
      moveBackward();
      break;
    case 'L':
      turnLeft();
      break;
    case 'R':
      turnRight();
      break;
    case 'S':
      stopMoving();
      break;
  }
}

void moveForward() {
  motor1.run(FORWARD); // Motor1 rotates forward
  motor2.run(FORWARD); // Motor2 rotates forward
  motor3.run(FORWARD); // Motor3 rotates forward
  motor4.run(FORWARD); // Motor4 rotates forward
}

void moveBackward() {
  motor1.run(BACKWARD); // Motor1 rotates backward
  motor2.run(BACKWARD); // Motor2 rotates backward
  motor3.run(BACKWARD); // Motor3 rotates backward
  motor4.run(BACKWARD); // Motor4 rotates backward
}

void turnLeft() {
  motor1.run(FORWARD); // Motor1 rotates forward
  motor2.run(FORWARD); // Motor2 rotates forward
  motor3.run(BACKWARD); // Motor3 rotates backward
  motor4.run(BACKWARD); // Motor4 rotates backward
}

void turnRight() {
  motor1.run(BACKWARD); // Motor1 rotates backward
  motor2.run(BACKWARD); // Motor2 rotates backward
  motor3.run(FORWARD); // Motor3 rotates forward
  motor4.run(FORWARD); // Motor4 rotates forward
}

void stopMoving() {
  motor1.run(RELEASE); // Motor1 stops
  motor2.run(RELEASE); // Motor2 stops
  motor3.run(RELEASE); // Motor3 stops
  motor4.run(RELEASE); // Motor4 stops
}
put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
