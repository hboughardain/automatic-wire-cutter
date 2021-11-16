/*******************************************************************************
* File Name: StepperMotorTimerInterrupt.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/
#if !defined(CY_ISR_StepperMotorTimerInterrupt_H)
#define CY_ISR_StepperMotorTimerInterrupt_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void StepperMotorTimerInterrupt_Start(void);
void StepperMotorTimerInterrupt_StartEx(cyisraddress address);
void StepperMotorTimerInterrupt_Stop(void);

CY_ISR_PROTO(StepperMotorTimerInterrupt_Interrupt);

void StepperMotorTimerInterrupt_SetVector(cyisraddress address);
cyisraddress StepperMotorTimerInterrupt_GetVector(void);

void StepperMotorTimerInterrupt_SetPriority(uint8 priority);
uint8 StepperMotorTimerInterrupt_GetPriority(void);

void StepperMotorTimerInterrupt_Enable(void);
uint8 StepperMotorTimerInterrupt_GetState(void);
void StepperMotorTimerInterrupt_Disable(void);

void StepperMotorTimerInterrupt_SetPending(void);
void StepperMotorTimerInterrupt_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the StepperMotorTimerInterrupt ISR. */
#define StepperMotorTimerInterrupt_INTC_VECTOR            ((reg32 *) StepperMotorTimerInterrupt__INTC_VECT)

/* Address of the StepperMotorTimerInterrupt ISR priority. */
#define StepperMotorTimerInterrupt_INTC_PRIOR             ((reg8 *) StepperMotorTimerInterrupt__INTC_PRIOR_REG)

/* Priority of the StepperMotorTimerInterrupt interrupt. */
#define StepperMotorTimerInterrupt_INTC_PRIOR_NUMBER      StepperMotorTimerInterrupt__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable StepperMotorTimerInterrupt interrupt. */
#define StepperMotorTimerInterrupt_INTC_SET_EN            ((reg32 *) StepperMotorTimerInterrupt__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the StepperMotorTimerInterrupt interrupt. */
#define StepperMotorTimerInterrupt_INTC_CLR_EN            ((reg32 *) StepperMotorTimerInterrupt__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the StepperMotorTimerInterrupt interrupt state to pending. */
#define StepperMotorTimerInterrupt_INTC_SET_PD            ((reg32 *) StepperMotorTimerInterrupt__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the StepperMotorTimerInterrupt interrupt. */
#define StepperMotorTimerInterrupt_INTC_CLR_PD            ((reg32 *) StepperMotorTimerInterrupt__INTC_CLR_PD_REG)


#endif /* CY_ISR_StepperMotorTimerInterrupt_H */


/* [] END OF FILE */
