/************************************************************************************//**
* \file         Source\boot.h
* \brief        Bootloader core module header file.
* \ingroup      Core
* \internal
*----------------------------------------------------------------------------------------
*                          C O P Y R I G H T
*----------------------------------------------------------------------------------------
*   Copyright (c) 2011  by Feaser    http://www.feaser.com    All rights reserved
*
*----------------------------------------------------------------------------------------
*                            L I C E N S E
*----------------------------------------------------------------------------------------
* This file is part of OpenBLT. OpenBLT is free software: you can redistribute it and/or
* modify it under the terms of the GNU General Public License as published by the Free
* Software Foundation, either version 3 of the License, or (at your option) any later
* version.
*
* OpenBLT is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
* without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
* PURPOSE. See the GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License along with OpenBLT.
* If not, see <http://www.gnu.org/licenses/>.
*
* A special exception to the GPL is included to allow you to distribute a combined work 
* that includes OpenBLT without being obliged to provide the source code for any 
* proprietary components. The exception text is included at the bottom of the license
* file <license.html>.
* 
* \endinternal
****************************************************************************************/
#ifndef BOOT_H
#define BOOT_H

/****************************************************************************************
* Defines
****************************************************************************************/
/** \brief Main version of the bootloader core. */
#define BOOT_VERSION_CORE_MAIN     (1u)
/** \brief Minor version of the bootloader core. */
#define BOOT_VERSION_CORE_MINOR    (0u)
/** \brief Bufgix version of the bootloader core. */
#define BOOT_VERSION_CORE_BUGFIX   (1u)


/****************************************************************************************
* Include files
****************************************************************************************/
/* Note that it is possible to override the standard blt_conf.h configuration header
 * file with a project specific one that is defined in the IDE/makefile. For example, 
 * the following define could be configured: PROJ_BLT_CONF_H="my_boot_config.h". This can
 * be handy if you use the bootloader in several projects with a different configuration,
 * and enables you to have just one bootloader source base.
 */
#include "types.h"                                    /* variable types                */
#include "assert.h"                                   /* assertion checks              */
#ifdef PROJ_BLT_CONF_H
#include PROJ_BLT_CONF_H                              /* custom configuration          */
#else
#include "blt_conf.h"                                 /* bootloader configuration      */
#endif /* PROJ_BLT_CONF_H */
#include "plausibility.h"                             /* plausibility checks           */
#include "cpu.h"                                      /* cpu driver module             */
#include "cop.h"                                      /* watchdog driver module        */
#include "nvm.h"                                      /* memory driver module          */
#include "timer.h"                                    /* timer driver module           */
#include "backdoor.h"                                 /* backdoor entry module         */
#include "file.h"                                     /* file system module            */
#include "com.h"                                      /* communication interface       */
#include "xcp.h"                                      /* xcp communication layer       */


/****************************************************************************************
* Function prototypes
****************************************************************************************/
void BootInit(void);
void BootTask(void);


#endif /* BOOT_H */
/*********************************** end of boot.h *************************************/
