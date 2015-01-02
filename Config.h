/** @ingroup Config
 * @{
 */
#ifndef CONFIG_H_
#define CONFIG_H_
/*
  Copyright (c) 2014 Jan R�diger.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

  Credits:
  Parts of this code are inspired by Arduino hardware serial library.
*/
/*******************| Inclusions |*************************************/
#include <PlatformTypes.h>
   
/*******************| Macros |*****************************************/
/**
 * Sets whether or not PanID should be available twice in frame frame header (not defined)
 * or could be ommited (defined) and assumed that source PanID equals to destination
 * PanID.
 */
#define IEEE802154_ENABLE_PANID_COMPRESSION

/**
 * Size for USART Rx and Tx buffer. Thus, twice the size will be allocated in RAM.
*/
#define USART_RING_BUFFER_SIZE   16

/**
 * #define to let other modules know that timer2 is used
 */
//#define TIMER2_TIMER2_IN_USE

/*******************| Type definitions |*******************************/

/*******************| Type definitions |*******************************/

/*******************| Global variables |*******************************/

/*******************| Function prototypes |****************************/

#endif
/** @}*/