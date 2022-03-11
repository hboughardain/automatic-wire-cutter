/*******************************************************************************
* File Name: PWMClock.h
* Version 2.20
*
*  Description:
*   Provides the function and constant definitions for the clock component.
*
*  Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CLOCK_PWMClock_H)
#define CY_CLOCK_PWMClock_H

#include <cytypes.h>
#include <cyfitter.h>


/***************************************
* Conditional Compilation Parameters
***************************************/

/* Check to see if required defines such as CY_PSOC5LP are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5LP)
    #error Component cy_clock_v2_20 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5LP) */


/***************************************
*        Function Prototypes
***************************************/

void PWMClock_Start(void) ;
void PWMClock_Stop(void) ;

#if(CY_PSOC3 || CY_PSOC5LP)
void PWMClock_StopBlock(void) ;
#endif /* (CY_PSOC3 || CY_PSOC5LP) */

void PWMClock_StandbyPower(uint8 state) ;
void PWMClock_SetDividerRegister(uint16 clkDivider, uint8 restart) 
                                ;
uint16 PWMClock_GetDividerRegister(void) ;
void PWMClock_SetModeRegister(uint8 modeBitMask) ;
void PWMClock_ClearModeRegister(uint8 modeBitMask) ;
uint8 PWMClock_GetModeRegister(void) ;
void PWMClock_SetSourceRegister(uint8 clkSource) ;
uint8 PWMClock_GetSourceRegister(void) ;
#if defined(PWMClock__CFG3)
void PWMClock_SetPhaseRegister(uint8 clkPhase) ;
uint8 PWMClock_GetPhaseRegister(void) ;
#endif /* defined(PWMClock__CFG3) */

#define PWMClock_Enable()                       PWMClock_Start()
#define PWMClock_Disable()                      PWMClock_Stop()
#define PWMClock_SetDivider(clkDivider)         PWMClock_SetDividerRegister(clkDivider, 1u)
#define PWMClock_SetDividerValue(clkDivider)    PWMClock_SetDividerRegister((clkDivider) - 1u, 1u)
#define PWMClock_SetMode(clkMode)               PWMClock_SetModeRegister(clkMode)
#define PWMClock_SetSource(clkSource)           PWMClock_SetSourceRegister(clkSource)
#if defined(PWMClock__CFG3)
#define PWMClock_SetPhase(clkPhase)             PWMClock_SetPhaseRegister(clkPhase)
#define PWMClock_SetPhaseValue(clkPhase)        PWMClock_SetPhaseRegister((clkPhase) + 1u)
#endif /* defined(PWMClock__CFG3) */


/***************************************
*             Registers
***************************************/

/* Register to enable or disable the clock */
#define PWMClock_CLKEN              (* (reg8 *) PWMClock__PM_ACT_CFG)
#define PWMClock_CLKEN_PTR          ((reg8 *) PWMClock__PM_ACT_CFG)

/* Register to enable or disable the clock */
#define PWMClock_CLKSTBY            (* (reg8 *) PWMClock__PM_STBY_CFG)
#define PWMClock_CLKSTBY_PTR        ((reg8 *) PWMClock__PM_STBY_CFG)

/* Clock LSB divider configuration register. */
#define PWMClock_DIV_LSB            (* (reg8 *) PWMClock__CFG0)
#define PWMClock_DIV_LSB_PTR        ((reg8 *) PWMClock__CFG0)
#define PWMClock_DIV_PTR            ((reg16 *) PWMClock__CFG0)

/* Clock MSB divider configuration register. */
#define PWMClock_DIV_MSB            (* (reg8 *) PWMClock__CFG1)
#define PWMClock_DIV_MSB_PTR        ((reg8 *) PWMClock__CFG1)

/* Mode and source configuration register */
#define PWMClock_MOD_SRC            (* (reg8 *) PWMClock__CFG2)
#define PWMClock_MOD_SRC_PTR        ((reg8 *) PWMClock__CFG2)

#if defined(PWMClock__CFG3)
/* Analog clock phase configuration register */
#define PWMClock_PHASE              (* (reg8 *) PWMClock__CFG3)
#define PWMClock_PHASE_PTR          ((reg8 *) PWMClock__CFG3)
#endif /* defined(PWMClock__CFG3) */


/**************************************
*       Register Constants
**************************************/

/* Power manager register masks */
#define PWMClock_CLKEN_MASK         PWMClock__PM_ACT_MSK
#define PWMClock_CLKSTBY_MASK       PWMClock__PM_STBY_MSK

/* CFG2 field masks */
#define PWMClock_SRC_SEL_MSK        PWMClock__CFG2_SRC_SEL_MASK
#define PWMClock_MODE_MASK          (~(PWMClock_SRC_SEL_MSK))

#if defined(PWMClock__CFG3)
/* CFG3 phase mask */
#define PWMClock_PHASE_MASK         PWMClock__CFG3_PHASE_DLY_MASK
#endif /* defined(PWMClock__CFG3) */

#endif /* CY_CLOCK_PWMClock_H */


/* [] END OF FILE */
