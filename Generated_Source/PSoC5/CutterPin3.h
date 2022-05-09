/*******************************************************************************
* File Name: CutterPin3.h  
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

#if !defined(CY_PINS_CutterPin3_H) /* Pins CutterPin3_H */
#define CY_PINS_CutterPin3_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "CutterPin3_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 CutterPin3__PORT == 15 && ((CutterPin3__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    CutterPin3_Write(uint8 value);
void    CutterPin3_SetDriveMode(uint8 mode);
uint8   CutterPin3_ReadDataReg(void);
uint8   CutterPin3_Read(void);
void    CutterPin3_SetInterruptMode(uint16 position, uint16 mode);
uint8   CutterPin3_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the CutterPin3_SetDriveMode() function.
     *  @{
     */
        #define CutterPin3_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define CutterPin3_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define CutterPin3_DM_RES_UP          PIN_DM_RES_UP
        #define CutterPin3_DM_RES_DWN         PIN_DM_RES_DWN
        #define CutterPin3_DM_OD_LO           PIN_DM_OD_LO
        #define CutterPin3_DM_OD_HI           PIN_DM_OD_HI
        #define CutterPin3_DM_STRONG          PIN_DM_STRONG
        #define CutterPin3_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define CutterPin3_MASK               CutterPin3__MASK
#define CutterPin3_SHIFT              CutterPin3__SHIFT
#define CutterPin3_WIDTH              1u

/* Interrupt constants */
#if defined(CutterPin3__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in CutterPin3_SetInterruptMode() function.
     *  @{
     */
        #define CutterPin3_INTR_NONE      (uint16)(0x0000u)
        #define CutterPin3_INTR_RISING    (uint16)(0x0001u)
        #define CutterPin3_INTR_FALLING   (uint16)(0x0002u)
        #define CutterPin3_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define CutterPin3_INTR_MASK      (0x01u) 
#endif /* (CutterPin3__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define CutterPin3_PS                     (* (reg8 *) CutterPin3__PS)
/* Data Register */
#define CutterPin3_DR                     (* (reg8 *) CutterPin3__DR)
/* Port Number */
#define CutterPin3_PRT_NUM                (* (reg8 *) CutterPin3__PRT) 
/* Connect to Analog Globals */                                                  
#define CutterPin3_AG                     (* (reg8 *) CutterPin3__AG)                       
/* Analog MUX bux enable */
#define CutterPin3_AMUX                   (* (reg8 *) CutterPin3__AMUX) 
/* Bidirectional Enable */                                                        
#define CutterPin3_BIE                    (* (reg8 *) CutterPin3__BIE)
/* Bit-mask for Aliased Register Access */
#define CutterPin3_BIT_MASK               (* (reg8 *) CutterPin3__BIT_MASK)
/* Bypass Enable */
#define CutterPin3_BYP                    (* (reg8 *) CutterPin3__BYP)
/* Port wide control signals */                                                   
#define CutterPin3_CTL                    (* (reg8 *) CutterPin3__CTL)
/* Drive Modes */
#define CutterPin3_DM0                    (* (reg8 *) CutterPin3__DM0) 
#define CutterPin3_DM1                    (* (reg8 *) CutterPin3__DM1)
#define CutterPin3_DM2                    (* (reg8 *) CutterPin3__DM2) 
/* Input Buffer Disable Override */
#define CutterPin3_INP_DIS                (* (reg8 *) CutterPin3__INP_DIS)
/* LCD Common or Segment Drive */
#define CutterPin3_LCD_COM_SEG            (* (reg8 *) CutterPin3__LCD_COM_SEG)
/* Enable Segment LCD */
#define CutterPin3_LCD_EN                 (* (reg8 *) CutterPin3__LCD_EN)
/* Slew Rate Control */
#define CutterPin3_SLW                    (* (reg8 *) CutterPin3__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define CutterPin3_PRTDSI__CAPS_SEL       (* (reg8 *) CutterPin3__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define CutterPin3_PRTDSI__DBL_SYNC_IN    (* (reg8 *) CutterPin3__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define CutterPin3_PRTDSI__OE_SEL0        (* (reg8 *) CutterPin3__PRTDSI__OE_SEL0) 
#define CutterPin3_PRTDSI__OE_SEL1        (* (reg8 *) CutterPin3__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define CutterPin3_PRTDSI__OUT_SEL0       (* (reg8 *) CutterPin3__PRTDSI__OUT_SEL0) 
#define CutterPin3_PRTDSI__OUT_SEL1       (* (reg8 *) CutterPin3__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define CutterPin3_PRTDSI__SYNC_OUT       (* (reg8 *) CutterPin3__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(CutterPin3__SIO_CFG)
    #define CutterPin3_SIO_HYST_EN        (* (reg8 *) CutterPin3__SIO_HYST_EN)
    #define CutterPin3_SIO_REG_HIFREQ     (* (reg8 *) CutterPin3__SIO_REG_HIFREQ)
    #define CutterPin3_SIO_CFG            (* (reg8 *) CutterPin3__SIO_CFG)
    #define CutterPin3_SIO_DIFF           (* (reg8 *) CutterPin3__SIO_DIFF)
#endif /* (CutterPin3__SIO_CFG) */

/* Interrupt Registers */
#if defined(CutterPin3__INTSTAT)
    #define CutterPin3_INTSTAT            (* (reg8 *) CutterPin3__INTSTAT)
    #define CutterPin3_SNAP               (* (reg8 *) CutterPin3__SNAP)
    
	#define CutterPin3_0_INTTYPE_REG 		(* (reg8 *) CutterPin3__0__INTTYPE)
#endif /* (CutterPin3__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_CutterPin3_H */


/* [] END OF FILE */
