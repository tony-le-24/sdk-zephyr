/*
 * Copyright (c) 2017 RnDity Sp. z o.o.
 * Copyright (c) 2019 Centaur Analytics, Inc
 * Copyright (c) 2020 Libre Solar Technologies GmbH
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_DRIVERS_PINMUX_STM32_PINMUX_STM32F0_H_
#define ZEPHYR_DRIVERS_PINMUX_STM32_PINMUX_STM32F0_H_

/**
 * @file Header for STM32F0 pin multiplexing helper
 */

/*
 * Note:
 * The SPIx_SCK pin speed must be set to HIGH ('11') to avoid last data bit
 * corruption which is a known issue of STM32F0 SPI peripheral (see errata
 * sheets).
 */

/* USART1 */
#define STM32F0_PINMUX_FUNC_PA9_USART1_TX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F0_PINMUX_FUNC_PA10_USART1_RX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUPDR_NO_PULL)

#define STM32F0_PINMUX_FUNC_PB6_USART1_TX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUSHPULL_PULLUP)
#define STM32F0_PINMUX_FUNC_PB7_USART1_RX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUPDR_NO_PULL)

/* USART2 */
#define STM32F0_PINMUX_FUNC_PA2_USART2_TX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F0_PINMUX_FUNC_PA3_USART2_RX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUPDR_NO_PULL)

#define STM32F0_PINMUX_FUNC_PA14_USART2_TX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F0_PINMUX_FUNC_PA15_USART2_RX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUPDR_NO_PULL)

#define STM32F0_PINMUX_FUNC_PD5_USART2_TX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUSHPULL_PULLUP)
#define STM32F0_PINMUX_FUNC_PD6_USART2_RX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUPDR_NO_PULL)

/* USART3 */
#define STM32F0_PINMUX_FUNC_PB10_USART3_TX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_PUSHPULL_PULLUP)
#define STM32F0_PINMUX_FUNC_PB11_USART3_RX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_PUPDR_NO_PULL)

#define STM32F0_PINMUX_FUNC_PC4_USART3_TX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F0_PINMUX_FUNC_PC5_USART3_RX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUPDR_NO_PULL)

#define STM32F0_PINMUX_FUNC_PC10_USART3_TX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F0_PINMUX_FUNC_PC11_USART3_RX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUPDR_NO_PULL)

#define STM32F0_PINMUX_FUNC_PD8_USART3_TX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUSHPULL_PULLUP)
#define STM32F0_PINMUX_FUNC_PD9_USART3_RX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUPDR_NO_PULL)

/* USART4 */
#define STM32F0_PINMUX_FUNC_PA0_USART4_TX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_PUSHPULL_PULLUP)
#define STM32F0_PINMUX_FUNC_PA1_USART4_RX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_PUPDR_NO_PULL)

#define STM32F0_PINMUX_FUNC_PC10_USART4_TX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUSHPULL_PULLUP)
#define STM32F0_PINMUX_FUNC_PC11_USART4_RX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUPDR_NO_PULL)

#define STM32F0_PINMUX_FUNC_PE8_USART4_TX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F0_PINMUX_FUNC_PE9_USART4_RX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUPDR_NO_PULL)

/* USART5 */
#define STM32F0_PINMUX_FUNC_PB3_USART5_TX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_PUSHPULL_PULLUP)
#define STM32F0_PINMUX_FUNC_PB4_USART5_RX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_PUPDR_NO_PULL)

#define STM32F0_PINMUX_FUNC_PC12_USART5_TX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32F0_PINMUX_FUNC_PD2_USART5_RX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUPDR_NO_PULL)

#define STM32F0_PINMUX_FUNC_PE10_USART5_TX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F0_PINMUX_FUNC_PE11_USART5_RX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUPDR_NO_PULL)

/* USART6 */
#define STM32F0_PINMUX_FUNC_PA4_USART6_TX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_PULLUP)
#define STM32F0_PINMUX_FUNC_PA5_USART6_RX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUPDR_NO_PULL)

#define STM32F0_PINMUX_FUNC_PC0_USART6_TX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32F0_PINMUX_FUNC_PC1_USART6_RX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUPDR_NO_PULL)

#define STM32F0_PINMUX_FUNC_PF9_USART6_TX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F0_PINMUX_FUNC_PF10_USART6_RX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUPDR_NO_PULL)

/* USART7 */
#define STM32F0_PINMUX_FUNC_PC0_USART7_TX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F0_PINMUX_FUNC_PC1_USART7_RX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUPDR_NO_PULL)

#define STM32F0_PINMUX_FUNC_PC6_USART7_TX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F0_PINMUX_FUNC_PC7_USART7_RX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUPDR_NO_PULL)

