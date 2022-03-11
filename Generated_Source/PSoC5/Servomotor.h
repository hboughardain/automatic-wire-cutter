/*******************************************************************************
* File Name: Servomotor.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Servomotor_H) /* Pins Servomotor_H */
#define CY_PINS_Servomotor_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Servomotor_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Servomotor__PORT == 15 && ((Servomotor__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Servomotor_Write(uint8 value);
void    Servomotor_SetDriveMode(uint8 mode);
uint8   Servomotor_ReadDataReg(void);
uint8   Servomotor_Read(void);
void    Servomotor_SetInterruptMode(uint16 position, uint16 mode);
uint8   Servomotor_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Servomotor_SetDriveMode() function.
     *  @{
     */
        #define Servomotor_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Servomotor_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Servomotor_DM_RES_UP          PIN_DM_RES_UP
        #define Servomotor_DM_RES_DWN         PIN_DM_RES_DWN
        #define Servomotor_DM_OD_LO           PIN_DM_OD_LO
        #define Servomotor_DM_OD_HI           PIN_DM_OD_HI
        #define Servomotor_DM_STRONG          PIN_DM_STRONG
        #define Servomotor_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Servomotor_MASK               Servomotor__MASK
#define Servomotor_SHIFT              Servomotor__SHIFT
#define Servomotor_WIDTH              1u

/* Interrupt constants */
#if defined(Servomotor__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Servomotor_SetInterruptMode() function.
     *  @{
     */
        #define Servomotor_INTR_NONE      (uint16)(0x0000u)
        #define Servomotor_INTR_RISING    (uint16)(0x0001u)
        #define Servomotor_INTR_FALLING   (uint16)(0x0002u)
        #define Servomotor_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Servomotor_INTR_MASK      (0x01u) 
#endif /* (Servomotor__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Servomotor_PS                     (* (reg8 *) Servomotor__PS)
/* Data Register */
#define Servomotor_DR                     (* (reg8 *) Servomotor__DR)
/* Port Number */
#define Servomotor_PRT_NUM                (* (reg8 *) Servomotor__PRT) 
/* Connect to Analog Globals */                                                  
#define Servomotor_AG                     (* (reg8 *) Servomotor__AG)                       
/* Analog MUX bux enable */
#define Servomotor_AMUX                   (* (reg8 *) Servomotor__AMUX) 
/* Bidirectional Enable */                                                        
#define Servomotor_BIE                    (* (reg8 *) Servomotor__BIE)
/* Bit-mask for Aliased Register Access */
#define Servomotor_BIT_MASK               (* (reg8 *) Servomotor__BIT_MASK)
/* Bypass Enable */
#define Servomotor_BYP                    (* (reg8 *) Servomotor__BYP)
/* Port wide control signals */                                                   
#define Servomotor_CTL                    (* (reg8 *) Servomotor__CTL)
/* Drive Modes */
#define Servomotor_DM0                    (* (reg8 *) Servomotor__DM0) 
#define Servomotor_DM1                    (* (reg8 *) Servomotor__DM1)
#define Servomotor_DM2                    (* (reg8 *) Servomotor__DM2) 
/* Input Buffer Disable Override */
#define Servomotor_INP_DIS                (* (reg8 *) Servomotor__INP_DIS)
/* LCD Common or Segment Drive */
#define Servomotor_LCD_COM_SEG            (* (reg8 *) Servomotor__LCD_COM_SEG)
/* Enable Segment LCD */
#define Servomotor_LCD_EN                 (* (reg8 *) Servomotor__LCD_EN)
/* Slew Rate Control */
#define Servomotor_SLW                    (* (reg8 *) Servomotor__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Servomotor_PRTDSI__CAPS_SEL       (* (reg8 *) Servomotor__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Servomotor_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Servomotor__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Servomotor_PRTDSI__OE_SEL0        (* (reg8 *) Servomotor__PRTDSI__OE_SEL0) 
#define Servomotor_PRTDSI__OE_SEL1        (* (reg8 *) Servomotor__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Servomotor_PRTDSI__OUT_SEL0       (* (reg8 *) Servomotor__PRTDSI__OUT_SEL0) 
#define Servomotor_PRTDSI__OUT_SEL1       (* (reg8 *) Servomotor__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Servomotor_PRTDSI__SYNC_OUT       (* (reg8 *) Servomotor__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Servomotor__SIO_CFG)
    #define Servomotor_SIO_HYST_EN        (* (reg8 *) Servomotor__SIO_HYST_EN)
    #define Servomotor_SIO_REG_HIFREQ     (* (reg8 *) Servomotor__SIO_REG_HIFREQ)
    #define Servomotor_SIO_CFG            (* (reg8 *) Servomotor__SIO_CFG)
    #define Servomotor_SIO_DIFF           (* (reg8 *) Servomotor__SIO_DIFF)
#endif /* (Servomotor__SIO_CFG) */

/* Interrupt Registers */
#if defined(Servomotor__INTSTAT)
    #define Servomotor_INTSTAT            (* (reg8 *) Servomotor__INTSTAT)
    #define Servomotor_SNAP               (* (reg8 *) Servomotor__SNAP)
    
	#define Servomotor_0_INTTYPE_REG 		(* (reg8 *) Servomotor__0__INTTYPE)
#endif /* (Servomotor__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Servomotor_H */


/* [] END OF FILE */
