#include "Emakefun_MotorDriver.h"
Emakefun_MotorDriver mMotorDriver = Emakefun_MotorDriver();
Emakefun_DCMotor *DCMotor_1 = mMotorDriver.getMotor(1);
Emakefun_DCMotor *DCMotor_2 = mMotorDriver.getMotor(2);
Emakefun_DCMotor *DCMotor_3 = mMotorDriver.getMotor(3);
Emakefun_DCMotor *DCMotor_4 = mMotorDriver.getMotor(4);

void setup()
{
    Serial.begin(9600);
    mMotorDriver.begin(50);
}

void loop()
{
  DCMotor_1->setSpeed(200);
  DCMotor_1->run(1);
  DCMotor_2->setSpeed(200);
  DCMotor_2->run(1);
  DCMotor_3->setSpeed(200);
  DCMotor_3->run(1);
  DCMotor_4->setSpeed(200);
  DCMotor_4->run(1);
  delay(4000);
  DCMotor_1->setSpeed(200);
  DCMotor_1->run(2);
  DCMotor_2->setSpeed(200);
  DCMotor_2->run(2);
  DCMotor_3->setSpeed(200);
  DCMotor_3->run(2);
  DCMotor_4->setSpeed(200);
  DCMotor_4->run(2);
  delay(4000);
}
