#include "project.h"

double STEP_ANGLE = 1.8;        // value of the step angle from the stepper motor
int PERIOD = 2;                 // desired period for a full rotation of stepper motor shaft

/* 
** Moves the stepper motor by a single step.
** The sequence of control signals for 4 control wires is as follows:
**
** Step P1  P2  P3  P4
**  1   1   0   1   0
**  2   0   1   1   0
**  3   0   1   0   1
**  4   1   0   0   1
** (inspired by Arduino stepper motor library
** https://github.com/arduino-libraries/Stepper/blob/master/src/Stepper.cpp)
*/
void step_motor(int step) {
    switch (step) {
        case 0:
            Pin_1_Write(1);
            Pin_2_Write(0);
            Pin_3_Write(1);
            Pin_4_Write(0);
            break;
        case 1:
            Pin_1_Write(0);
            Pin_2_Write(1);
            Pin_3_Write(1);
            Pin_4_Write(0);
            break;
        case 2:
            Pin_1_Write(0);
            Pin_2_Write(1);
            Pin_3_Write(0);
            Pin_4_Write(1);
            break;
        case 3:
            Pin_1_Write(1);
            Pin_2_Write(0);
            Pin_3_Write(0);
            Pin_4_Write(1);
            break;
    }
}

/* 
** Moves the stepper motor by the specified number of steps
** This method uses a timer to create a big enough delay between steps
** The timer has a 1 kHz frequency; by using counters, this allows to
** modulate the frequency as wanted. By default, the frequency is 100 Hz.
*/
void step(int steps_to_move) {
    int steps_left = steps_to_move;
    int counter = 0;
    while (steps_left > 0) {
        if ((StepperMotorTimer_STATUS_TC & StepperMotorTimer_ReadStatusRegister()) != 0) {
            counter++;
            if (counter == 5 * PERIOD) {
                step_motor((steps_to_move - steps_left) % 4);
                steps_left--;
                counter = 0;
            }
        }
    }
}

/* 
** Moves the stepper motor by the specified number of rotations
** by using the measured step angle.
*/
void turn_motor(int rotations) {
    step((360 / STEP_ANGLE) * rotations);
}

int main(void) {
    
    CyGlobalIntEnable;
    StepperMotorTimer_Start();
    
    turn_motor(1);
    
    for(;;) {
        
    }
}