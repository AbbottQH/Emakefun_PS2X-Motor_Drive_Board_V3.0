#include "Emakefun_MotorDriver.h"
#include "KeyMap.h"
Emakefun_MotorDriver mMotorDriver = Emakefun_MotorDriver();
Emakefun_DCMotor *AdaDCMotor_1 = mMotorDriver.getMotor(1);
Emakefun_Servo *Servo1 = mMotorDriver.getServo(1);
Emakefun_Sensor *rgb = mMotorDriver.getSensor(E_RGB);
Emakefun_Sensor *ir = mMotorDriver.getSensor(E_IR);
Emakefun_Sensor *buzzer = mMotorDriver.getSensor(E_BUZZER);
Emakefun_Sensor *ps2 = mMotorDriver.getSensor(E_PS2X);
Emakefun_Sensor *nrf = mMotorDriver.getSensor(E_NRF24L01);
Emakefun_Sensor *ext = mMotorDriver.getSensor(E_EXTERN_PIN);

void setup()
{
  Serial.begin(9600);
  mMotorDriver.begin(50);
}

void loop()
{
//  //舵机调用
//  Servo1->writeServo(0); 
//  //DC电机调用
//  AdaDCMotor_1->setSpeed(200);
//  AdaDCMotor_1->run(1);
//  
  //RGB调用
  rgb->SetRgbColor(E_RGB_ALL,RGB_RED);
  //蜂鸣器调用
  buzzer->Sing(S_connection);
//  //PS2调用
//  byte PSS_X = 0, PSS_Y = 0;
//  static int vibrate = 0;
//  ps2->mPs2x->read_gamepad(false, vibrate); // read controller and set large motor to spin at 'vibrate' speed
//  if (ps2->mPs2x->ButtonDataByte()) {       //读取PS2是否有按键按下
//      if (ps2->mPs2x->Button(PSB_PAD_UP)){  //判断PS2按键
//        }
//  }
//  //IR调用
//  byte irKeyCode;
//  if (irKeyCode = ir->mIrRecv->getCode()){
//    Serial.println(1);
//    switch ((E_IR_KEYCODE)ir->mIrRecv->getIrKey(irKeyCode)){
//    }
//  }
//  //NRF24L01调用
//  nrf->GetNrf24L01((char *)"Emakefun"); //NRF24L01接收的数据，"Emakefun"为接收地址
//  nrf->sendNrf24l01((char *)"Emakefun",123123); //NRF24L01发送数据，"Emakefun"为发送地址，"123123"为发送的数据
//  delay(2000); 
}
