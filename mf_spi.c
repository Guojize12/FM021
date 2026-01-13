#include "mf_spi.h"
#include "fm33lc0xx_fl.h"


void MF_SPI1_Init(void)
{
	FL_GPIO_InitTypeDef GPIO_InitStruct;
	FL_SPI_InitTypeDef SPI1_InitStruct;

	// PB9 SPI1_SCK
	GPIO_InitStruct.pin = FL_GPIO_PIN_9;
	GPIO_InitStruct.mode = FL_GPIO_MODE_DIGITAL;
	GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
	GPIO_InitStruct.pull = FL_DISABLE;
	GPIO_InitStruct.remapPin = FL_DISABLE;
	FL_GPIO_Init(GPIOB, &GPIO_InitStruct);

	// PB10 SPI1_MISO
	GPIO_InitStruct.pin = FL_GPIO_PIN_10;
	FL_GPIO_Init(GPIOB, &GPIO_InitStruct);

	// PB11 SPI1_MOSI
	GPIO_InitStruct.pin = FL_GPIO_PIN_11;
	FL_GPIO_Init(GPIOB, &GPIO_InitStruct);

	SPI1_InitStruct.transferMode = FL_SPI_TRANSFER_MODE_FULL_DUPLEX;
	SPI1_InitStruct.mode = FL_SPI_WORK_MODE_MASTER;
	SPI1_InitStruct.dataWidth = FL_SPI_DATA_WIDTH_8B;
	SPI1_InitStruct.clockPolarity = FL_SPI_POLARITY_NORMAL;
	SPI1_InitStruct.clockPhase = FL_SPI_PHASE_EDGE1;
	SPI1_InitStruct.softControl = FL_DISABLE;
	SPI1_InitStruct.baudRate = FL_SPI_BAUDRATE_DIV8;
	SPI1_InitStruct.bitOrder = FL_SPI_BIT_ORDER_MSB_FIRST;
	FL_SPI_Init(SPI1, &SPI1_InitStruct);
}

void MF_SPI2_Init(void)
{
	FL_GPIO_InitTypeDef GPIO_InitStruct;
	FL_SPI_InitTypeDef SPI2_InitStruct;

	// PC8 SPI2_SCK
	GPIO_InitStruct.pin = FL_GPIO_PIN_8;
	GPIO_InitStruct.mode = FL_GPIO_MODE_DIGITAL;
	GPIO_InitStruct.outputType = FL_GPIO_OUTPUT_PUSHPULL;
	GPIO_InitStruct.pull = FL_DISABLE;
	GPIO_InitStruct.remapPin = FL_DISABLE;
	FL_GPIO_Init(GPIOC, &GPIO_InitStruct);

	// PC9 SPI2_MISO
	GPIO_InitStruct.pin = FL_GPIO_PIN_9;
	FL_GPIO_Init(GPIOC, &GPIO_InitStruct);

	// PC10 SPI2_MOSI
	GPIO_InitStruct.pin = FL_GPIO_PIN_10;
	FL_GPIO_Init(GPIOC, &GPIO_InitStruct);

	SPI2_InitStruct.transferMode = FL_SPI_TRANSFER_MODE_FULL_DUPLEX;
	SPI2_InitStruct.mode = FL_SPI_WORK_MODE_MASTER;
	SPI2_InitStruct.dataWidth = FL_SPI_DATA_WIDTH_8B;
	SPI2_InitStruct.clockPolarity = FL_SPI_POLARITY_NORMAL;
	SPI2_InitStruct.clockPhase = FL_SPI_PHASE_EDGE1;
	SPI2_InitStruct.softControl = FL_DISABLE;
	SPI2_InitStruct.baudRate = FL_SPI_BAUDRATE_DIV8;
	SPI2_InitStruct.bitOrder = FL_SPI_BIT_ORDER_MSB_FIRST;
	FL_SPI_Init(SPI2, &SPI2_InitStruct);
}
