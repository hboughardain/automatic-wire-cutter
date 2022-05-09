/*******************************************************************************
* File Name: CutterPin2.h  
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

#if !defined(CY_PINS_CutterPin2_H) /* Pins CutterPin2_H */
#define CY_PINS_CutterPin2_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "CutterPin2_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 CutterPin2__PORT == 15 && ((CutterPin2__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    CutterPin2_Write(uint8 value);
void    CutterPin2_SetDriveMode(uint8 mode);
uint8   CutterPin2_ReadDataReg(void);
uint8   CutterPin2_Read(void);
void    CutterPin2_SetInterruptMode(uint16 position, uint16 mode);
uint8   CutterPin2_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the CutterPin2_SetDriveMode() function.
     *  @{
     */
        #define CutterPin2_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define CutterPin2_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define CutterPin2_DM_RES_UP          PIN_DM_RES_UP
        #define CutterPin2_DM_RES_DWN         PIN_DM_RES_DWN
        #define CutterPin2_DM_OD_LO           PIN_DM_OD_LO
        #define CutterPin2_DM_OD_HI           PIN_DM_OD_HI
        #define CutterPin2_DM_STRONG          PIN_DM_STRONG
        #define CutterPin2_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define CutterPin2_MASK               CutterPin2__MASK
#define CutterPin2_SHIFT              CutterPin2__SHIFT
#define CutterPin2_WIDTH              1u

/* Interrupt constants */
#if defined(CutterPin2__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in CutterPin2_SetInterruptMode() function.
     *  @{
     */
        #define CutterPin2_INTR_NONE      (uint16)(0x0000u)
        #define CutterPin2_INTR_RISING    (uint16)(0x0001u)
        #define CutterPin2_INTR_FALLING   (uint16)(0x0002u)
        #define CutterPin2_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define CutterPin2_INTR_MASK      (0x01u) 
#endif /* (CutterPin2__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define CutterPin2_PS                     (* (reg8 *) CutterPin2__PS)
/* Data Register */
#define CutterPin2_DR                     (* (reg8 *) CutterPin2__DR)
/* Port Number */
#define CutterPin2_PRT_NUM                (* (reg8 *) CutterPin2__PRT) 
/* Connect to Analog Globals */                                                  
#define CutterPin2_AG                     (* (reg8 *) CutterPin2__AG)                       
/* Analog MUX bux enable */
#define CutterPin2_AMUX                   (* (reg8 *) CutterPin2__AMUX) 
/* Bidirectional Enable */                                                        
#define CutterPin2_BIE                    (* (reg8 *) CutterPin2__BIE)
/* Bit-mask for Aliased Register Access */
#define CutterPin2_BIT_MASK               (* (reg8 *) CutterPin2__BIT_MASK)
/* Bypass Enable */
#define CutterPin2_BYP                    (* (reg8 *) CutterPin2__BYP)
/* Port wide control signals */                                                   
#define CutterPin2_CTL                    (* (reg8 *) CutterPin2__CTL)
/* Drive Modes */
#define CutterPin2_DM0                    (* (reg8 *) CutterPin2__DM0) 
#define CutterPin2_DM1                    (* (reg8 *) CutterPin2__DM1)
#define CutterPin2_DM2                    (* (reg8 *) CutterPin2__DM2) 
/* Input Buffer Disable Override */
#define CutterPin2_INP_DIS                (* (reg8 *) CutterPin2__INP_DIS)
/* LCD Common or Segment Drive */
#define CutterPin2_LCD_COM_SEG            (* (reg8 *) CutterPin2__LCD_COM_SEG)
/* Enable Segment LCD */
#define CutterPin2_LCD_EN                 (* (reg8 *) CutterPin2__LCD_EN)
/* Slew Rate Control */
#define CutterPin2_SLW                    (* (reg8 *) CutterPin2__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define CutterPin2_PRTDSI__CAPS_SEL       (* (reg8 *) CutterPin2__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define CutterPin2_PRTDSI__DBL_SYNC_IN    (* (reg8 *) CutterPin2__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define CutterPin2_PRTDSI__OE_SEL0        (* (reg8 *) CutterPin2__PRTDSI__OE_SEL0) 
#define CutterPin2_PRTDSI__OE_SEL1        (* (reg8 *) CutterPin2__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define CutterPin2_PRTDSI__OUT_SEL0       (* (reg8 *) CutterPin2__PRTDSI__OUT_SEL0) 
#define CutterPin2_PRTDSI__OUT_SEL1       (* (reg8 *) CutterPin2__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define CutterPin2_PRTDSI__SYNC_OUT       (* (reg8 *) CutterPin2__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(CutterPin2__SIO_CFG)
    #define CutterPin2_SIO_HYST_EN        (* (reg8 *) CutterPin2__SIO_HYST_EN)
    #define CutterPin2_SIO_REG_HIFREQ     (* (reg8 *) CutterPin2__SIO_REG_HIFREQ)
    #define CutterPin2_SIO_CFG            (* (reg8 *) CutterPin2__SIO_CFG)
    #define CutterPin2_SIO_DIFF           (* (reg8 *) CutterPin2__SIO_DIFF)
#endif /* (CutterPin2__SIO_CFG) */

/* Interrupt Registers */
#if defined(CutterPin2__INTSTAT)
    #define CutterPin2_INTSTAT            (* (reg8 *) CutterPin2__INTSTAT)
    #define CutterPin2_SNAP               (* (reg8 *) CutterPin2__SNAP)
    
	#define CutterPin2_0_INTTYPE_REG 		(* (reg8 *) CutterPin2__0__INTTYPE)
#endif /* (CutterPin2__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_CutterPin2_H */


/* [] END OF FILE */
