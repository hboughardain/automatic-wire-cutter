#include "project.h"

int main(void) {
    CyGlobalIntEnable;
    
    /*
    Pin_1_Write(1);
    Pin_2_Write(0);
    Pin_3_Write(1);
    Pin_4_Write(0);
    */
    
    for(;;) {
        Pin_1_Write(1);
        Pin_2_Write(0);
        Pin_3_Write(1);
        Pin_4_Write(0);
        CyDelay(20);
        Pin_1_Write(0);
        Pin_2_Write(1);
        Pin_3_Write(1);
        Pin_4_Write(0);
        CyDelay(20);
        Pin_1_Write(0);
        Pin_2_Write(1);
        Pin_3_Write(0);
        Pin_4_Write(1);
        CyDelay(20);
        Pin_1_Write(1);
        Pin_2_Write(0);
        Pin_3_Write(0);
        Pin_4_Write(1);
        CyDelay(20);
    }
}