#define STM32F0_PINMUX_FUNC_PF2_USART7_TX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F0_PINMUX_FUNC_PF3_USART7_RX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUPDR_NO_PULL)

/* USART8 */
#define STM32F0_PINMUX_FUNC_PC2_USART8_TX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32F0_PINMUX_FUNC_PC3_USART8_RX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUPDR_NO_PULL)

#define STM32F0_PINMUX_FUNC_PC8_USART8_TX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F0_PINMUX_FUNC_PC9_USART8_RX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUPDR_NO_PULL)

#define STM32F0_PINMUX_FUNC_PD13_USART8_TX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUSHPULL_PULLUP)
#define STM32F0_PINMUX_FUNC_PD14_USART8_RX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUPDR_NO_PULL)

/* I2C1 */
#define STM32F0_PINMUX_FUNC_PA9_I2C1_SCL __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32F0_PINMUX_FUNC_PA10_I2C1_SDA __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)

#define STM32F0_PINMUX_FUNC_PB6_I2C1_SCL __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_OPENDRAIN_PULLUP)
#define STM32F0_PINMUX_FUNC_PB7_I2C1_SDA __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_OPENDRAIN_PULLUP)

#define STM32F0_PINMUX_FUNC_PB8_I2C1_SCL __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_OPENDRAIN_PULLUP)
#define STM32F0_PINMUX_FUNC_PB9_I2C1_SDA __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_OPENDRAIN_PULLUP)

#define STM32F0_PINMUX_FUNC_PB10_I2C1_SCL __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_OPENDRAIN_PULLUP)
#define STM32F0_PINMUX_FUNC_PB11_I2C1_SDA __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_OPENDRAIN_PULLUP)

#define STM32F0_PINMUX_FUNC_PF0_I2C1_SDA __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_OPENDRAIN_PULLUP)
#define STM32F0_PINMUX_FUNC_PF1_I2C1_SCL __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_OPENDRAIN_PULLUP)

#define STM32F0_PINMUX_FUNC_PF6_I2C1_SCL __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_OPENDRAIN_PULLUP)
#define STM32F0_PINMUX_FUNC_PF7_I2C1_SDA __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_OPENDRAIN_PULLUP)

/* I2C2 */
#define STM32F0_PINMUX_FUNC_PA11_I2C2_SCL __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_OPENDRAIN_PULLUP)
#define STM32F0_PINMUX_FUNC_PA12_I2C2_SDA __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_OPENDRAIN_PULLUP)

#define STM32F0_PINMUX_FUNC_PB10_I2C2_SCL __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_OPENDRAIN_PULLUP)
#define STM32F0_PINMUX_FUNC_PB11_I2C2_SDA __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_OPENDRAIN_PULLUP)

#define STM32F0_PINMUX_FUNC_PB13_I2C2_SCL __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_OPENDRAIN_PULLUP)
#define STM32F0_PINMUX_FUNC_PB14_I2C2_SDA __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_OPENDRAIN_PULLUP)

#define STM32F0_PINMUX_FUNC_PF6_I2C2_SCL __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_OPENDRAIN_PULLUP)
#define STM32F0_PINMUX_FUNC_PF7_I2C2_SDA __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_OPENDRAIN_PULLUP)

/* SPI1 */
#define STM32F0_PINMUX_FUNC_PA4_SPI1_NSS __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUSHPULL_PULLUP)
#define STM32F0_PINMUX_FUNC_PA5_SPI1_SCK __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUSHPULL_NOPULL | \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)
#define STM32F0_PINMUX_FUNC_PA6_SPI1_MISO __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUPDR_PULL_DOWN)
#define STM32F0_PINMUX_FUNC_PA7_SPI1_MOSI __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUPDR_PULL_DOWN)

#define STM32F0_PINMUX_FUNC_PA15_SPI1_NSS __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUSHPULL_PULLUP)
#define STM32F0_PINMUX_FUNC_PB3_SPI1_SCK __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUSHPULL_NOPULL | \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)
#define STM32F0_PINMUX_FUNC_PB4_SPI1_MISO __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUPDR_PULL_DOWN)
#define STM32F0_PINMUX_FUNC_PB5_SPI1_MOSI __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUPDR_PULL_DOWN)

#define STM32F0_PINMUX_FUNC_PE12_SPI1_NSS __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F0_PINMUX_FUNC_PE13_SPI1_SCK __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_NOPULL | \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)
#define STM32F0_PINMUX_FUNC_PE14_SPI1_MISO __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUPDR_PULL_DOWN)
#define STM32F0_PINMUX_FUNC_PE15_SPI1_MOSI __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUPDR_PULL_DOWN)

