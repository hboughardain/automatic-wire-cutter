/*******************************************************************************
* File Name: FeederPin2.h  
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

#if !defined(CY_PINS_FeederPin2_H) /* Pins FeederPin2_H */
#define CY_PINS_FeederPin2_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "FeederPin2_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 FeederPin2__PORT == 15 && ((FeederPin2__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    FeederPin2_Write(uint8 value);
void    FeederPin2_SetDriveMode(uint8 mode);
uint8   FeederPin2_ReadDataReg(void);
uint8   FeederPin2_Read(void);
void    FeederPin2_SetInterruptMode(uint16 position, uint16 mode);
uint8   FeederPin2_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the FeederPin2_SetDriveMode() function.
     *  @{
     */
        #define FeederPin2_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define FeederPin2_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define FeederPin2_DM_RES_UP          PIN_DM_RES_UP
        #define FeederPin2_DM_RES_DWN         PIN_DM_RES_DWN
        #define FeederPin2_DM_OD_LO           PIN_DM_OD_LO
        #define FeederPin2_DM_OD_HI           PIN_DM_OD_HI
        #define FeederPin2_DM_STRONG          PIN_DM_STRONG
        #define FeederPin2_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define FeederPin2_MASK               FeederPin2__MASK
#define FeederPin2_SHIFT              FeederPin2__SHIFT
#define FeederPin2_WIDTH              1u

/* Interrupt constants */
#if defined(FeederPin2__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in FeederPin2_SetInterruptMode() function.
     *  @{
     */
        #define FeederPin2_INTR_NONE      (uint16)(0x0000u)
        #define FeederPin2_INTR_RISING    (uint16)(0x0001u)
        #define FeederPin2_INTR_FALLING   (uint16)(0x0002u)
        #define FeederPin2_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define FeederPin2_INTR_MASK      (0x01u) 
#endif /* (FeederPin2__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define FeederPin2_PS                     (* (reg8 *) FeederPin2__PS)
/* Data Register */
#define FeederPin2_DR                     (* (reg8 *) FeederPin2__DR)
/* Port Number */
#define FeederPin2_PRT_NUM                (* (reg8 *) FeederPin2__PRT) 
/* Connect to Analog Globals */                                                  
#define FeederPin2_AG                     (* (reg8 *) FeederPin2__AG)                       
/* Analog MUX bux enable */
#define FeederPin2_AMUX                   (* (reg8 *) FeederPin2__AMUX) 
/* Bidirectional Enable */                                                        
#define FeederPin2_BIE                    (* (reg8 *) FeederPin2__BIE)
/* Bit-mask for Aliased Register Access */
#define FeederPin2_BIT_MASK               (* (reg8 *) FeederPin2__BIT_MASK)
/* Bypass Enable */
#define FeederPin2_BYP                    (* (reg8 *) FeederPin2__BYP)
/* Port wide control signals */                                                   
#define FeederPin2_CTL                    (* (reg8 *) FeederPin2__CTL)
/* Drive Modes */
#define FeederPin2_DM0                    (* (reg8 *) FeederPin2__DM0) 
#define FeederPin2_DM1                    (* (reg8 *) FeederPin2__DM1)
#define FeederPin2_DM2                    (* (reg8 *) FeederPin2__DM2) 
/* Input Buffer Disable Override */
#define FeederPin2_INP_DIS                (* (reg8 *) FeederPin2__INP_DIS)
/* LCD Common or Segment Drive */
#define FeederPin2_LCD_COM_SEG            (* (reg8 *) FeederPin2__LCD_COM_SEG)
/* Enable Segment LCD */
#define FeederPin2_LCD_EN                 (* (reg8 *) FeederPin2__LCD_EN)
/* Slew Rate Control */
#define FeederPin2_SLW                    (* (reg8 *) FeederPin2__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define FeederPin2_PRTDSI__CAPS_SEL       (* (reg8 *) FeederPin2__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define FeederPin2_PRTDSI__DBL_SYNC_IN    (* (reg8 *) FeederPin2__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define FeederPin2_PRTDSI__OE_SEL0        (* (reg8 *) FeederPin2__PRTDSI__OE_SEL0) 
#define FeederPin2_PRTDSI__OE_SEL1        (* (reg8 *) FeederPin2__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define FeederPin2_PRTDSI__OUT_SEL0       (* (reg8 *) FeederPin2__PRTDSI__OUT_SEL0) 
#define FeederPin2_PRTDSI__OUT_SEL1       (* (reg8 *) FeederPin2__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define FeederPin2_PRTDSI__SYNC_OUT       (* (reg8 *) FeederPin2__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(FeederPin2__SIO_CFG)
    #define FeederPin2_SIO_HYST_EN        (* (reg8 *) FeederPin2__SIO_HYST_EN)
    #define FeederPin2_SIO_REG_HIFREQ     (* (reg8 *) FeederPin2__SIO_REG_HIFREQ)
    #define FeederPin2_SIO_CFG            (* (reg8 *) FeederPin2__SIO_CFG)
    #define FeederPin2_SIO_DIFF           (* (reg8 *) FeederPin2__SIO_DIFF)
#endif /* (FeederPin2__SIO_CFG) */

/* Interrupt Registers */
#if defined(FeederPin2__INTSTAT)
    #define FeederPin2_INTSTAT            (* (reg8 *) FeederPin2__INTSTAT)
    #define FeederPin2_SNAP               (* (reg8 *) FeederPin2__SNAP)
    
	#define FeederPin2_0_INTTYPE_REG 		(* (reg8 *) FeederPin2__0__INTTYPE)
#endif /* (FeederPin2__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_FeederPin2_H */


/* [] END OF FILE */
