/*******************************************************************************************************
 *                                                                                                     *
 *        **********                                                                                   *
 *       ************                                                                                  *
 *      ***        ***                                                                                 *
 *      ***   +++   ***                                                                                *
 *      ***   + +   ***     This file implements a function for introducing                            *
 *      ***   +             a specified delay in the MCU code execution.                               *
 *      ***   + +   ***                                                                                *
 *      ***   +++   ***     Wait.c                                                                     *
 *      ***        ***                                                                                 *
 *       ************                                                                                  *
 *        **********                                                                                   *
 *                                                                                                     *
 *******************************************************************************************************
 * Compiler:                Keil C51 V7.50                                                             *
 * Target platform:         Chipcon CCxxx0 (Silabs F320)                                               *
 * Author:                  SNA                                                                        *
 *******************************************************************************************************
 * Revision history:        See end of file                                                            *
 ******************************************************************************************************/
#include <Chipcon\srf04\halsrf04.h>
#include <intrins.h>




//-------------------------------------------------------------------------------------------------------
//  void halWait(UINT16 timeout)
//
//  DESCRIPTION:
//      Runs an idle loop for [timeout] microseconds.
//
//  ARGUMENTS:
//      UINT8 timeout
//          The timeout in microseconds
//-------------------------------------------------------------------------------------------------------
void halWait(UINT16 timeout) {
    do {
        _nop_();
        _nop_();
        _nop_();
        _nop_();
        _nop_();
        _nop_();
        _nop_();
        _nop_();
        _nop_();
        _nop_();
        _nop_();
        _nop_();
        _nop_();
        _nop_();
    } while (--timeout);
}// halWait




/*******************************************************************************************************
 * Revision history:                                                                                   *
 *
 * $Log: Wait.c,v $
 * Revision 1.2  2005/02/07 14:46:10  sna
 * Initial version in CVS.
 *
 *
 ******************************************************************************************************/



