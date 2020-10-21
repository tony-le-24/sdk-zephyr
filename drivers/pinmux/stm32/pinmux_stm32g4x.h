/*
 * Copyright (c) 2019 Richard Osterloh <richard.osterloh@gmail.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_DRIVERS_PINMUX_STM32_PINMUX_STM32G4X_H_
#define ZEPHYR_DRIVERS_PINMUX_STM32_PINMUX_STM32G4X_H_

/**
 * @file Header for STM32G4X pin multiplexing helper
 */

/* Port A */
#define STM32G4X_PINMUX_FUNC_PA0_PWM2_CH1 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PA0_USART2_CTS __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_OPENDRAIN_PULLUP)
#define STM32G4X_PINMUX_FUNC_PA0_ADC12_IN1 STM32_MODER_ANALOG_MODE

#define STM32G4X_PINMUX_FUNC_PA1_PWM2_CH2 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PA1_USART2_RTS __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_OPENDRAIN_PULLUP)
#define STM32G4X_PINMUX_FUNC_PA1_ADC12_IN2 STM32_MODER_ANALOG_MODE

#define STM32G4X_PINMUX_FUNC_PA2_PWM2_CH3 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PA2_USART2_TX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#define STM32G4X_PINMUX_FUNC_PA2_LPUART1_TX __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_PULLUP)
#define STM32G4X_PINMUX_FUNC_PA2_ADC1_IN3 STM32_MODER_ANALOG_MODE

#define STM32G4X_PINMUX_FUNC_PA3_PWM2_CH4 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PA3_USART2_RX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUPDR_NO_PULL)
#define STM32G4X_PINMUX_FUNC_PA3_LPUART1_RX __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_12 | STM32_PUPDR_NO_PULL)
#define STM32G4X_PINMUX_FUNC_PA3_ADC1_IN4 STM32_MODER_ANALOG_MODE

#define STM32G4X_PINMUX_FUNC_PA4_PWM3_CH2 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PA4_SPI1_NSS __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_PULLUP)
#define STM32G4X_PINMUX_FUNC_PA4_ADC2_IN17 STM32_MODER_ANALOG_MODE
#define STM32G4X_PINMUX_FUNC_PA4_DAC1_OUT1 __DEPRECATED_MACRO STM32_MODER_ANALOG_MODE

#define STM32G4X_PINMUX_FUNC_PA5_PWM2_CH1 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PA5_SPI1_SCK __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PA5_ADC2_IN13 STM32_MODER_ANALOG_MODE
#define STM32G4X_PINMUX_FUNC_PA5_DAC1_OUT2 __DEPRECATED_MACRO STM32_MODER_ANALOG_MODE

#define STM32G4X_PINMUX_FUNC_PA6_PWM3_CH1 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PA6_SPI1_MISO __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUPDR_PULL_DOWN)
#define STM32G4X_PINMUX_FUNC_PA6_LPUART1_CTS __DEPRECATED_MACRO                                   \
	(STM32_PINMUX_ALT_FUNC_12 | STM32_OPENDRAIN_PULLUP)
#define STM32G4X_PINMUX_FUNC_PA6_ADC2_IN3 STM32_MODER_ANALOG_MODE
#define STM32G4X_PINMUX_FUNC_PA6_DAC2_OUT1 __DEPRECATED_MACRO STM32_MODER_ANALOG_MODE

#define STM32G4X_PINMUX_FUNC_PA7_PWM3_CH2 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PA7_SPI1_MOSI __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUPDR_PULL_DOWN)
#define STM32G4X_PINMUX_FUNC_PA7_ADC2_IN4 STM32_MODER_ANALOG_MODE

#define STM32G4X_PINMUX_FUNC_PA8_I2C3_SCL __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_OPENDRAIN_PULLUP)
#define STM32G4X_PINMUX_FUNC_PA8_I2C2_SDA __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32G4X_PINMUX_FUNC_PA8_PWM1_CH1 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_PUSHPULL_NOPULL)

#define STM32G4X_PINMUX_FUNC_PA9_I2C2_SCL __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32G4X_PINMUX_FUNC_PA9_PWM1_CH2 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PA9_USART1_TX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#define STM32G4X_PINMUX_FUNC_PA9_PWM2_CH3 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_10 | STM32_PUSHPULL_NOPULL)

#define STM32G4X_PINMUX_FUNC_PA10_SPI2_MISO __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUPDR_PULL_DOWN)
#define STM32G4X_PINMUX_FUNC_PA10_PWM1_CH3 __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PA10_USART1_RX __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUPDR_NO_PULL)
#define STM32G4X_PINMUX_FUNC_PA10_PWM2_CH4 __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_10 | STM32_PUSHPULL_NOPULL)

