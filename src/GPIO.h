/*
* @file AGpioPin.h
* @brief AGpioPin Abstract class
*
* @author Mohamed Amine Mzoughi <mohamed-amine.mzoughi@laposte.net>
* @date 2017-09-13
*/

#ifndef INCLUDE_GPIO_H_
#define INCLUDE_GPIO_H_

#include "Common.h"

class AGpioPin
{
public:
   // public definitions
   typedef uint32_t PortNumber;

   enum class Mode
   {
      In,
      Out,
      AltFunc,
      Analog
   };

   enum class PullType
   {
      NoPull,
      PullUp,
      PullDown
   };

   enum class OutputType
   {
      PushPull,
      OpenDrain
   };

   enum class Speed
   {
      Low,
      Medium,
      Fast,
      High
   };

   // constructor/destructor
   explicit AGpioPin(const PortNumber bitPort,
                     const BitIndex bitIndex,
                     const Mode bitMode,
                     const PullType bitPull,
                     const OutputType bitOuputType = OutputType::PushPull, // only for an output bit, no effect for an input bit
                     const Speed bitSpeed = Speed::Fast);             // only for an output bit, no effect for an input bit
   virtual ~AGpioPin() = 0;

   // public methods
   virtual void Set() = 0;
   virtual void Reset() = 0;
   virtual void Toggle() = 0;
   virtual uint8_t Read() = 0;

   /*
   void SetPort(const PortNumber nPortNumber) { m_nPortNumber = nPortNumber; }
   void SetIndex(const BitIndex index) { m_nBitIndex = index; }
   void SetMode(const Mode mode) { m_eMode = mode; }
   void SetPullType(const PullType pullType) { m_ePullType = pullType; }
   void SetOutputType(const OutputType outputType) { m_eOutputType = outputType; }
   void SetSpeed(const Speed speed) { m_eSpeed = speed; }

   const PortNumber GetPortNumber() { return m_nPortNumber; }
   const BitIndex GetIndex() { return m_nBitIndex; }
   const Mode GetMode() { return m_eMode; }
   const PullType GetPullType() { return m_ePullType; }
   const OutputType GetOutputType() { return m_eOutputType; }
   const Speed GetSpeed() { return m_eSpeed; }*/

protected:
   PortNumber  m_nPortNumber;
   BitIndex    m_nBitIndex;
   Mode        m_eMode;
   PullType    m_ePullType;
   OutputType  m_eOutputType;
   Speed       m_eSpeed;
};

#endif
