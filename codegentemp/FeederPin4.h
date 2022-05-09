/*******************************************************************************
* File Name: FeederPin4.h  
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

#if !defined(CY_PINS_FeederPin4_H) /* Pins FeederPin4_H */
#define CY_PINS_FeederPin4_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "FeederPin4_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 FeederPin4__PORT == 15 && ((FeederPin4__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    FeederPin4_Write(uint8 value);
void    FeederPin4_SetDriveMode(uint8 mode);
uint8   FeederPin4_ReadDataReg(void);
uint8   FeederPin4_Read(void);
void    FeederPin4_SetInterruptMode(uint16 position, uint16 mode);
uint8   FeederPin4_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the FeederPin4_SetDriveMode() function.
     *  @{
     */
        #define FeederPin4_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define FeederPin4_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define FeederPin4_DM_RES_UP          PIN_DM_RES_UP
        #define FeederPin4_DM_RES_DWN         PIN_DM_RES_DWN
        #define FeederPin4_DM_OD_LO           PIN_DM_OD_LO
        #define FeederPin4_DM_OD_HI           PIN_DM_OD_HI
        #define FeederPin4_DM_STRONG          PIN_DM_STRONG
        #define FeederPin4_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define FeederPin4_MASK               FeederPin4__MASK
#define FeederPin4_SHIFT              FeederPin4__SHIFT
#define FeederPin4_WIDTH              1u

/* Interrupt constants */
#if defined(FeederPin4__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in FeederPin4_SetInterruptMode() function.
     *  @{
     */
        #define FeederPin4_INTR_NONE      (uint16)(0x0000u)
        #define FeederPin4_INTR_RISING    (uint16)(0x0001u)
        #define FeederPin4_INTR_FALLING   (uint16)(0x0002u)
        #define FeederPin4_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define FeederPin4_INTR_MASK      (0x01u) 
#endif /* (FeederPin4__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define FeederPin4_PS                     (* (reg8 *) FeederPin4__PS)
/* Data Register */
#define FeederPin4_DR                     (* (reg8 *) FeederPin4__DR)
/* Port Number */
#define FeederPin4_PRT_NUM                (* (reg8 *) FeederPin4__PRT) 
/* Connect to Analog Globals */                                                  
#define FeederPin4_AG                     (* (reg8 *) FeederPin4__AG)                       
/* Analog MUX bux enable */
#define FeederPin4_AMUX                   (* (reg8 *) FeederPin4__AMUX) 
/* Bidirectional Enable */                                                        
#define FeederPin4_BIE                    (* (reg8 *) FeederPin4__BIE)
/* Bit-mask for Aliased Register Access */
#define FeederPin4_BIT_MASK               (* (reg8 *) FeederPin4__BIT_MASK)
/* Bypass Enable */
#define FeederPin4_BYP                    (* (reg8 *) FeederPin4__BYP)
/* Port wide control signals */                                                   
#define FeederPin4_CTL                    (* (reg8 *) FeederPin4__CTL)
/* Drive Modes */
#define FeederPin4_DM0                    (* (reg8 *) FeederPin4__DM0) 
#define FeederPin4_DM1                    (* (reg8 *) FeederPin4__DM1)
#define FeederPin4_DM2                    (* (reg8 *) FeederPin4__DM2) 
/* Input Buffer Disable Override */
#define FeederPin4_INP_DIS                (* (reg8 *) FeederPin4__INP_DIS)
/* LCD Common or Segment Drive */
#define FeederPin4_LCD_COM_SEG            (* (reg8 *) FeederPin4__LCD_COM_SEG)
/* Enable Segment LCD */
#define FeederPin4_LCD_EN                 (* (reg8 *) FeederPin4__LCD_EN)
/* Slew Rate Control */
#define FeederPin4_SLW                    (* (reg8 *) FeederPin4__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define FeederPin4_PRTDSI__CAPS_SEL       (* (reg8 *) FeederPin4__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define FeederPin4_PRTDSI__DBL_SYNC_IN    (* (reg8 *) FeederPin4__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define FeederPin4_PRTDSI__OE_SEL0        (* (reg8 *) FeederPin4__PRTDSI__OE_SEL0) 
#define FeederPin4_PRTDSI__OE_SEL1        (* (reg8 *) FeederPin4__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define FeederPin4_PRTDSI__OUT_SEL0       (* (reg8 *) FeederPin4__PRTDSI__OUT_SEL0) 
#define FeederPin4_PRTDSI__OUT_SEL1       (* (reg8 *) FeederPin4__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define FeederPin4_PRTDSI__SYNC_OUT       (* (reg8 *) FeederPin4__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(FeederPin4__SIO_CFG)
    #define FeederPin4_SIO_HYST_EN        (* (reg8 *) FeederPin4__SIO_HYST_EN)
    #define FeederPin4_SIO_REG_HIFREQ     (* (reg8 *) FeederPin4__SIO_REG_HIFREQ)
    #define FeederPin4_SIO_CFG            (* (reg8 *) FeederPin4__SIO_CFG)
    #define FeederPin4_SIO_DIFF           (* (reg8 *) FeederPin4__SIO_DIFF)
#endif /* (FeederPin4__SIO_CFG) */

/* Interrupt Registers */
#if defined(FeederPin4__INTSTAT)
    #define FeederPin4_INTSTAT            (* (reg8 *) FeederPin4__INTSTAT)
    #define FeederPin4_SNAP               (* (reg8 *) FeederPin4__SNAP)
    
	#define FeederPin4_0_INTTYPE_REG 		(* (reg8 *) FeederPin4__0__INTTYPE)
#endif /* (FeederPin4__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_FeederPin4_H */


/* [] END OF FILE */
