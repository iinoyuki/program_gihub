/*""FILE COMMENT""*************************************************************
* System Name	: WDT API for RX62Nxx
* File Name		: r_pdl_wdt_RX62Nxx.h
* Version		: 1.10
* Contents		: WDT API header
* Customer		: 
* Model			: 
* Order			: 
* CPU			: RX
* Compiler		: RXC
* OS			: Nothing
* Programmer	: 
* Note			: 
*******************************************************************************
* Copyright, 2013. Renesas Electronics Corporation and Renesas Solutions Corp.
*******************************************************************************
* History		: 2013.10.29
*				: Ver 1.10
*				: CS release
*""FILE COMMENT END""*********************************************************/

#ifndef R_PDL_WDT_RX62Nxx_H
#define R_PDL_WDT_RX62Nxx_H

/* Callback function storage */
extern VoidCallBackFunc rpdl_WDT_callback_func;

/* Library prototypes */
bool R_WDT_CreateAll(
	const uint16_t,
	VoidCallBackFunc const,
	const uint8_t
);
bool R_WDT_ControlAll(
	const uint8_t
);
bool R_WDT_ReadAll(
	volatile uint8_t * const
);
bool ReturnFalse(void);

/* Macro definitions */

#define R_WDT_Create(a, b, c) \
( \
( (c) <= IPL_MAX) ? \
R_WDT_CreateAll( (a), (b), (c) ) : \
ReturnFalse() \
)

#define R_WDT_Control(a) \
( \
R_WDT_ControlAll( (a) ) \
)

#define R_WDT_Read(a) \
( \
R_WDT_ReadAll( (a) ) \
)

#endif
/* End of file */
