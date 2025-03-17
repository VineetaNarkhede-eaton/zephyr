/*
 * Copyright (c) 2025 Silicon Laboratories Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef ZEPHYR_INCLUDE_DT_BINDINGS_XG24_DMA_H_
#define ZEPHYR_INCLUDE_DT_BINDINGS_XG24_DMA_H_

#include <zephyr/dt-bindings/dt-util.h>
#include "common-dma.h"

/**
 *  Definition of Silabs LDMA request signal
 */
#define DMA_REQSEL_NONE               (FIELD_PREP(DMA_SRC_MASK, 0) | FIELD_PREP(DMA_SIG_MASK, 0))
#define DMA_REQSEL_LDMAXBARPRSREQ0    (FIELD_PREP(DMA_SRC_MASK, 1) | FIELD_PREP(DMA_SIG_MASK, 0))
#define DMA_REQSEL_LDMAXBARPRSREQ1    (FIELD_PREP(DMA_SRC_MASK, 1) | FIELD_PREP(DMA_SIG_MASK, 1))
#define DMA_REQSEL_TIMER0CC0          (FIELD_PREP(DMA_SRC_MASK, 2) | FIELD_PREP(DMA_SIG_MASK, 0))
#define DMA_REQSEL_TIMER0CC1          (FIELD_PREP(DMA_SRC_MASK, 2) | FIELD_PREP(DMA_SIG_MASK, 1))
#define DMA_REQSEL_TIMER0CC2          (FIELD_PREP(DMA_SRC_MASK, 2) | FIELD_PREP(DMA_SIG_MASK, 2))
#define DMA_REQSEL_TIMER0UFOF         (FIELD_PREP(DMA_SRC_MASK, 2) | FIELD_PREP(DMA_SIG_MASK, 3))
#define DMA_REQSEL_TIMER1CC0          (FIELD_PREP(DMA_SRC_MASK, 3) | FIELD_PREP(DMA_SIG_MASK, 0))
#define DMA_REQSEL_TIMER1CC1          (FIELD_PREP(DMA_SRC_MASK, 3) | FIELD_PREP(DMA_SIG_MASK, 1))
#define DMA_REQSEL_TIMER1CC2          (FIELD_PREP(DMA_SRC_MASK, 3) | FIELD_PREP(DMA_SIG_MASK, 2))
#define DMA_REQSEL_TIMER1UFOF         (FIELD_PREP(DMA_SRC_MASK, 3) | FIELD_PREP(DMA_SIG_MASK, 3))
#define DMA_REQSEL_USART0RXDATAV      (FIELD_PREP(DMA_SRC_MASK, 4) | FIELD_PREP(DMA_SIG_MASK, 0))
#define DMA_REQSEL_USART0RXDATAVRIGHT (FIELD_PREP(DMA_SRC_MASK, 4) | FIELD_PREP(DMA_SIG_MASK, 1))
#define DMA_REQSEL_USART0TXBL         (FIELD_PREP(DMA_SRC_MASK, 4) | FIELD_PREP(DMA_SIG_MASK, 2))
#define DMA_REQSEL_USART0TXBLRIGHT    (FIELD_PREP(DMA_SRC_MASK, 4) | FIELD_PREP(DMA_SIG_MASK, 3))
#define DMA_REQSEL_USART0TXEMPTY      (FIELD_PREP(DMA_SRC_MASK, 4) | FIELD_PREP(DMA_SIG_MASK, 4))
#define DMA_REQSEL_I2C0RXDATAV        (FIELD_PREP(DMA_SRC_MASK, 5) | FIELD_PREP(DMA_SIG_MASK, 0))
#define DMA_REQSEL_I2C0TXBL           (FIELD_PREP(DMA_SRC_MASK, 5) | FIELD_PREP(DMA_SIG_MASK, 1))
#define DMA_REQSEL_I2C1RXDATAV        (FIELD_PREP(DMA_SRC_MASK, 6) | FIELD_PREP(DMA_SIG_MASK, 0))
#define DMA_REQSEL_I2C1TXBL           (FIELD_PREP(DMA_SRC_MASK, 6) | FIELD_PREP(DMA_SIG_MASK, 1))
#define DMA_REQSEL_IADC0IADC_SCAN     (FIELD_PREP(DMA_SRC_MASK, 10) | FIELD_PREP(DMA_SIG_MASK, 0))
#define DMA_REQSEL_IADC0IADC_SINGLE   (FIELD_PREP(DMA_SRC_MASK, 10) | FIELD_PREP(DMA_SIG_MASK, 1))
#define DMA_REQSEL_MSCWDATA           (FIELD_PREP(DMA_SRC_MASK, 11) | FIELD_PREP(DMA_SIG_MASK, 0))
#define DMA_REQSEL_TIMER2CC0          (FIELD_PREP(DMA_SRC_MASK, 12) | FIELD_PREP(DMA_SIG_MASK, 0))
#define DMA_REQSEL_TIMER2CC1          (FIELD_PREP(DMA_SRC_MASK, 12) | FIELD_PREP(DMA_SIG_MASK, 1))
#define DMA_REQSEL_TIMER2CC2          (FIELD_PREP(DMA_SRC_MASK, 12) | FIELD_PREP(DMA_SIG_MASK, 2))
#define DMA_REQSEL_TIMER2UFOF         (FIELD_PREP(DMA_SRC_MASK, 12) | FIELD_PREP(DMA_SIG_MASK, 3))
#define DMA_REQSEL_TIMER3CC0          (FIELD_PREP(DMA_SRC_MASK, 13) | FIELD_PREP(DMA_SIG_MASK, 0))
#define DMA_REQSEL_TIMER3CC1          (FIELD_PREP(DMA_SRC_MASK, 13) | FIELD_PREP(DMA_SIG_MASK, 1))
#define DMA_REQSEL_TIMER3CC2          (FIELD_PREP(DMA_SRC_MASK, 13) | FIELD_PREP(DMA_SIG_MASK, 2))
#define DMA_REQSEL_TIMER3UFOF         (FIELD_PREP(DMA_SRC_MASK, 13) | FIELD_PREP(DMA_SIG_MASK, 3))
#define DMA_REQSEL_TIMER4CC0          (FIELD_PREP(DMA_SRC_MASK, 14) | FIELD_PREP(DMA_SIG_MASK, 0))
#define DMA_REQSEL_TIMER4CC1          (FIELD_PREP(DMA_SRC_MASK, 14) | FIELD_PREP(DMA_SIG_MASK, 1))
#define DMA_REQSEL_TIMER4CC2          (FIELD_PREP(DMA_SRC_MASK, 14) | FIELD_PREP(DMA_SIG_MASK, 2))
#define DMA_REQSEL_TIMER4UFOF         (FIELD_PREP(DMA_SRC_MASK, 14) | FIELD_PREP(DMA_SIG_MASK, 3))
#define DMA_REQSEL_EUSART0RXFL        (FIELD_PREP(DMA_SRC_MASK, 15) | FIELD_PREP(DMA_SIG_MASK, 0))
#define DMA_REQSEL_EUSART0TXFL        (FIELD_PREP(DMA_SRC_MASK, 15) | FIELD_PREP(DMA_SIG_MASK, 1))
#define DMA_REQSEL_EUSART1RXFL        (FIELD_PREP(DMA_SRC_MASK, 16) | FIELD_PREP(DMA_SIG_MASK, 0))
#define DMA_REQSEL_EUSART1TXFL        (FIELD_PREP(DMA_SRC_MASK, 16) | FIELD_PREP(DMA_SIG_MASK, 1))
#define DMA_REQSEL_VDAC0CH0_REQ       (FIELD_PREP(DMA_SRC_MASK, 17) | FIELD_PREP(DMA_SIG_MASK, 0))
#define DMA_REQSEL_VDAC0CH1_REQ       (FIELD_PREP(DMA_SRC_MASK, 17) | FIELD_PREP(DMA_SIG_MASK, 1))
#define DMA_REQSEL_VDAC1CH0_REQ       (FIELD_PREP(DMA_SRC_MASK, 18) | FIELD_PREP(DMA_SIG_MASK, 0))
#define DMA_REQSEL_VDAC1CH1_REQ       (FIELD_PREP(DMA_SRC_MASK, 18) | FIELD_PREP(DMA_SIG_MASK, 1))

#endif ZEPHYR_INCLUDE_DT_BINDINGS_XG24_DMA_H_
