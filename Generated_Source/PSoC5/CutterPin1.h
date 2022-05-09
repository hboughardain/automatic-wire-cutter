/*******************************************************************************
* File Name: CutterPin1.h  
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

#if !defined(CY_PINS_CutterPin1_H) /* Pins CutterPin1_H */
#define CY_PINS_CutterPin1_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "CutterPin1_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 CutterPin1__PORT == 15 && ((CutterPin1__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    CutterPin1_Write(uint8 value);
void    CutterPin1_SetDriveMode(uint8 mode);
uint8   CutterPin1_ReadDataReg(void);
uint8   CutterPin1_Read(void);
void    CutterPin1_SetInterruptMode(uint16 position, uint16 mode);
uint8   CutterPin1_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the CutterPin1_SetDriveMode() function.
     *  @{
     */
        #define CutterPin1_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define CutterPin1_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define CutterPin1_DM_RES_UP          PIN_DM_RES_UP
        #define CutterPin1_DM_RES_DWN         PIN_DM_RES_DWN
        #define CutterPin1_DM_OD_LO           PIN_DM_OD_LO
        #define CutterPin1_DM_OD_HI           PIN_DM_OD_HI
        #define CutterPin1_DM_STRONG          PIN_DM_STRONG
        #define CutterPin1_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define CutterPin1_MASK               CutterPin1__MASK
#define CutterPin1_SHIFT              CutterPin1__SHIFT
#define CutterPin1_WIDTH              1u

/* Interrupt constants */
#if defined(CutterPin1__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in CutterPin1_SetInterruptMode() function.
     *  @{
     */
        #define CutterPin1_INTR_NONE      (uint16)(0x0000u)
        #define CutterPin1_INTR_RISING    (uint16)(0x0001u)
        #define CutterPin1_INTR_FALLING   (uint16)(0x0002u)
        #define CutterPin1_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define CutterPin1_INTR_MASK      (0x01u) 
#endif /* (CutterPin1__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define CutterPin1_PS                     (* (reg8 *) CutterPin1__PS)
/* Data Register */
#define CutterPin1_DR                     (* (reg8 *) CutterPin1__DR)
/* Port Number */
#define CutterPin1_PRT_NUM                (* (reg8 *) CutterPin1__PRT) 
/* Connect to Analog Globals */                                                  
#define CutterPin1_AG                     (* (reg8 *) CutterPin1__AG)                       
/* Analog MUX bux enable */
#define CutterPin1_AMUX                   (* (reg8 *) CutterPin1__AMUX) 
/* Bidirectional Enable */                                                        
#define CutterPin1_BIE                    (* (reg8 *) CutterPin1__BIE)
/* Bit-mask for Aliased Register Access */
#define CutterPin1_BIT_MASK               (* (reg8 *) CutterPin1__BIT_MASK)
/* Bypass Enable */
#define CutterPin1_BYP                    (* (reg8 *) CutterPin1__BYP)
/* Port wide control signals */                                                   
#define CutterPin1_CTL                    (* (reg8 *) CutterPin1__CTL)
/* Drive Modes */
#define CutterPin1_DM0                    (* (reg8 *) CutterPin1__DM0) 
#define CutterPin1_DM1                    (* (reg8 *) CutterPin1__DM1)
#define CutterPin1_DM2                    (* (reg8 *) CutterPin1__DM2) 
/* Input Buffer Disable Override */
#define CutterPin1_INP_DIS                (* (reg8 *) CutterPin1__INP_DIS)
/* LCD Common or Segment Drive */
#define CutterPin1_LCD_COM_SEG            (* (reg8 *) CutterPin1__LCD_COM_SEG)
/* Enable Segment LCD */
#define CutterPin1_LCD_EN                 (* (reg8 *) CutterPin1__LCD_EN)
/* Slew Rate Control */
#define CutterPin1_SLW                    (* (reg8 *) CutterPin1__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define CutterPin1_PRTDSI__CAPS_SEL       (* (reg8 *) CutterPin1__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define CutterPin1_PRTDSI__DBL_SYNC_IN    (* (reg8 *) CutterPin1__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define CutterPin1_PRTDSI__OE_SEL0        (* (reg8 *) CutterPin1__PRTDSI__OE_SEL0) 
#define CutterPin1_PRTDSI__OE_SEL1        (* (reg8 *) CutterPin1__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define CutterPin1_PRTDSI__OUT_SEL0       (* (reg8 *) CutterPin1__PRTDSI__OUT_SEL0) 
#define CutterPin1_PRTDSI__OUT_SEL1       (* (reg8 *) CutterPin1__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define CutterPin1_PRTDSI__SYNC_OUT       (* (reg8 *) CutterPin1__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(CutterPin1__SIO_CFG)
    #define CutterPin1_SIO_HYST_EN        (* (reg8 *) CutterPin1__SIO_HYST_EN)
    #define CutterPin1_SIO_REG_HIFREQ     (* (reg8 *) CutterPin1__SIO_REG_HIFREQ)
    #define CutterPin1_SIO_CFG            (* (reg8 *) CutterPin1__SIO_CFG)
    #define CutterPin1_SIO_DIFF           (* (reg8 *) CutterPin1__SIO_DIFF)
#endif /* (CutterPin1__SIO_CFG) */

/* Interrupt Registers */
#if defined(CutterPin1__INTSTAT)
    #define CutterPin1_INTSTAT            (* (reg8 *) CutterPin1__INTSTAT)
    #define CutterPin1_SNAP               (* (reg8 *) CutterPin1__SNAP)
    
	#define CutterPin1_0_INTTYPE_REG 		(* (reg8 *) CutterPin1__0__INTTYPE)
#endif /* (CutterPin1__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_CutterPin1_H */


/* [] END OF FILE */
