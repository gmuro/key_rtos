/* Copyright 2019, DSI FCEIA UNR
 *    DSI: http://www.dsi.fceia.unr.edu.ar/
 * Copyright 2019, Gustavo Muro
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef KEY_H_
#define KEY_H_

/*==================[inclusions]=============================================*/
#include <board_dsi.h>
#include "FreeRTOS.h"

/*==================[cplusplus]==============================================*/
#ifdef __cplusplus
extern "C" {
#endif

/*==================[macros]=================================================*/

/*==================[typedef]================================================*/

/*==================[external data declaration]==============================*/

/*==================[external functions definition]==========================*/

/** \brief Función de inicialización
 **
 **/
void key_init(void);

/** \brief devuelve true si hay evento de presionado del sw
 **
 ** \param id: identificación de switch
 **
 ** \return true: se dio evento de presionado
 **         false: no se dio evento de presionado
 **/
bool key_getPressEv(board_swId_enum id);

/** \brief devuelve true si hay evento de presionado del sw
 **
 ** \param id: identificación de switch
 ** \param waitTime: tiempo máximo de espera del evento (en ticks)
 **
 ** \return true: se dio evento de presionado
 **         false: no se dio evento de presionado
 **/
bool key_waitForPressEv(board_swId_enum id, TickType_t waitTime);

/** \brief atención de tarea periódica de key
 *
 ** IMPORTANTE: debe ser llamada desde una interrupción periódica
 ** Se puede colocar la llamada en el vApplicationTickHook()
 **
 **/
void key_periodicTask1ms(void);

/*==================[cplusplus]==============================================*/
#ifdef __cplusplus
}
#endif

/*==================[end of file]============================================*/
#endif /* KEY_H_ */
