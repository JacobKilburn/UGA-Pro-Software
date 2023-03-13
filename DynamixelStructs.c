#include <stdio.h>

int main(void) {
    struct Dynamixel {
    int ID;
    int baudRate;
    int maxTorque;
    int minVoltage;
    int maxVoltage;
    int maxAngle;
  };


  struct Dynamixel dynamixel1 = {
    .ID = 1,
    .baudRate = 1000000,
    .maxTorque = 1023, //check later
    .minVoltage = 5,
    .maxVoltage = 16,
    .maxAngle = 330
  };

  struct Dynamixel dynamixel2 = {
    .ID = 2,
    .baudRate = 1000000,
    .maxTorque = 1023, //check later
    .minVoltage = 5,
    .maxVoltage = 16,
    .maxAngle = 330
  };

  struct Dynamixel dynamixel3 = {
    .ID = 3,
    .baudRate = 1000000,
    .maxTorque = 1023, //check later
    .minVoltage = 5,
    .maxVoltage = 16,
    .maxAngle = 330
  };

  struct Dynamixel dynamixel4 = {
    .ID = 4,
    .baudRate = 1000000,
    .maxTorque = 1023, //check later
    .minVoltage = 5,
    .maxVoltage = 16,
    .maxAngle = 330
  };

   struct Dynamixel dynamixel5 = {
    .ID = 5,
    .baudRate = 1000000,
    .maxTorque = 1023, //check later
    .minVoltage = 5,
    .maxVoltage = 16,
    .maxAngle = 330
  };

  struct Dynamixel dynamixel6 = {
    .ID = 6,
    .baudRate = 1000000,
    .maxTorque = 1023, //check later
    .minVoltage = 5,
    .maxVoltage = 16,
    .maxAngle = 330
  };
}