/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : McuPercepio.h
**     Project     : FRDM-K64F_Generator
**     Processor   : MK64FN1M0VLL12
**     Component   : PercepioTrace
**     Version     : Component 01.138, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2018-07-03, 08:21, # CodeGen: 331
**     Abstract    :
**
**     Settings    :
**          Component name                                 : McuPercepio
**          RTOS+Trace Version                             : V3.3.0
**          Recorder Mode                                  : Streaming
**          Recorder Buffer Allocation                     : static
**          Max ISR Nesting                                : 16
**          Snapshot Mode                                  : 
**            Recorder store mode                          : Ring Buffer
**            Scheduling only                              : no
**            Description string                           : FreeRTOS+Trace
**            Description max length                       : 80
**            Event buffer size                            : 1200
**            Symbol table size                            : 400
**            Objects                                      : 
**              Number of tasks                            : 10
**              Name length for task                       : configMAX_TASK_NAME_LEN
**              Number of ISR                              : 4
**              Number of queue                            : 3
**              Number of semaphore                        : 4
**              Number of mutex                            : 4
**              Number of timer                            : 2
**              Number of event groups                     : 2
**              Name length for ISR                        : 10
**              Name length for queue                      : 15
**              Name length for semaphore                  : 15
**              Name length for mutex                      : 15
**              Name length for timer                      : 15
**              Name length for event group                : 15
**            Events Creation                              : 
**              Include OS Tick events                     : no
**              Include ready events                       : yes
**              Include memory manager events              : no
**              Include ISR tracing                        : yes
**              Include object delete events               : yes
**              Include user events                        : yes
**            Heap Size below 16M                          : no
**            Float support                                : no
**            Use implicit IFE rules                       : yes
**            Use 16bit Object Handles                     : no
**          Segger RTT                                     : Enabled
**            Segger RTT                                   : McuRTT
**          Streaming Mode                                 : 
**            Up Buffer Index                              : 2
**            Up Buffer Size                               : 1024
**            Down Buffer Index                            : 2
**            Down Buffer Size                             : 32
**            Symbol Table Slots                           : 30
**            Symbol Max Length                            : 24
**            Object Data Slots                            : 20
**            Ctrl Task Priority                           : 1
**            Ctrl Task Stack Size                         : configMINIMAL_STACK_SIZE
**            Ctrl Task Delay                              : ((10 * configTICK_RATE_HZ) / 1000)
**          Source Folders                                 : Enabled
**            Recorder                                     : TraceRecorder
**            Config                                       : TraceRecorder/config
**            Include                                      : TraceRecorder/include
**            RTT Include                                  : TraceRecorder/streamports/Jlink_RTT/include
**          System                                         : 
**            SDK                                          : McuLib
**            Utility                                      : McuUtility
**     Contents    :
**         vTraceEnable              - void McuPercepio_vTraceEnable(int startOption);
**         uiTraceStart              - dword McuPercepio_uiTraceStart(void);
**         vTraceStop                - void McuPercepio_vTraceStop(void);
**         vTraceClear               - void McuPercepio_vTraceClear(void);
**         uiTraceGetTraceBufferSize - dword McuPercepio_uiTraceGetTraceBufferSize(void);
**         xTraceGetTraceBuffer      - void* McuPercepio_xTraceGetTraceBuffer(void);
**         xTraceRegisterString      - traceString McuPercepio_xTraceRegisterString(const char* name);
**         vTracePrint               - void McuPercepio_vTracePrint(traceString chn, const char* str);
**         vTracePrintF              - void McuPercepio_vTracePrintF(traceLabel eventLabel, char *formatStr, ...);
**         vTraceSetQueueName        - void McuPercepio_vTraceSetQueueName(void *queue, char *name);
**         vTraceSetSemaphoreName    - void McuPercepio_vTraceSetSemaphoreName(void *semaphore, char *name);
**         vTraceSetMutexName        - void McuPercepio_vTraceSetMutexName(void *mutex, char *name);
**         xTraceSetISRProperties    - traceHandle McuPercepio_xTraceSetISRProperties(char *name, char prioritiy);
**         vTraceStoreISRBegin       - void McuPercepio_vTraceStoreISRBegin(traceHandle handle);
**         vTraceStoreISREnd         - void McuPercepio_vTraceStoreISREnd(int isTaskSwitchRequired);
**         vGetGDBDumpCommand        - void McuPercepio_vGetGDBDumpCommand(uint8_t *buf, uint16_t bufSize, uint8_t...
**         vTraceSetStopHook         - void McuPercepio_vTraceSetStopHook(TRACE_STOP_HOOK stopHookFunction);
**         xTraceGetLastError        - char* McuPercepio_xTraceGetLastError(void);
**         vTraceClearError          - byte McuPercepio_vTraceClearError(int resetErrorMessage);
**         Startup                   - void McuPercepio_Startup(void);
**
** * (c) Copyright Percepio AB, 2013-2018
**  * http      : www.percepio.se
**  * mail      : info@percepio.com
**  * See separate Percepio licensing terms.
**  *
**  * Processor Expert Component: (c) Copyright Erich Styger, 2013-2018
**  * Web:         https://mcuoneclipse.com
**  * SourceForge: https://sourceforge.net/projects/mcuoneclipse
**  * Git:         https://github.com/ErichStyger/McuOnEclipse_PEx
**  * All rights reserved.
**  *
**  * Redistribution and use in source and binary forms, with or without modification,
**  * are permitted provided that the following conditions are met:
**  *
**  * - Redistributions of source code must retain the above copyright notice, this list
**  *   of conditions and the following disclaimer.
**  *
**  * - Redistributions in binary form must reproduce the above copyright notice, this
**  *   list of conditions and the following disclaimer in the documentation and/or
**  *   other materials provided with the distribution.
**  *
**  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**  * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**  * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**  * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**  * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**  * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**  * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**  * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**  * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
** ###################################################################*/
/*!
** @file McuPercepio.h
** @version 01.00
** @brief
**
*/         
/*!
**  @addtogroup McuPercepio_module McuPercepio module documentation
**  @{
*/         

#ifndef __McuPercepio_HvTraceInitTraceData
#define __McuPercepio_H

/* MODULE McuPercepio. */
#include "McuLib.h" /* SDK and API used */
#include "McuPercepioconfig.h" /* configuration */

/* Include inherited components */
#include "McuRTT.h"
#include "McuLib.h"
#include "McuUtility.h"

#if McuLib_CONFIG_SDK_VERSION_USED != McuLib_CONFIG_SDK_PROCESSOR_EXPERT
  /* prototypes for user events */
  void McuPercepio_OnTraceWrap(void);
#endif

#include "trcRecorder.h" /* streaming interface */


#define McuPercepio_uiTraceGetTraceBufferSize() \
  uiTraceGetTraceBufferSize()

/*
** ===================================================================
**     Method      :  uiTraceGetTraceBufferSize (component PercepioTrace)
**
**     Description :
**         Gets the size of the recorder data structure. For use
**         together with vTraceGetTraceBuffer if you wish to implement
**         an own store/upload solution, e.g., in case a debugger
**         connection is not available for uploading the data.
**     Parameters  : None
**     Returns     :
**         ---             - Size of the trace buffer
** ===================================================================
*/

#define McuPercepio_xTraceGetTraceBuffer() \
  xTraceGetTraceBuffer()

/*
** ===================================================================
**     Method      :  xTraceGetTraceBuffer (component PercepioTrace)
**
**     Description :
**         Return a pointer to the recorder data structure. Use this
**         together with uiTraceGetTraceBufferSize if you wish to
**         implement an own store/upload solution, e.g., in case a
**         debugger connection is not available for uploading the data.
**     Parameters  : None
**     Returns     :
**         ---             - Pointer to the trace buffer
** ===================================================================
*/

#define McuPercepio_uiTraceStart() \
  uiTraceStart()
/*
** ===================================================================
**     Method      :  uiTraceStart (component PercepioTrace)
**
**     Description :
**         Starts the trace.
**     Parameters  : None
**     Returns     :
**         ---             - returns 1 if trace has been started, 0
**                           otherwise.
** ===================================================================
*/

#define McuPercepio_vTraceStop() \
  vTraceStop()

/*
** ===================================================================
**     Method      :  vTraceStop (component PercepioTrace)
**
**     Description :
**         Stops the trace.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

#define McuPercepio_vTraceClear() \
  vTraceClear()

/*
** ===================================================================
**     Method      :  vTraceClear (component PercepioTrace)
**
**     Description :
**         Clears the trace.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

#define McuPercepio_xTraceRegisterString (label) \
  xTraceRegisterString(label)

/*
** ===================================================================
**     Method      :  xTraceRegisterString (component PercepioTrace)
**
**     Description :
**         Register strings in the recorder, e.g. for names of user
**         event channels.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * name            - Pointer to label
**     Returns     :
**         ---             - trace label to be used with vTracePrintF
** ===================================================================
*/

#define McuPercepio_vTracePrint(chn, str) \
  vTracePrint(chn, str)

/*
** ===================================================================
**     Method      :  vTracePrint (component PercepioTrace)
**
**     Description :
**         Generates a User Event with a text label. The label is
**         created/looked up in the symbol table using
**         xTraceRegisterString.
**     Parameters  :
**         NAME            - DESCRIPTION
**         chn             - trace label for the user event
**       * str             - Pointer to string
**     Returns     : Nothing
** ===================================================================
*/

/* void McuPercepio_vTracePrintF(traceLabel eventLabel, char *formatStr, ...); */
#define McuPercepio_vTracePrintF vTracePrintF

/*
** ===================================================================
**     Method      :  vTracePrintF (component PercepioTrace)
**
**     Description :
**         Advanced user event - like printf (but limited formatting
**         support - will improve)
**     Parameters  :
**         NAME            - DESCRIPTION
**         eventLabel      - trace label
**       * formatStr       - Pointer to format string
**         Variable_1      - open parameter list
**     Returns     : Nothing
** ===================================================================
*/

#define McuPercepio_vTraceSetQueueName(queue, name) \
  vTraceSetQueueName(queue, name)

/*
** ===================================================================
**     Method      :  vTraceSetQueueName (component PercepioTrace)
**
**     Description :
**         Assigns a name to a FreeRTOS Queue, Semaphore or Mutex. This
**         function should  be called right after creation of the
**         queue/mutex/semaphore. If not using this function, the
**         queues/mutexes/semaphores will be presented by their numeric
**         handle only.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * queue           - Pointer to the queue
**       * name            - Pointer to name
**     Returns     : Nothing
** ===================================================================
*/

#define McuPercepio_xTraceSetISRProperties(name, prioritiy) \
  xTraceSetISRProperties(name, prioritiy)

/*
** ===================================================================
**     Method      :  xTraceSetISRProperties (component PercepioTrace)
**
**     Description :
**         Registers an Interrupt Service Routine in the recorder
**         library, This must be called before using
**         vTraceStoreISRBegin to store ISR events. This is typically
**         called in the startup of the system, before the scheduler is
**         started. Method is always enabled if 'Include ISR tracing'
**         is set to 'yes' in the properties.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * name            - Pointer to name
**         prioritiy       - priority
**     Returns     :
**         ---             - trace handle to be used for
**                           vTaceStoreISRBegin()
** ===================================================================
*/

#define McuPercepio_vTraceStoreISRBegin(handle) \
  vTraceStoreISRBegin(handle)

/*
** ===================================================================
**     Method      :  vTraceStoreISRBegin (component PercepioTrace)
**
**     Description :
**         Registers the beginning of an Interrupt Service Routine.
**         This must not be interrupted by another ISR containing
**         recorder library calls, so if allowing nested ISRs this must
**         be called with interrupts disabled.  Method is always
**         enabled if 'Include ISR tracing' is set to 'yes' in the
**         properties.
**     Parameters  :
**         NAME            - DESCRIPTION
**         handle          - trace handle
**     Returns     : Nothing
** ===================================================================
*/

#define McuPercepio_vTraceStoreISREnd(isTaskSwitchRequired) \
  vTraceStoreISREnd(isTaskSwitchRequired)

/*
** ===================================================================
**     Method      :  vTraceStoreISREnd (component PercepioTrace)
**
**     Description :
**         Registers the end of an Interrupt Service Routine. This must
**         not be interrupted by another ISR containing recorder
**         library calls, so if allowing nested ISRs this must be
**         called with interrupts disabled.  Method is always enabled
**         if 'Include ISR tracing' is set to 'yes' in the properties.
**     Parameters  :
**         NAME            - DESCRIPTION
**         isTaskSwitchRequired - The
**                           parameter pendingISR indicates if the
**                           interrupt has requested a task-switch (= 1)
**                           or if the interrupt returns to the earlier
**                           context (= 0)
**     Returns     : Nothing
** ===================================================================
*/

void McuPercepio_vGetGDBDumpCommand(uint8_t *buf, uint16_t bufSize, uint8_t *fileName);
/*
** ===================================================================
**     Method      :  vGetGDBDumpCommand (component PercepioTrace)
**
**     Description :
**         Gets the gdb command to dump the trace data to a file.
**         Useful for copy-pasting it to the gdb console.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * buf             - Pointer to buffer for the command. Make it
**                           large enoug (about 64 bytes)
**         bufSize         - size of the buffer
**       * fileName        - Pointer to the file name string,
**                           e.g. "C:\\tmp\\trace.dump"
**     Returns     : Nothing
** ===================================================================
*/

#define McuPercepio_vTraceSetStopHook(stopHookFunction) \
  vTraceSetStopHook(stopHookFunction)
/*
** ===================================================================
**     Method      :  vTraceSetStopHook (component PercepioTrace)
**
**     Description :
**         Sets a function to be called when the recorder is stopped.
**     Parameters  :
**         NAME            - DESCRIPTION
**         stopHookFunction - 
**     Returns     : Nothing
** ===================================================================
*/

#define McuPercepio_xTraceGetLastError() \
  xTraceGetLastError()
/*
** ===================================================================
**     Method      :  xTraceGetLastError (component PercepioTrace)
**
**     Description :
**         Gives the last error message, if any. NULL if no error
**         message is stored. Any error message is also presented when
**         opening a trace file.
**     Parameters  : None
**     Returns     :
**         ---             - Error message
** ===================================================================
*/

#define McuPercepio_vTraceClearError(resetErrorMessage) \
  vTraceClearError(resetErrorMessage)
/*
** ===================================================================
**     Method      :  vTraceClearError (component PercepioTrace)
**
**     Description :
**         Removes any previous error message generated by recorder
**         calling vTraceError. By calling this function, it may be
**         possible to start/restart the trace despite errors in the
**         recorder, but there is no guarantee that the trace recorder
**         will work correctly in that case, depending on the type of
**         error.
**     Parameters  :
**         NAME            - DESCRIPTION
**         resetErrorMessage - parameter is
**                           not used
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

#define McuPercepio_vTraceEnable(startOption) \
  vTraceEnable(startOption)
/*
** ===================================================================
**     Method      :  vTraceEnable (component PercepioTrace)
**
**     Description :
**         
**     Parameters  :
**         NAME            - DESCRIPTION
**         startoption     - * TRC_START: Starts the
**                           tracing directly. In snapshot mode this
**                           allows for 
**                           * starting the trace at any point in your
**                           code, assuming vTraceEnable(TRC_INIT)
**                           * has been called in the startup.
**                           * Can also be used for streaming without
**                           Tracealyzer control, e.g. to a local
**                           * flash file system (assuming such a
**                           "stream port", see trcStreamingPort.h).
**                           * 
**                           * TRC_START_AWAIT_HOST: For streaming mode
**                           only. Initializes the trace recorder
**                           * if necessary and waits for a Start
**                           command from Tracealyzer ("Start Recording"
**                           * button). This call is intentionally
**                           blocking! By calling vTraceEnable with
**                           * this option from the startup code, you
**                           start tracing at this point and capture
**                           * the early events.
**                           *
**                           * TRC_INIT: Initializes the trace recorder,
**                           but does not start the tracing.
**                           * In snapshot mode, this must be followed
**                           by a vTraceEnable(TRC_START) sometime
**                           * later.
**     Returns     : Nothing
** ===================================================================
*/

#define McuPercepio_vTraceSetSemaphoreName(semaphore, name) \
  vTraceSetSemaphoreName(semaphore, name)
/*
** ===================================================================
**     Method      :  vTraceSetSemaphoreName (component PercepioTrace)
**
**     Description :
**         Assigns a name to a FreeRTOS Queue, Semaphore or Mutex. This
**         function should  be called right after creation of the
**         queue/mutex/semaphore. If not using this function, the
**         queues/mutexes/semaphores will be presented by their numeric
**         handle only.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * queue           - Pointer to the semaphore
**       * name            - Pointer to name
**     Returns     : Nothing
** ===================================================================
*/

#define McuPercepio_vTraceSetMutexName(mutex, name) \
  vTraceSetMutexName(mutex, name)
/*
** ===================================================================
**     Method      :  vTraceSetMutexName (component PercepioTrace)
**
**     Description :
**         Assigns a name to a FreeRTOS Queue, Semaphore or Mutex. This
**         function should  be called right after creation of the
**         queue/mutex/semaphore. If not using this function, the
**         queues/mutexes/semaphores will be presented by their numeric
**         handle only.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * queue           - Pointer to the mutex
**       * name            - Pointer to name
**     Returns     : Nothing
** ===================================================================
*/

void McuPercepio_Startup(void);
/*
** ===================================================================
**     Method      :  Startup (component PercepioTrace)
**
**     Description :
**         Routine called during startup. Depending on the mode and
**         settings, it starts tracing and might block!
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

/* END McuPercepio. */

#endif
/* ifndef __McuPercepio_H */
/*!
** @}
*/
