/*
 * (C) Copyright 2014 
 * John LiuXin <liuxinembest@gmail.com>
 *
 * Configuation settings for the MYIR tiny210 board.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __CONFIG_H
#define __CONFIG_H

/*********************************************************** 
  * SPL 
  ***********************************************************/


/*********************************************************** 
  * Flash 
  ***********************************************************/
#define CONFIG_SYS_NO_FLASH                 /*Must: if there is no flash */


/*********************************************************** 
  * DDRAM 
  ***********************************************************/
#define CONFIG_NR_DRAM_BANKS    2           /*Must: bd_info will use it */
#define PHYS_SDRAM_1            0x20000000
#define PHYS_SDRAM_1_SIZE       0x10000000  //256M
#define PHYS_SDRAM_2            0x40000000
#define PHYS_SDRAM_2_SIZE       0x10000000  //256M


/*********************************************************** 
  * ENV 
  ***********************************************************/
#define CONFIG_ENV_IS_IN_NAND   1           /*Must */
#ifdef CONFIG_ENV_IS_IN_NAND
#define CONFIG_ENV_OFFSET       0x40000     /*Must if define  CONFIG_ENV_IS_IN_NAND*/
#endif
#define CONFIG_ENV_SIZE         0x4000      /*Must */


/*********************************************************** 
  * Timer 
  ***********************************************************/
/* the PWM TImer 4 uses a counter of 41687 for 10 ms, so we need */
/* it to wrap 100 times (total 4168750) to get 1 sec at PCLK 66MHz. */
#define CONFIG_SYS_HZ           1000        /*Must */


/*********************************************************** 
  * Serial & Console 
  ***********************************************************/
#define CONFIG_BAUDRATE         115200


/*********************************************************** 
  * SYS 
  ***********************************************************/
#define CONFIG_SYS_SDRAM_BASE   PHYS_SDRAM_1                    /*Must */

/* Size of malloc() pool */
#define CONFIG_SYS_MALLOC_LEN   (CONFIG_ENV_SIZE + 896*1024)    /*Must */

/* max number of command args */
#define CONFIG_SYS_MAXARGS      16                              /*Must */

/* Print Buffer Size */
#define CONFIG_SYS_PBSIZE       384                             /*Must */

/* default load address	*/
#define CONFIG_SYS_LOAD_ADDR    PHYS_SDRAM_1                    /*Must */

/* Console I/O Buffer Size*/
#define CONFIG_SYS_CBSIZE       256                             /*Must */

#define CONFIG_SYS_PROMPT       "[TINY210]# "                   /*Must */


#endif	/* __CONFIG_H */
