/*******************************************************************************
* File Name: CutterPin4.h  
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

#if !defined(CY_PINS_CutterPin4_H) /* Pins CutterPin4_H */
#define CY_PINS_CutterPin4_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "CutterPin4_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 CutterPin4__PORT == 15 && ((CutterPin4__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    CutterPin4_Write(uint8 value);
void    CutterPin4_SetDriveMode(uint8 mode);
uint8   CutterPin4_ReadDataReg(void);
uint8   CutterPin4_Read(void);
void    CutterPin4_SetInterruptMode(uint16 position, uint16 mode);
uint8   CutterPin4_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the CutterPin4_SetDriveMode() function.
     *  @{
     */
        #define CutterPin4_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define CutterPin4_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define CutterPin4_DM_RES_UP          PIN_DM_RES_UP
        #define CutterPin4_DM_RES_DWN         PIN_DM_RES_DWN
        #define CutterPin4_DM_OD_LO           PIN_DM_OD_LO
        #define CutterPin4_DM_OD_HI           PIN_DM_OD_HI
        #define CutterPin4_DM_STRONG          PIN_DM_STRONG
        #define CutterPin4_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define CutterPin4_MASK               CutterPin4__MASK
#define CutterPin4_SHIFT              CutterPin4__SHIFT
#define CutterPin4_WIDTH              1u

/* Interrupt constants */
#if defined(CutterPin4__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in CutterPin4_SetInterruptMode() function.
     *  @{
     */
        #define CutterPin4_INTR_NONE      (uint16)(0x0000u)
        #define CutterPin4_INTR_RISING    (uint16)(0x0001u)
        #define CutterPin4_INTR_FALLING   (uint16)(0x0002u)
        #define CutterPin4_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define CutterPin4_INTR_MASK      (0x01u) 
#endif /* (CutterPin4__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define CutterPin4_PS                     (* (reg8 *) CutterPin4__PS)
/* Data Register */
#define CutterPin4_DR                     (* (reg8 *) CutterPin4__DR)
/* Port Number */
#define CutterPin4_PRT_NUM                (* (reg8 *) CutterPin4__PRT) 
/* Connect to Analog Globals */                                                  
#define CutterPin4_AG                     (* (reg8 *) CutterPin4__AG)                       
/* Analog MUX bux enable */
#define CutterPin4_AMUX                   (* (reg8 *) CutterPin4__AMUX) 
/* Bidirectional Enable */                                                        
#define CutterPin4_BIE                    (* (reg8 *) CutterPin4__BIE)
/* Bit-mask for Aliased Register Access */
#define CutterPin4_BIT_MASK               (* (reg8 *) CutterPin4__BIT_MASK)
/* Bypass Enable */
#define CutterPin4_BYP                    (* (reg8 *) CutterPin4__BYP)
/* Port wide control signals */                                                   
#define CutterPin4_CTL                    (* (reg8 *) CutterPin4__CTL)
/* Drive Modes */
#define CutterPin4_DM0                    (* (reg8 *) CutterPin4__DM0) 
#define CutterPin4_DM1                    (* (reg8 *) CutterPin4__DM1)
#define CutterPin4_DM2                    (* (reg8 *) CutterPin4__DM2) 
/* Input Buffer Disable Override */
#define CutterPin4_INP_DIS                (* (reg8 *) CutterPin4__INP_DIS)
/* LCD Common or Segment Drive */
#define CutterPin4_LCD_COM_SEG            (* (reg8 *) CutterPin4__LCD_COM_SEG)
/* Enable Segment LCD */
#define CutterPin4_LCD_EN                 (* (reg8 *) CutterPin4__LCD_EN)
/* Slew Rate Control */
#define CutterPin4_SLW                    (* (reg8 *) CutterPin4__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define CutterPin4_PRTDSI__CAPS_SEL       (* (reg8 *) CutterPin4__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define CutterPin4_PRTDSI__DBL_SYNC_IN    (* (reg8 *) CutterPin4__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define CutterPin4_PRTDSI__OE_SEL0        (* (reg8 *) CutterPin4__PRTDSI__OE_SEL0) 
#define CutterPin4_PRTDSI__OE_SEL1        (* (reg8 *) CutterPin4__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define CutterPin4_PRTDSI__OUT_SEL0       (* (reg8 *) CutterPin4__PRTDSI__OUT_SEL0) 
#define CutterPin4_PRTDSI__OUT_SEL1       (* (reg8 *) CutterPin4__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define CutterPin4_PRTDSI__SYNC_OUT       (* (reg8 *) CutterPin4__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(CutterPin4__SIO_CFG)
    #define CutterPin4_SIO_HYST_EN        (* (reg8 *) CutterPin4__SIO_HYST_EN)
    #define CutterPin4_SIO_REG_HIFREQ     (* (reg8 *) CutterPin4__SIO_REG_HIFREQ)
    #define CutterPin4_SIO_CFG            (* (reg8 *) CutterPin4__SIO_CFG)
    #define CutterPin4_SIO_DIFF           (* (reg8 *) CutterPin4__SIO_DIFF)
#endif /* (CutterPin4__SIO_CFG) */

/* Interrupt Registers */
#if defined(CutterPin4__INTSTAT)
    #define CutterPin4_INTSTAT            (* (reg8 *) CutterPin4__INTSTAT)
    #define CutterPin4_SNAP               (* (reg8 *) CutterPin4__SNAP)
    
	#define CutterPin4_0_INTTYPE_REG 		(* (reg8 *) CutterPin4__0__INTTYPE)
#endif /* (CutterPin4__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_CutterPin4_H */


/* [] END OF FILE */
