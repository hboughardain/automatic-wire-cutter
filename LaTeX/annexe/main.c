#include "project.h"

#define STEP_ANGLE 1.8          // value of the step angle from the stepper motor
#define PERIOD 2                // desired period for a full rotation of stepper motor shaft
#define SERVO_CUT 1750          // PWM value to put servomotor in position to cut wire
#define SERVO_STRIP 2600        // PWM value to put servomotor in position to strip wire

int servo_position = SERVO_CUT;

/* 
** Moves the feeder motor by a single step.
** The sequence of control signals for 4 control wires is as follows:
**
** Step P1  P2  P3  P4
**  1   1   0   1   0
**  2   1   0   0   1
**  3   0   1   0   1
**  4   0   1   1   0
** (inspired by Arduino stepper motor library
** https://github.com/arduino-libraries/Stepper/blob/master/src/Stepper.cpp)
*/
void step_feeder_motor(int step) {
    switch (step) {
        case 0:
            FeederPin1_Write(1);
            FeederPin2_Write(0);
            FeederPin3_Write(1);
            FeederPin4_Write(0);
            break;
        case 1:
            FeederPin1_Write(1);
            FeederPin2_Write(0);
            FeederPin3_Write(0);
            FeederPin4_Write(1);
            break;
        case 2:
            FeederPin1_Write(0);
            FeederPin2_Write(1);
            FeederPin3_Write(0);
            FeederPin4_Write(1);
            break;
        case 3:
            FeederPin1_Write(0);
            FeederPin2_Write(1);
            FeederPin3_Write(1);
            FeederPin4_Write(0);
            break;
    }
}

/* 
** Moves the feeder motor by the specified number of steps
** This method uses a timer to create a big enough delay between steps
** The timer has a 1 kHz frequency; by using counters, this allows to
** modulate the frequency as wanted. By default, the frequency is 100 Hz.
*/
void feeder_motor(int steps_to_move) {
    int steps_left = steps_to_move;
    int counter = 0;
    while (steps_left > 0) {
        if ((StepperMotorTimer_STATUS_TC & StepperMotorTimer_ReadStatusRegister()) != 0) {
            counter++;
            if (counter == 5 * PERIOD) {
                step_feeder_motor((steps_to_move - steps_left) % 4);
                steps_left--;
                counter = 0;
            }
        }
    }
}

/* 
** Moves the feeder motor by the specified length (in mm)
** by using the measured step angle.
** This was measured by testing and concluding that
** one rotation of the feeder motor yields 31 mm of wire.
*/
void turn_feeder_motor(int length) {
    feeder_motor((360 / STEP_ANGLE) * length / 31);
}

/* 
** Moves the cutter motor by a single step.
** The sequence of control signals for 4 control wires is as follows:
**
** Step P1  P2  P3  P4
**  1   1   0   1   0
**  2   1   0   0   1
**  3   0   1   0   1
**  4   0   1   1   0
** (inspired by Arduino stepper motor library
** https://github.com/arduino-libraries/Stepper/blob/master/src/Stepper.cpp)
*/
void step_cutter_motor(int step) {
    switch (step) {
        case 0:
            CutterPin1_Write(1);
            CutterPin2_Write(0);
            CutterPin3_Write(1);
            CutterPin4_Write(0);
            break;
        case 1:
            CutterPin1_Write(1);
            CutterPin2_Write(0);
            CutterPin3_Write(0);
            CutterPin4_Write(1);
            break;
        case 2:
            CutterPin1_Write(0);
            CutterPin2_Write(1);
            CutterPin3_Write(0);
            CutterPin4_Write(1);
            break;
        case 3:
            CutterPin1_Write(0);
            CutterPin2_Write(1);
            CutterPin3_Write(1);
            CutterPin4_Write(0);
            break;
    }
}

/* 
** Moves the cutter motor by the specified number of steps
** This method uses a timer to create a big enough delay between steps
** The timer has a 1 kHz frequency; by using counters, this allows to
** modulate the frequency as wanted. By default, the frequency is 100 Hz.
*/
void cutter_motor(int steps_to_move) {
    int steps_left = steps_to_move;
    int counter = 0;
    while (steps_left > 0) {
        if ((StepperMotorTimer_STATUS_TC & StepperMotorTimer_ReadStatusRegister()) != 0) {
            counter++;
            if (counter == 5 * PERIOD) {
                step_cutter_motor((steps_to_move - steps_left) % 4);
                steps_left--;
                counter = 0;
            }
        }
    }
}

/* 
** Moves the cutter motor by the specified number of rotations
** by using the measured step angle.
*/
void turn_cutter_motor(int rotations) {
    cutter_motor((360 / STEP_ANGLE) * rotations);
}

/* 
** Changes the servomotor's position between cutting or stripping stance.
*/
void toggle_servo_position() {
    if (servo_position == SERVO_CUT) {
        servo_position = SERVO_STRIP;
    } else if (servo_position == SERVO_STRIP) {
        servo_position = SERVO_CUT;
    }
    PWM_WriteCompare(servo_position);
    CyDelay(100);
}

int main(void) {
    
    CyGlobalIntEnable;
    StepperMotorTimer_Start();
    PWM_Start();
    PWM_WriteCompare(SERVO_CUT);
    
    for(;;) {
        CyDelay(1000);
        turn_feeder_motor(50);
        CyDelay(100);
        turn_cutter_motor(1);
        CyDelay(3000);
    }
}