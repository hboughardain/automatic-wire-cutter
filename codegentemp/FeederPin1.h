/*******************************************************************************
* File Name: FeederPin1.h  
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

#if !defined(CY_PINS_FeederPin1_H) /* Pins FeederPin1_H */
#define CY_PINS_FeederPin1_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "FeederPin1_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 FeederPin1__PORT == 15 && ((FeederPin1__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    FeederPin1_Write(uint8 value);
void    FeederPin1_SetDriveMode(uint8 mode);
uint8   FeederPin1_ReadDataReg(void);
uint8   FeederPin1_Read(void);
void    FeederPin1_SetInterruptMode(uint16 position, uint16 mode);
uint8   FeederPin1_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the FeederPin1_SetDriveMode() function.
     *  @{
     */
        #define FeederPin1_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define FeederPin1_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define FeederPin1_DM_RES_UP          PIN_DM_RES_UP
        #define FeederPin1_DM_RES_DWN         PIN_DM_RES_DWN
        #define FeederPin1_DM_OD_LO           PIN_DM_OD_LO
        #define FeederPin1_DM_OD_HI           PIN_DM_OD_HI
        #define FeederPin1_DM_STRONG          PIN_DM_STRONG
        #define FeederPin1_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define FeederPin1_MASK               FeederPin1__MASK
#define FeederPin1_SHIFT              FeederPin1__SHIFT
#define FeederPin1_WIDTH              1u

/* Interrupt constants */
#if defined(FeederPin1__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in FeederPin1_SetInterruptMode() function.
     *  @{
     */
        #define FeederPin1_INTR_NONE      (uint16)(0x0000u)
        #define FeederPin1_INTR_RISING    (uint16)(0x0001u)
        #define FeederPin1_INTR_FALLING   (uint16)(0x0002u)
        #define FeederPin1_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define FeederPin1_INTR_MASK      (0x01u) 
#endif /* (FeederPin1__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define FeederPin1_PS                     (* (reg8 *) FeederPin1__PS)
/* Data Register */
#define FeederPin1_DR                     (* (reg8 *) FeederPin1__DR)
/* Port Number */
#define FeederPin1_PRT_NUM                (* (reg8 *) FeederPin1__PRT) 
/* Connect to Analog Globals */                                                  
#define FeederPin1_AG                     (* (reg8 *) FeederPin1__AG)                       
/* Analog MUX bux enable */
#define FeederPin1_AMUX                   (* (reg8 *) FeederPin1__AMUX) 
/* Bidirectional Enable */                                                        
#define FeederPin1_BIE                    (* (reg8 *) FeederPin1__BIE)
/* Bit-mask for Aliased Register Access */
#define FeederPin1_BIT_MASK               (* (reg8 *) FeederPin1__BIT_MASK)
/* Bypass Enable */
#define FeederPin1_BYP                    (* (reg8 *) FeederPin1__BYP)
/* Port wide control signals */                                                   
#define FeederPin1_CTL                    (* (reg8 *) FeederPin1__CTL)
/* Drive Modes */
#define FeederPin1_DM0                    (* (reg8 *) FeederPin1__DM0) 
#define FeederPin1_DM1                    (* (reg8 *) FeederPin1__DM1)
#define FeederPin1_DM2                    (* (reg8 *) FeederPin1__DM2) 
/* Input Buffer Disable Override */
#define FeederPin1_INP_DIS                (* (reg8 *) FeederPin1__INP_DIS)
/* LCD Common or Segment Drive */
#define FeederPin1_LCD_COM_SEG            (* (reg8 *) FeederPin1__LCD_COM_SEG)
/* Enable Segment LCD */
#define FeederPin1_LCD_EN                 (* (reg8 *) FeederPin1__LCD_EN)
/* Slew Rate Control */
#define FeederPin1_SLW                    (* (reg8 *) FeederPin1__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define FeederPin1_PRTDSI__CAPS_SEL       (* (reg8 *) FeederPin1__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define FeederPin1_PRTDSI__DBL_SYNC_IN    (* (reg8 *) FeederPin1__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define FeederPin1_PRTDSI__OE_SEL0        (* (reg8 *) FeederPin1__PRTDSI__OE_SEL0) 
#define FeederPin1_PRTDSI__OE_SEL1        (* (reg8 *) FeederPin1__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define FeederPin1_PRTDSI__OUT_SEL0       (* (reg8 *) FeederPin1__PRTDSI__OUT_SEL0) 
#define FeederPin1_PRTDSI__OUT_SEL1       (* (reg8 *) FeederPin1__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define FeederPin1_PRTDSI__SYNC_OUT       (* (reg8 *) FeederPin1__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(FeederPin1__SIO_CFG)
    #define FeederPin1_SIO_HYST_EN        (* (reg8 *) FeederPin1__SIO_HYST_EN)
    #define FeederPin1_SIO_REG_HIFREQ     (* (reg8 *) FeederPin1__SIO_REG_HIFREQ)
    #define FeederPin1_SIO_CFG            (* (reg8 *) FeederPin1__SIO_CFG)
    #define FeederPin1_SIO_DIFF           (* (reg8 *) FeederPin1__SIO_DIFF)
#endif /* (FeederPin1__SIO_CFG) */

/* Interrupt Registers */
#if defined(FeederPin1__INTSTAT)
    #define FeederPin1_INTSTAT            (* (reg8 *) FeederPin1__INTSTAT)
    #define FeederPin1_SNAP               (* (reg8 *) FeederPin1__SNAP)
    
	#define FeederPin1_0_INTTYPE_REG 		(* (reg8 *) FeederPin1__0__INTTYPE)
#endif /* (FeederPin1__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_FeederPin1_H */


/* [] END OF FILE */
