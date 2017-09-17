/**
* @file InternalGPIO.cpp
* @brief implementation of the internal GPIO class
* @author Mohamed Amine Mzoughi <mohamed-amine.mzoughi@laposte.net>
*/

//Dependencies
#include "InternalGPIO.h"

/**
 * @brief Constructor
 * @param[in] the port to which the chosen pin belongs
 * @param[in] the bit number of the pin chosen
 **/

CInternalGpioPin::CInternalGpioPin(const PortNumber bitPort,
                                   const BitIndex bitIndex,
                                   const Mode bitMode,
                                   const PullType bitPull,
                                   const OutputType bitOuputType,
                                   const Speed bitSpeed) :
   AGpioPin(bitPort, bitIndex, bitMode, bitPull, bitOuputType, bitSpeed)
{
#ifdef USE_STM32F4

#elif defined (USE_PIC32MX)

#endif
}

/**
 * @brief toggles the chosen pin
 **/
void CInternalGpioPin::Toggle()
{
#ifdef USE_STM32F4

#elif defined (USE_PIC32MX)

#endif
}

/**
 * @brief sets the chosen pin
 **/
void CInternalGpioPin::Set()
{
#ifdef USE_STM32F4

#elif defined (USE_PIC32MX)

#endif
}

/**
 * @brief clears the chosen pin
 **/
void CInternalGpioPin::Reset()
{
#ifdef USE_STM32F4

#elif defined (USE_PIC32MX)

#endif
}

/**
 * @brief reads the state from the chosen pin
 * @return the state of the I/O pin (0 or 1)
 **/
uint8_t CInternalGpioPin::Read()
{
#ifdef USE_STM32F4

#elif defined (USE_PIC32MX)

#endif
}
