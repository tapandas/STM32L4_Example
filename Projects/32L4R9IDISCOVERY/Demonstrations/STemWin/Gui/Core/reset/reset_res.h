/**
  ******************************************************************************
  * @file    reset_res.h
  * @author  MCD Application Team
  * @brief   reset resources
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2017 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license SLA0044,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        http://www.st.com/SLA0044
  *
  ******************************************************************************
  */

#ifndef GUI_RESET_RESOURCES_H__
#define GUI_RESET_RESOURCES_H__

/*********************************************************************
*
*       Includes
*
**********************************************************************
*/
#include <stdlib.h>

#include "GUI.h"

/*********************************************************************
*
*       Exported constants
*
**********************************************************************
*/
#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

/*********************************************************************
*
*       Exported variables
*
**********************************************************************
*/

/*** Bitmaps ***/

/*** Genereted bitmaps used for the reset module ***/

extern GUI_CONST_STORAGE GUI_BITMAP bmreset_icon;
extern GUI_CONST_STORAGE GUI_BITMAP bmreset_button;

#endif  /* Avoid multiple inclusion */
/*************************** End of file ****************************/

