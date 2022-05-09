/*******************************************************************************
* File Name: FeederPin3.h  
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

#if !defined(CY_PINS_FeederPin3_H) /* Pins FeederPin3_H */
#define CY_PINS_FeederPin3_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "FeederPin3_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 FeederPin3__PORT == 15 && ((FeederPin3__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    FeederPin3_Write(uint8 value);
void    FeederPin3_SetDriveMode(uint8 mode);
uint8   FeederPin3_ReadDataReg(void);
uint8   FeederPin3_Read(void);
void    FeederPin3_SetInterruptMode(uint16 position, uint16 mode);
uint8   FeederPin3_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the FeederPin3_SetDriveMode() function.
     *  @{
     */
        #define FeederPin3_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define FeederPin3_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define FeederPin3_DM_RES_UP          PIN_DM_RES_UP
        #define FeederPin3_DM_RES_DWN         PIN_DM_RES_DWN
        #define FeederPin3_DM_OD_LO           PIN_DM_OD_LO
        #define FeederPin3_DM_OD_HI           PIN_DM_OD_HI
        #define FeederPin3_DM_STRONG          PIN_DM_STRONG
        #define FeederPin3_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define FeederPin3_MASK               FeederPin3__MASK
#define FeederPin3_SHIFT              FeederPin3__SHIFT
#define FeederPin3_WIDTH              1u

/* Interrupt constants */
#if defined(FeederPin3__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in FeederPin3_SetInterruptMode() function.
     *  @{
     */
        #define FeederPin3_INTR_NONE      (uint16)(0x0000u)
        #define FeederPin3_INTR_RISING    (uint16)(0x0001u)
        #define FeederPin3_INTR_FALLING   (uint16)(0x0002u)
        #define FeederPin3_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define FeederPin3_INTR_MASK      (0x01u) 
#endif /* (FeederPin3__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define FeederPin3_PS                     (* (reg8 *) FeederPin3__PS)
/* Data Register */
#define FeederPin3_DR                     (* (reg8 *) FeederPin3__DR)
/* Port Number */
#define FeederPin3_PRT_NUM                (* (reg8 *) FeederPin3__PRT) 
/* Connect to Analog Globals */                                                  
#define FeederPin3_AG                     (* (reg8 *) FeederPin3__AG)                       
/* Analog MUX bux enable */
#define FeederPin3_AMUX                   (* (reg8 *) FeederPin3__AMUX) 
/* Bidirectional Enable */                                                        
#define FeederPin3_BIE                    (* (reg8 *) FeederPin3__BIE)
/* Bit-mask for Aliased Register Access */
#define FeederPin3_BIT_MASK               (* (reg8 *) FeederPin3__BIT_MASK)
/* Bypass Enable */
#define FeederPin3_BYP                    (* (reg8 *) FeederPin3__BYP)
/* Port wide control signals */                                                   
#define FeederPin3_CTL                    (* (reg8 *) FeederPin3__CTL)
/* Drive Modes */
#define FeederPin3_DM0                    (* (reg8 *) FeederPin3__DM0) 
#define FeederPin3_DM1                    (* (reg8 *) FeederPin3__DM1)
#define FeederPin3_DM2                    (* (reg8 *) FeederPin3__DM2) 
/* Input Buffer Disable Override */
#define FeederPin3_INP_DIS                (* (reg8 *) FeederPin3__INP_DIS)
/* LCD Common or Segment Drive */
#define FeederPin3_LCD_COM_SEG            (* (reg8 *) FeederPin3__LCD_COM_SEG)
/* Enable Segment LCD */
#define FeederPin3_LCD_EN                 (* (reg8 *) FeederPin3__LCD_EN)
/* Slew Rate Control */
#define FeederPin3_SLW                    (* (reg8 *) FeederPin3__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define FeederPin3_PRTDSI__CAPS_SEL       (* (reg8 *) FeederPin3__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define FeederPin3_PRTDSI__DBL_SYNC_IN    (* (reg8 *) FeederPin3__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define FeederPin3_PRTDSI__OE_SEL0        (* (reg8 *) FeederPin3__PRTDSI__OE_SEL0) 
#define FeederPin3_PRTDSI__OE_SEL1        (* (reg8 *) FeederPin3__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define FeederPin3_PRTDSI__OUT_SEL0       (* (reg8 *) FeederPin3__PRTDSI__OUT_SEL0) 
#define FeederPin3_PRTDSI__OUT_SEL1       (* (reg8 *) FeederPin3__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define FeederPin3_PRTDSI__SYNC_OUT       (* (reg8 *) FeederPin3__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(FeederPin3__SIO_CFG)
    #define FeederPin3_SIO_HYST_EN        (* (reg8 *) FeederPin3__SIO_HYST_EN)
    #define FeederPin3_SIO_REG_HIFREQ     (* (reg8 *) FeederPin3__SIO_REG_HIFREQ)
    #define FeederPin3_SIO_CFG            (* (reg8 *) FeederPin3__SIO_CFG)
    #define FeederPin3_SIO_DIFF           (* (reg8 *) FeederPin3__SIO_DIFF)
#endif /* (FeederPin3__SIO_CFG) */

/* Interrupt Registers */
#if defined(FeederPin3__INTSTAT)
    #define FeederPin3_INTSTAT            (* (reg8 *) FeederPin3__INTSTAT)
    #define FeederPin3_SNAP               (* (reg8 *) FeederPin3__SNAP)
    
	#define FeederPin3_0_INTTYPE_REG 		(* (reg8 *) FeederPin3__0__INTTYPE)
#endif /* (FeederPin3__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_FeederPin3_H */


/* [] END OF FILE */
