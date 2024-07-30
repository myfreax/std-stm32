#include "stm32f10x.h"

int main(void) {
  RCC_APB2PeriphClockCmd(
      RCC_APB2Periph_GPIOA | RCC_APB2Periph_GPIOC | RCC_APB2Periph_USART1,
      ENABLE);
  // led
  GPIO_InitTypeDef gpioc13 = {
      .GPIO_Mode = GPIO_Mode_Out_PP,
      .GPIO_Pin = GPIO_Pin_13,
      .GPIO_Speed = GPIO_Speed_50MHz,
  };
  GPIO_Init(GPIOC, &gpioc13);
  // GPIO_SetBits(GPIOC, GPIO_Pin_13);
  GPIO_ResetBits(GPIOC, GPIO_Pin_13);
  while (1) {
    // GPIO_ResetBits(GPIOC, GPIO_Pin_13);
    // Delay_ms(500);
    // GPIO_SetBits(GPIOC, GPIO_Pin_13);
    // Delay_ms(500);
  }
  return 0;
}
