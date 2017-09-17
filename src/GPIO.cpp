/**
* @file GPIO.cpp
* @brief Implementation of the AGpioPin class
* @author Mohamed Amine Mzoughi <mohamed-amine.mzoughi@laposte.net>
*/

#include "GPIO.h"

// Put static members initialization here

/**
* @brief constructor of the AGpioPin
*
* @param bitPort -
*
*/
AGpioPin::AGpioPin(const PortNumber bitPort,
                   const BitIndex bitIndex,
                   const Mode bitMode,
                   const PullType bitPull,
                   const OutputType bitOuputType,
                   const Speed bitSpeed) :
   m_nPortNumber(bitPort),
   m_nBitIndex(bitIndex),
   m_eMode(bitMode),
   m_ePullType(bitPull),
   m_eOutputType(bitOuputType),
   m_eSpeed(bitSpeed)
{

}

/**
* @brief destructor of the AGpioPin object
* It's a pure virtual destructor but an implementation is provided below.
* this to avoid creating a dummy pure virtual method to transform the class
* to an abstract one.
*/
AGpioPin::~AGpioPin()
{

}