#define STM32G4X_PINMUX_FUNC_PA11_SPI2_MOSI __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUPDR_PULL_DOWN)
#define STM32G4X_PINMUX_FUNC_PA11_USART1_CTS __DEPRECATED_MACRO                                   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_OPENDRAIN_PULLUP)
#define STM32G4X_PINMUX_FUNC_PA11_FDCAN1_RX                                    \
	(STM32_PINMUX_ALT_FUNC_9 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PA11_PWM4_CH1 __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_10 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PA11_PWM1_CH4 __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_11 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PA11_USB_DM STM32_PUSHPULL_NOPULL

#define STM32G4X_PINMUX_FUNC_PA12_USART1_RTS __DEPRECATED_MACRO                                   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_OPENDRAIN_PULLUP)
#define STM32G4X_PINMUX_FUNC_PA12_FDCAN1_TX                                    \
	(STM32_PINMUX_ALT_FUNC_9 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PA12_PWM4_CH2 __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_10 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PA12_USB_DP STM32_PUSHPULL_NOPULL

#define STM32G4X_PINMUX_FUNC_PA13_I2C1_SCL __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32G4X_PINMUX_FUNC_PA13_USART3_CTS __DEPRECATED_MACRO                                   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_OPENDRAIN_PULLUP)
#define STM32G4X_PINMUX_FUNC_PA13_PWM4_CH3 __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_10 | STM32_PUSHPULL_NOPULL)

#define STM32G4X_PINMUX_FUNC_PA14_I2C1_SDA __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32G4X_PINMUX_FUNC_PA14_PWM8_CH2 __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PA14_USART2_TX __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)

#define STM32G4X_PINMUX_FUNC_PA15_PWM2_CH1 __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PA15_PWM8_CH1 __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PA15_I2C1_SCL __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32G4X_PINMUX_FUNC_PA15_SPI1_NSS __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_PULLUP)
#define STM32G4X_PINMUX_FUNC_PA15_SPI3_NSS __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_PUSHPULL_PULLUP)
#define STM32G4X_PINMUX_FUNC_PA15_USART2_RX __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUPDR_NO_PULL)
#define STM32G4X_PINMUX_FUNC_PA15_UART4_RTS __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_OPENDRAIN_PULLUP)

/* Port B */
#define STM32G4X_PINMUX_FUNC_PB0_PWM3_CH3 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PB0_ADC1_IN15 STM32_MODER_ANALOG_MODE

#define STM32G4X_PINMUX_FUNC_PB1_PWM3_CH4 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PB1_LPUART1_RTS __DEPRECATED_MACRO                                   \
	(STM32_PINMUX_ALT_FUNC_12 | STM32_OPENDRAIN_PULLUP)
#define STM32G4X_PINMUX_FUNC_PB1_ADC1_IN12 STM32_MODER_ANALOG_MODE

#define STM32G4X_PINMUX_FUNC_PB3_PWM2_CH2 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PB3_SPI1_SCK __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PB3_SPI3_SCK __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PB3_USART2_TX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)

#define STM32G4X_PINMUX_FUNC_PB4_PWM3_CH1 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PB4_SPI1_MISO __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUPDR_PULL_DOWN)
#define STM32G4X_PINMUX_FUNC_PB4_SPI3_MISO __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_PUPDR_PULL_DOWN)
#define STM32G4X_PINMUX_FUNC_PB4_USART2_RX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUPDR_NO_PULL)

#define STM32G4X_PINMUX_FUNC_PB5_PWM3_CH2 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PB5_SPI1_MOSI __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUPDR_PULL_DOWN)
#define STM32G4X_PINMUX_FUNC_PB5_SPI3_MOSI __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_PUPDR_PULL_DOWN)
#define STM32G4X_PINMUX_FUNC_PB5_I2C3_SDA __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_OPENDRAIN_PULLUP)

#define STM32G4X_PINMUX_FUNC_PB6_PWM4_CH1 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PB6_PWM8_CH1 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PB6_USART1_TX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)

#define STM32G4X_PINMUX_FUNC_PB7_PWM4_CH2 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PB7_I2C1_SDA __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32G4X_PINMUX_FUNC_PB7_USART1_RX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUPDR_NO_PULL)
#define STM32G4X_PINMUX_FUNC_PB7_PWM3_CH4 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_10 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PB7_UART4_CTS __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_OPENDRAIN_PULLUP)

#define STM32G4X_PINMUX_FUNC_PB8_PWM4_CH3 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PB8_I2C1_SCL __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32G4X_PINMUX_FUNC_PB8_USART3_RX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUPDR_NO_PULL)
#define STM32G4X_PINMUX_FUNC_PB8_FDCAN1_RX                                     \
	(STM32_PINMUX_ALT_FUNC_9 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PB8_PWM8_CH2 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_10 | STM32_PUSHPULL_NOPULL)

#define STM32G4X_PINMUX_FUNC_PB9_PWM4_CH4 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PB9_I2C1_SDA __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32G4X_PINMUX_FUNC_PB9_USART3_TX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#define STM32G4X_PINMUX_FUNC_PB9_FDCAN1_TX                                     \
	(STM32_PINMUX_ALT_FUNC_9 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PB9_PWM8_CH3 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_10 | STM32_PUSHPULL_NOPULL)

#define STM32G4X_PINMUX_FUNC_PB10_PWM2_CH3 __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PB10_USART3_TX __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#define STM32G4X_PINMUX_FUNC_PB10_LPUART1_RX __DEPRECATED_MACRO                                   \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUPDR_NO_PULL)

#define STM32G4X_PINMUX_FUNC_PB11_PWM2_CH4 __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PB11_USART3_RX __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUPDR_NO_PULL)
#define STM32G4X_PINMUX_FUNC_PB11_LPUART1_TX __DEPRECATED_MACRO                                   \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)
#define STM32G4X_PINMUX_FUNC_PB11_ADC12_IN14 STM32_MODER_ANALOG_MODE

#define STM32G4X_PINMUX_FUNC_PB12_SPI2_NSS __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_PULLUP)
#define STM32G4X_PINMUX_FUNC_PB12_LPUART1_RTS __DEPRECATED_MACRO                                  \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_OPENDRAIN_PULLUP)
#define STM32G4X_PINMUX_FUNC_PB12_ADC1_IN11 STM32_MODER_ANALOG_MODE

#define STM32G4X_PINMUX_FUNC_PB13_SPI2_SCK __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PB13_USART3_CTS __DEPRECATED_MACRO                                   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_OPENDRAIN_PULLUP)
#define STM32G4X_PINMUX_FUNC_PB13_LPUART1_CTS __DEPRECATED_MACRO                                  \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_OPENDRAIN_PULLUP)

#define STM32G4X_PINMUX_FUNC_PB14_PWM15_CH1 __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PB14_SPI2_MISO __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUPDR_PULL_DOWN)
#define STM32G4X_PINMUX_FUNC_PB14_USART3_RTS __DEPRECATED_MACRO                                   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_OPENDRAIN_PULLUP)
#define STM32G4X_PINMUX_FUNC_PB14_ADC1_IN5 STM32_MODER_ANALOG_MODE

#define STM32G4X_PINMUX_FUNC_PB15_PWM15_CH2 __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PB15_SPI2_MOSI __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUPDR_PULL_DOWN)
#define STM32G4X_PINMUX_FUNC_PB15_ADC2_IN15 STM32_MODER_ANALOG_MODE

/* Port C */
#define STM32G4X_PINMUX_FUNC_PC0_PWM1_CH1 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PC0_LPUART1_RX __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUPDR_NO_PULL)
#define STM32G4X_PINMUX_FUNC_PC0_ADC12_IN6 STM32_MODER_ANALOG_MODE

#define STM32G4X_PINMUX_FUNC_PC1_PWM1_CH2 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PC1_LPUART1_TX __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)
#define STM32G4X_PINMUX_FUNC_PC1_ADC12_IN7 STM32_MODER_ANALOG_MODE

#define STM32G4X_PINMUX_FUNC_PC2_PWM1_CH3 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PC2_ADC12_IN8 STM32_MODER_ANALOG_MODE

#define STM32G4X_PINMUX_FUNC_PC3_PWM1_CH4 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PC3_ADC12_IN9 STM32_MODER_ANALOG_MODE

#define STM32G4X_PINMUX_FUNC_PC4_I2C2_SCL __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32G4X_PINMUX_FUNC_PC4_USART1_TX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#define STM32G4X_PINMUX_FUNC_PC4_ADC2_IN5 STM32_MODER_ANALOG_MODE

#define STM32G4X_PINMUX_FUNC_PC5_USART1_RX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUPDR_NO_PULL)
#define STM32G4X_PINMUX_FUNC_PC5_ADC2_IN11 STM32_MODER_ANALOG_MODE

#define STM32G4X_PINMUX_FUNC_PC6_PWM3_CH1 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PC6_PWM8_CH1 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_PUSHPULL_NOPULL)

#define STM32G4X_PINMUX_FUNC_PC7_PWM3_CH2 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PC7_PWM8_CH2 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_PUSHPULL_NOPULL)

#define STM32G4X_PINMUX_FUNC_PC8_PWM3_CH3 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PC8_PWM8_CH3 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PC8_I2C3_SCL __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_OPENDRAIN_PULLUP)

#define STM32G4X_PINMUX_FUNC_PC9_PWM3_CH4 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PC9_PWM8_CH4 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PC9_I2C3_SDA __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_OPENDRAIN_PULLUP)

#define STM32G4X_PINMUX_FUNC_PC10_UART4_TX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_PULLUP)
#define STM32G4X_PINMUX_FUNC_PC10_SPI3_SCK __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PC10_USART3_TX __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)

#define STM32G4X_PINMUX_FUNC_PC11_UART4_RX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUPDR_NO_PULL)
#define STM32G4X_PINMUX_FUNC_PC11_SPI3_MISO __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_PUPDR_PULL_DOWN)
#define STM32G4X_PINMUX_FUNC_PC11_USART3_RX __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUPDR_NO_PULL)
#define STM32G4X_PINMUX_FUNC_PC11_I2C3_SDA __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_OPENDRAIN_PULLUP)

#define STM32G4X_PINMUX_FUNC_PC12_SPI3_MOSI __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_PUPDR_PULL_DOWN)

/* Port D */
#define STM32G4X_PINMUX_FUNC_PD0_FDCAN1_RX                                     \
	(STM32_PINMUX_ALT_FUNC_9 | STM32_PUSHPULL_NOPULL)

#define STM32G4X_PINMUX_FUNC_PD1_PWM8_CH4 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PD1_FDCAN1_TX                                     \
	(STM32_PINMUX_ALT_FUNC_9 | STM32_PUSHPULL_NOPULL)

#define STM32G4X_PINMUX_FUNC_PD3_PWM2_CH1 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PD3_USART2_CTS __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_OPENDRAIN_PULLUP)

#define STM32G4X_PINMUX_FUNC_PD4_PWM2_CH2 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PD4_USART2_RTS __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_OPENDRAIN_PULLUP)

#define STM32G4X_PINMUX_FUNC_PD5_USART2_TX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)

#define STM32G4X_PINMUX_FUNC_PD6_PWM2_CH4 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PD6_USART2_RX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUPDR_NO_PULL)

#define STM32G4X_PINMUX_FUNC_PD8_PWM2_CH3 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)

#define STM32G4X_PINMUX_FUNC_PD8_USART3_TX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)

#define STM32G4X_PINMUX_FUNC_PD9_USART3_RX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUPDR_NO_PULL)

#define STM32G4X_PINMUX_FUNC_PD11_USART3_CTS __DEPRECATED_MACRO                                   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_OPENDRAIN_PULLUP)

#define STM32G4X_PINMUX_FUNC_PD12_USART3_RTS __DEPRECATED_MACRO                                   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_OPENDRAIN_PULLUP)

#define STM32G4X_PINMUX_FUNC_PD15_SPI2_NSS __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_PUSHPULL_PULLUP)

/* Port E */
#define STM32G4X_PINMUX_FUNC_PE0_USART1_TX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)

#define STM32G4X_PINMUX_FUNC_PE1_USART1_RX __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUPDR_NO_PULL)

#define STM32G4X_PINMUX_FUNC_PE2_PWM3_CH1 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)

#define STM32G4X_PINMUX_FUNC_PE3_PWM3_CH2 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)

#define STM32G4X_PINMUX_FUNC_PE4_PWM3_CH3 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)

#define STM32G4X_PINMUX_FUNC_PE5_PWM3_CH4 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)

#define STM32G4X_PINMUX_FUNC_PE9_PWM1_CH1 __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)

#define STM32G4X_PINMUX_FUNC_PE11_PWM1_CH2 __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)

#define STM32G4X_PINMUX_FUNC_PE13_PWM1_CH3 __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)

#define STM32G4X_PINMUX_FUNC_PE14_PWM1_CH4 __DEPRECATED_MACRO                                     \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)

#define STM32G4X_PINMUX_FUNC_PE15_USART3_RX __DEPRECATED_MACRO                                    \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUPDR_NO_PULL)

/* Port F */
#define STM32G4X_PINMUX_FUNC_PF0_I2C2_SDA __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32G4X_PINMUX_FUNC_PF0_SPI2_NSS __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_PULLUP)
#define STM32G4X_PINMUX_FUNC_PF0_ADC1_IN10 STM32_MODER_ANALOG_MODE

#define STM32G4X_PINMUX_FUNC_PF1_SPI2_SCK __DEPRECATED_MACRO                                      \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)
#define STM32G4X_PINMUX_FUNC_PF1_ADC2_IN10 STM32_MODER_ANALOG_MODE

#endif /* ZEPHYR_DRIVERS_PINMUX_STM32_PINMUX_STM32G4X_H_ */
