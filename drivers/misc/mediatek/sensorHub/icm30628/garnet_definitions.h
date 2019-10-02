#ifndef INV_GARNET_DEFINITIONS_H__
#define INV_GARNET_DEFINITIONS_H__

#ifdef __cplusplus
extern "C" {
#endif


#define GARNET_REG_BANK_0 0x00
#define GARNET_REG_BANK_1 0x01
#define BANK_1_OFFSET 0x100

// Garnet Register Map
// Both banks
#define GARNET_REG_BANK_SEL 0x7F		
#define GARNET_BANK_SELECT_BIT 0x01
#define GARNET_SPI_ADDR_MSB_BIT 0x02

// Bank 0
#define GARNET_WHOAMI_B0 0x00

#define GARNET_MOD_EN_B0 0x02
	#define GARNET_I2C_IF_DIS_BIT 0x01
	#define GARNET_DMP_EN_BIT 0x04
	#define GARNET_M0_EN_BIT 0x08
	#define GARNET_I2C_MST_EN_BIT 0x10
	#define GARNET_SPI_MST_EN_BIT 0x20
	#define GARNET_SERIF_FIFO_EN_BIT 0x02

#define GARNET_MOD_RUN_ONCE_0_B0 0x04
	#define SEC_INTF_CH2_RUN_BIT 0x04
	#define SEC_INTF_CH1_RUN_BIT 0x02
	#define SEC_INTF_CH0_RUN_BIT 0x01
#define GARNET_PWR_MGMT_1_B0 0x06
	#define GARNET_SOFT_RESET_BIT 0x80
	#define GARNET_DEEP_SLEEP_EN_BIT 0x10
	#define GARNET_STANDBY_EN_BIT 0x08
	#define GARNET_LP_EN_BIT 0x04
	#define GARNET_PD_REQ_BIT 0x02
	#define GARNET_SLEEP_REQ_BIT 0x01

#define GARNET_INT_PIN_CFG_B0 0x0e
#define GARNET_SRAM_CFG_B0 0xFB

#define GARNET_SCRATCH_INT_EN_B0 0x0F
#define GARNET_RAW_DATA_RDY_INT_PIN_BIT 0x08

#define GARNET_FIFO_DATA_RDY_INT_EN_B0 0x10

#define GARNET_SCRATCH_INT0_STATUS_B0 0x19
#define GARNET_SCRATCH_INT1_STATUS_B0 0x20
#define GARNET_SCRATCH_INT2_STATUS_B0 0x21

#define GARNET_EXT_SLV_SENS_DATA_00_B0 0x2A
#define GARNET_EXT_SLV_SENS_DATA_01_B0 0x2B

#define GARNET_MEM_ADDR_SEL_0_B0 0x70
	#define GARNET_MEM_R_W_B0 0x74

#define GARNET_FLASH_ERASE_B0 0x7C
	#define GARNET_FLASH_ERASE_MASS_EN_BIT 0x80
	#define GARNET_FLASH_ERASE_PAGE_EN_BIT 0x40
#define GARNET_MAX_FLASH_PAGE_ADDRESS 0x1F		// 32 2K pages of flash... this is not a register


#define GARNET_IDLE_STATUS_B0 0x7D
	#define GARNET_FLASH_LOAD_DONE_BIT 0x02
	#define GARNET_FLASH_IDLE_BIT 0x01

#define GARNET_PROD_ID_B0 0x80

#define GARNET_INTOSC1_B0 0x84

#define GARNET_MOD_CTRL_B0 0x89
	#define GARNET_HCLK_SCLK_MUX_EN_BIT 0x80
	#define GARNET_SPI_MST_DIS_BIT 0x40
	#define GARNET_I2C_MST1_DIS_BIT 0x20
	#define GARNET_I2C_MST0_DIS_BIT 0x10
	#define GARNET_SERIF_FIFO_DIS_BIT	0x04
#define GARNET_MOD_CTRL2_B0 0x8A
	#define GARNET_FIFO_EMPTY_IND_DIS_BIT 0x8

#define GARNET_SEC_INTF_CH0_CONFIG_B0 0xA0
	#define GARNET_SEC_INTF_CH0_EN_BIT 0x80
	#define GARNET_SEC_INTF_CH0_MST_MAP_BITS_SPI 0x40

#define GARNET_SEC_INTF_CH1_CONFIG_B0 0xA2
#define GARNET_SEC_INTF_CH1_ODR_CONFIG_B0	0xA3
#define GARNET_SEC_INTF_CH2_CONFIG_B0 0xA4

	#define GARNET_SEC_INTF_EN_BIT 0x80
	#define GARNET_SEC_INTF_MST_MAP_BITS_I2C_MST0 0x00
	#define GARNET_SEC_INTF_MST_MAP_BITS_I2C_MST1 0x20

#define GARNET_SEC_INTF_PRGM_START_ADDR_0_B0 0xB9
#define GARNET_SEC_INTF_SLV_INT_CFG_B0 0xBD

#define GARNET_CHANNEL_FIFO_MAP_0_B0 0xC0
#define GARNET_CHANNEL_FIFO_MAP_1_B0 0xC1
#define GARNET_CHANNEL_FIFO_MAP_2_B0 0xC2
#define GARNET_CHANNEL_FIFO_MAP_3_B0 0xC3
#define GARNET_CHANNEL_FIFO_MAP_4_B0 0xC4

#define GARNET_FIFO_PKT_SIZE_OVERRIDE_B0 0xE8
#define GARNET_FIFO_RST_B0	0xEA
#define GARNET_FIFO_MODE_B0	0xEB

#define GARNET_FLASH_CFG_B0 0xFC
	#define GARNET_FLASH_CACHE_BYPASS_BIT 0x10
	#define GARNET_FLASH_IFRN_DIS_BIT 0x02

#define GARNET_TEST_MODES_B0 0xFD
	#define GARNET_TEST_MODES_SKU_TYPE_BIT 0x04
	#define GARNET_TEST_MODES_DAP_EN_BIT 0x01

#define GARNET_FIFO_INDEX_B0		0x75
#define GARNET_FIFO_COUNTH_B0		0x76
#define GARNET_FIFO_COUNTL_B0		0x77
#define GARNET_FIFO_R_W_B0			0x78

#define GARNET_FIFO_3_SIZE_B0		0xD4
#define GARNET_FIFO_2_SIZE_B0		0xD5
#define GARNET_FIFO_1_SIZE_B0		0xD6
#define GARNET_FIFO_0_SIZE_B0		0xD7

#define GARNET_FIFO_3_PKT_SIZE_B0	0xE4
#define GARNET_FIFO_2_PKT_SIZE_B0	0xE5
#define GARNET_FIFO_1_PKT_SIZE_B0	0xE6
#define GARNET_FIFO_0_PKT_SIZE_B0	0xE7

// Bank 1
#define GARNET_PRGRM_STRT_ADDR_DRDY_0_B1 0x00		// Bits{[31:28],[23:20]}  of DMP data ready program start address
#define GARNET_PRGRM_STRT_ADDR_TIMER_0_B1 0x03		// Bits{[31:28],[23:20]}]  of DMP timer program start address
#define GARNET_PRGRM_STRT_ADDR_DEMAND_0_B1 0x06		// Bits{[31:28],[23:20]}  of DMP demand program start address?

#define GARNET_DMP_INT_ENABLE_B1 0x10
	#define GARNET_EXT_INT_DMP_TRIGGER_EN_BIT 0x40

#define GARNET_M0_INT_ENABLE_B1 0x20
	#define GARNET_EXT_INT_M0_TRIGGER_EN_BIT 0x80
	#define GARNET_FIFO_DATA_RDY_M0_INT_EN_BIT 0x02
    #define GARNET_CH_DATA_RDY_M0_INT_EN_BIT 0x01
  
#define GARNET_CH_DRDY_INT_STATUS_CM0_1_B1 0x22

#define GARNET_TESTMUX1_B1 0x40
#define GARNET_TESTMUX2_B1 0x41
#define GARNET_TESTMUX3_B1 0x42
#define GARNET_TESTMUX4_B1 0x43
#define GARNET_TESTMUX5_B1 0x44
#define GARNET_TESTMUX6_B1 0x45
#define GARNET_TESTMUX7_B1 0x46

#define GARNET_ROM_CFG_B1 0x50
#define GARNET_STCALIB_CFG_B1 0x60		// POR value of 0x03

// Memory Map
	
#define BANK0_BASE_ADDR 0x50000000
#define GARNET_FLASH_START_ADDR 0x00000000
#define GARNET_SRAM_START_ADDR  0x20000000
// the following are defined for convenience.  they are not part of an official "register map"
#define GARNET_DMP3_START_ADDR (GARNET_SRAM_START_ADDR + 0x2000)	// load the DMP3 image into the 2nd 8k of the SRAM
#define GARNET_SPI_SCRIPT_START_ADDR (GARNET_SRAM_START_ADDR + 0x5000)	// put the SPI scripts into the 3rd 8k of the SRAM... 9-25-14 moved from 0x4000

#define GARNET_GPIO_START_ADDR  0x40000000
#define GARNET_SENSOR_REGISTERS_START_ADDR 0x40000C00

#define GARNET_SPI_MASTER_START_ADDR			0x50012000
#define GARNET_I2C_MASTER0_START_ADDR			0x50010000
#define GARNET_I2C_MASTER1_START_ADDR			0x50011000
	#define GARNET_I2C_MASTER_OFFSET_MAXSPEED	0x34

// DMA Configuration

#define GARNET_DMA_CH_0_START_ADDR 0x40002000
#define GARNET_DMA_CHANNEL_ADDRESS_OFFSET 0x20
#define GARNET_DMA_CH_1_START_ADDR GARNET_DMA_CH_0_START_ADDR + GARNET_DMA_CHANNEL_ADDRESS_OFFSET		// these may be unnecessary
#define GARNET_DMA_CH_2_START_ADDR GARNET_DMA_CH_1_START_ADDR + GARNET_DMA_CHANNEL_ADDRESS_OFFSET
#define GARNET_DMA_CH_3_START_ADDR GARNET_DMA_CH_2_START_ADDR + GARNET_DMA_CHANNEL_ADDRESS_OFFSET
#define GARNET_DMA_CH_4_START_ADDR GARNET_DMA_CH_3_START_ADDR + GARNET_DMA_CHANNEL_ADDRESS_OFFSET
#define GARNET_DMA_CH_5_START_ADDR GARNET_DMA_CH_4_START_ADDR + GARNET_DMA_CHANNEL_ADDRESS_OFFSET

#define GARNET_DMA_INTERRUPT_REGISTER 0x40002100

#define GARNET_DMA_SOURCE_ADDRESS_OFFSET 0x00
#define GARNET_DMA_DEST_ADDRESS_OFFSET 0x04

#define GARNET_DMA_CONTROL_REGISTER_BYTE_0_OFFSET 0x08			
	#define GARNET_DMA_CONTROL_REGISTER_BYTE_0_WORD_SIZE_BITS 0x02		// 32 bits
#define GARNET_DMA_CONTROL_REGISTER_BYTE_1_OFFSET 0x09		
	#define GARNET_DMA_CONTROL_REGISTER_BYTE_1_MAX_BURST_BITS 0x80		// burst of 16
#define GARNET_DMA_CONTROL_REGISTER_BYTE_2_OFFSET 0x0A	
	#define GARNET_DMA_CONTROL_REGISTER_BYTE_2_START_BIT 0x02		
	#define GARNET_DMA_CONTROL_REGISTER_BYTE_2_TYPE_BITS 0x00		// bits 5:7, 000 = buffered memory to memory dma	
	#define GARNET_DMA_CONTROL_REGISTER_BYTE_2_CHG_BIT 0x04
	#define GARNET_DMA_CONTROL_REGISTER_BYTE_2_STRT_BIT 0x02


#define GARNET_DMA_CONTROL_REGISTER_BYTE_3_OFFSET 0x0B	
	#define GARNET_DMA_CONTROL_REGISTER_BYTE_3_INT_BIT 0x01	
	#define GARNET_DMA_CONTROL_REGISTER_BYTE_3_TC_BIT 0x02
	#define GARNET_DMA_CONTROL_REGISTER_BYTE_3_SINC_BIT 0x04		// we are using sinc and dinc
	#define GARNET_DMA_CONTROL_REGISTER_BYTE_3_SDEC_BIT 0x08
	#define GARNET_DMA_CONTROL_REGISTER_BYTE_3_DINC_BIT 0x20
	#define GARNET_DMA_CONTROL_REGISTER_BYTE_3_DDEC_BIT 0x40

#define GARNET_DMA_TRANSFER_COUNT_OFFSET 0x0C

// the following might belong someplace like transport.h
#define MAX_SECONDARY_TRANSFER_SIZE 16		// can only write 16 bytes via the secondary SPI (I2C?)

// SPI Commands:  4 bits, [7:4]
#define SPI_MASTER_WRITE_COMMAND 0x10	
#define SPI_MASTER_READ_COMMAND  0x20	
#define SPI_MASTER_WAIT_COMMAND  0x40	
#define SPI_MASTER_READ_UPDATE_COMMAND  0x80	
#define SPI_MASTER_STOP_COMMAND  0xB7		// anything other than the above commands = STOP	
// bits [5:4] of program byte 0
#define SPI_CLK_FREQ_PCLK 0x00
#define SPI_CLK_FREQ_PCLK_DIV_2 0x10    // 2'b01 in bits [5:4]
#define SPI_CLK_FREQ_PCLK_DIV_4 0x20    // 2'b10 in bits [5:4]
#define SPI_CLK_FREQ_PCLK_DIV_8 0x30    // 2'b11 in bits [5:4]
// bits [1:0] of program byte 0
#define SPI_SLAVE_0_ID 0x00	
#define SPI_SLAVE_1_ID 0x01
#define SPI_SLAVE_2_ID 0x10

// i2c Commands:  4 bits, [7:4]
#define I2C_MASTER_WRITE_COMMAND		0x10
#define I2C_MASTER_READ_COMMAND			0x20
#define I2C_MASTER_WAIT_COMMAND			0x40
#define I2C_MASTER_READ_DONE_COMMAND	0x80
#define I2C_MASTER_STOP_COMMAND			0x00
// bits [7:1] - program byte 0 in fast mode, program byte 1 in high speed mode
#define I2C_SLAVE_YAS530_ID		0x2E

// the following is borrowed from inv_slave_compass.c
/* AKM definitions */
#define REG_AKM_ID               0x00

#define AKM_COMPASS_CHIP_ADDR 0x0F  // this could be anything from 0x0C thru 0x0F

#ifdef __cplusplus
}
#endif

#endif // INV_GARNET_DEFINITIONS_H__