#ifndef __X86_64_QUANTA_LY7_RGLBMC_GPIO_TABLE_H__
#define __X86_64_QUANTA_LY7_RGLBMC_GPIO_TABLE_H__

/*
 * defined within platform/quanta_switch.c
 * Quanta Switch Platform driver
 */
#define QUANTA_LY7_PCA953x_GPIO(P1, P2)	(P1*8+P2)

#define QUANTA_LY7_PCA9555_GPIO_SIZE	0x10

#define QUANTA_LY7_I2C_GPIO_BASE	0x10

#define QUANTA_LY7_I2C_GPIO_CPU_BASE               0x40

#define QUANTA_LY7_CPU_BOARD_GPIO_BASE              (QUANTA_LY7_I2C_GPIO_CPU_BASE)
#define QUANTA_LY7_CPU_BOARD_SYS_P1                 (QUANTA_LY7_CPU_BOARD_GPIO_BASE + QUANTA_LY7_PCA953x_GPIO(1,2))
#define QUANTA_LY7_CPU_BOARD_SYS_P2                 (QUANTA_LY7_CPU_BOARD_GPIO_BASE + QUANTA_LY7_PCA953x_GPIO(1,3))

#define QUANTA_LY7_ZQSFP_EN_GPIO_BASE				QUANTA_LY7_I2C_GPIO_BASE
#define QUANTA_LY7_ZQSFP_EN_GPIO_SIZE				QUANTA_LY7_PCA9555_GPIO_SIZE
#define QUANTA_LY7_ZQSFP_EN_GPIO_P3V3_PW_GD		(QUANTA_LY7_ZQSFP_EN_GPIO_BASE + QUANTA_LY7_PCA953x_GPIO(0,4))
#define QUANTA_LY7_ZQSFP_EN_GPIO_P3V3_PW_EN		(QUANTA_LY7_ZQSFP_EN_GPIO_BASE + QUANTA_LY7_PCA953x_GPIO(0,5))

#define QUANTA_LY7_PCA9698_2_GPIO_BASE				(QUANTA_LY7_I2C_GPIO_BASE + QUANTA_LY7_PCA9555_GPIO_SIZE)
#define QUANTA_LY7_PCA9698_2_GPIO_QSFP_49_RESET_N	(QUANTA_LY7_PCA9698_2_GPIO_BASE + QUANTA_LY7_PCA953x_GPIO(0,0))
#define QUANTA_LY7_PCA9698_2_GPIO_QSFP_49_PRSNT_N	(QUANTA_LY7_PCA9698_2_GPIO_BASE + QUANTA_LY7_PCA953x_GPIO(0,2))
#define QUANTA_LY7_PCA9698_2_GPIO_QSFP_49_LPMOD_P	(QUANTA_LY7_PCA9698_2_GPIO_BASE + QUANTA_LY7_PCA953x_GPIO(0,3))
#define QUANTA_LY7_PCA9698_2_GPIO_QSFP_50_RESET_N	(QUANTA_LY7_PCA9698_2_GPIO_BASE + QUANTA_LY7_PCA953x_GPIO(0,4))
#define QUANTA_LY7_PCA9698_2_GPIO_QSFP_50_PRSNT_N	(QUANTA_LY7_PCA9698_2_GPIO_BASE + QUANTA_LY7_PCA953x_GPIO(0,6))
#define QUANTA_LY7_PCA9698_2_GPIO_QSFP_50_LPMOD_P	(QUANTA_LY7_PCA9698_2_GPIO_BASE + QUANTA_LY7_PCA953x_GPIO(0,7))
#define QUANTA_LY7_PCA9698_2_GPIO_QSFP_51_RESET_N	(QUANTA_LY7_PCA9698_2_GPIO_BASE + QUANTA_LY7_PCA953x_GPIO(1,0))
#define QUANTA_LY7_PCA9698_2_GPIO_QSFP_51_PRSNT_N	(QUANTA_LY7_PCA9698_2_GPIO_BASE + QUANTA_LY7_PCA953x_GPIO(1,2))
#define QUANTA_LY7_PCA9698_2_GPIO_QSFP_51_LPMOD_P	(QUANTA_LY7_PCA9698_2_GPIO_BASE + QUANTA_LY7_PCA953x_GPIO(1,3))
#define QUANTA_LY7_PCA9698_2_GPIO_QSFP_52_RESET_N	(QUANTA_LY7_PCA9698_2_GPIO_BASE + QUANTA_LY7_PCA953x_GPIO(1,4))
#define QUANTA_LY7_PCA9698_2_GPIO_QSFP_52_PRSNT_N	(QUANTA_LY7_PCA9698_2_GPIO_BASE + QUANTA_LY7_PCA953x_GPIO(1,6))
#define QUANTA_LY7_PCA9698_2_GPIO_QSFP_52_LPMOD_P	(QUANTA_LY7_PCA9698_2_GPIO_BASE + QUANTA_LY7_PCA953x_GPIO(1,7))

#endif /* __X86_64_QUANTA_LY7_RGLBMC_GPIO_TABLE_H__ */
