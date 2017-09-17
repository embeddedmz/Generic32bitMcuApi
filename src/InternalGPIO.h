/*
* @file InternalGPIO.h
* @brief Internal GPIO's pin class
*
* @author Mohamed Amine Mzoughi <mohamed-amine.mzoughi@laposte.net>
* @date 2013-05-11
*/

#ifndef INCLUDE_INTERNALGPIO_H_
#define INCLUDE_INTERNALGPIO_H_

#include "GPIO.h"

#ifdef USE_STM32F4
extern "C"
{
   #include "stm32f4xx.h"
}
#elif defined (USE_PIC32MX)

#endif

class CInternalGpioPin : public AGpioPin
{
public:
   explicit CInternalGpioPin(const PortNumber bitPort,
                    const BitIndex bitIndex,
                    const Mode bitMode,
                    const PullType bitPull,
                    const OutputType bitOuputType = OutputType::PushPull, // only for an output bit, no effect for an input bit
                    const Speed bitSpeed = Speed::Fast);
   //CInternalGpioPin() override;

   // copy constructor and assignment operator are disabled
   CInternalGpioPin(const CInternalGpioPin&) = delete;
   CInternalGpioPin& operator=(const CInternalGpioPin&) = delete;

   // public methods
   void Set() override;
   void Reset() override;
   void Toggle() override;
   uint8_t Read() override;

protected:
#ifdef USE_STM32F4
   GPIO_InitTypeDef  m_GPIOInitStructure;
#endif

};

#endif