/* SPI2 */
#define STM32F0_PINMUX_FUNC_PB12_SPI2_NSS __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUSHPULL_PULLUP)
#define STM32F0_PINMUX_FUNC_PB13_SPI2_SCK __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUSHPULL_NOPULL | \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)
#define STM32F0_PINMUX_FUNC_PB14_SPI2_MISO __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUPDR_PULL_DOWN)
#define STM32F0_PINMUX_FUNC_PB15_SPI2_MOSI __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUPDR_PULL_DOWN)

#define STM32F0_PINMUX_FUNC_PB9_SPI2_NSS __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_PULLUP)
#define STM32F0_PINMUX_FUNC_PB10_SPI2_SCK __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL | \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)
#define STM32F0_PINMUX_FUNC_PC2_SPI2_MISO __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUPDR_PULL_DOWN)
#define STM32F0_PINMUX_FUNC_PC3_SPI2_MOSI __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUPDR_PULL_DOWN)

#define STM32F0_PINMUX_FUNC_PD0_SPI2_NSS __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F0_PINMUX_FUNC_PD1_SPI2_SCK __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_NOPULL | \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)
#define STM32F0_PINMUX_FUNC_PD3_SPI2_MISO __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUPDR_PULL_DOWN)
#define STM32F0_PINMUX_FUNC_PD4_SPI2_MOSI __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUPDR_PULL_DOWN)

/* CAN */
#define STM32F0_PINMUX_FUNC_PA11_FDCAN_RX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_PUSHPULL_NOPULL)
#define STM32F0_PINMUX_FUNC_PA12_FDCAN_TX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_PUSHPULL_NOPULL)

#define STM32F0_PINMUX_FUNC_PB8_FDCAN_RX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_PUSHPULL_NOPULL)
#define STM32F0_PINMUX_FUNC_PB9_FDCAN_TX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_PUSHPULL_NOPULL)

#define STM32F0_PINMUX_FUNC_PD0_FDCAN_RX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUPDR_PULL_UP)
#define STM32F0_PINMUX_FUNC_PD1_FDCAN_TX __DEPRECATED_MACRO \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUSHPULL_NOPULL)

/* ADC */
#define STM32F0_PINMUX_FUNC_PA0_ADC_IN0 \
	STM32_MODER_ANALOG_MODE
#define STM32F0_PINMUX_FUNC_PA1_ADC_IN1 \
	STM32_MODER_ANALOG_MODE
#define STM32F0_PINMUX_FUNC_PA2_ADC_IN2 \
	STM32_MODER_ANALOG_MODE
#define STM32F0_PINMUX_FUNC_PA3_ADC_IN3 \
	STM32_MODER_ANALOG_MODE
#define STM32F0_PINMUX_FUNC_PA4_ADC_IN4 \
	STM32_MODER_ANALOG_MODE
#define STM32F0_PINMUX_FUNC_PA5_ADC_IN5 \
	STM32_MODER_ANALOG_MODE
#define STM32F0_PINMUX_FUNC_PA6_ADC_IN6 \
	STM32_MODER_ANALOG_MODE
#define STM32F0_PINMUX_FUNC_PA7_ADC_IN7 \
	STM32_MODER_ANALOG_MODE
#define STM32F0_PINMUX_FUNC_PB0_ADC_IN8 \
	STM32_MODER_ANALOG_MODE
#define STM32F0_PINMUX_FUNC_PB1_ADC_IN9 \
	STM32_MODER_ANALOG_MODE
#define STM32F0_PINMUX_FUNC_PC0_ADC_IN10 \
	STM32_MODER_ANALOG_MODE
#define STM32F0_PINMUX_FUNC_PC1_ADC_IN11 \
	STM32_MODER_ANALOG_MODE
#define STM32F0_PINMUX_FUNC_PC2_ADC_IN12 \
	STM32_MODER_ANALOG_MODE
#define STM32F0_PINMUX_FUNC_PC3_ADC_IN13 \
	STM32_MODER_ANALOG_MODE
#define STM32F0_PINMUX_FUNC_PC4_ADC_IN14 \
	STM32_MODER_ANALOG_MODE
#define STM32F0_PINMUX_FUNC_PC5_ADC_IN15 \
	STM32_MODER_ANALOG_MODE

/* DAC */
#define STM32F0_PINMUX_FUNC_PA4_DAC_OUT1 __DEPRECATED_MACRO \
	STM32_MODER_ANALOG_MODE
#define STM32F0_PINMUX_FUNC_PA5_DAC_OUT2 __DEPRECATED_MACRO \
	STM32_MODER_ANALOG_MODE

#endif /* ZEPHYR_DRIVERS_PINMUX_STM32_PINMUX_STM32F0_H_ */
