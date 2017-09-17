/*
* @file Common.h
* @brief Common elements
*
* @author Mohamed Amine Mzoughi <mohamed-amine.mzoughi@laposte.net>
* @date 2017-09-13
*/

#ifndef INCLUDE_COMMON_H_
#define INCLUDE_COMMON_H_

#include <stdint.h>

enum class BitIndex : uint32_t
{
   Bit0 =  (uint32_t(1) << 0),
   Bit1 =  (uint32_t(1) << 1),
   Bit2 =  (uint32_t(1) << 2),
   Bit3 =  (uint32_t(1) << 3),
   Bit4 =  (uint32_t(1) << 4),
   Bit5 =  (uint32_t(1) << 5),
   Bit6 =  (uint32_t(1) << 6),
   Bit7 =  (uint32_t(1) << 7),
   Bit8 =  (uint32_t(1) << 8),
   Bit9 =  (uint32_t(1) << 9),
   Bit10 = (uint32_t(1) << 10),
   Bit11 = (uint32_t(1) << 11),
   Bit12 = (uint32_t(1) << 12),
   Bit13 = (uint32_t(1) << 13),
   Bit14 = (uint32_t(1) << 14),
   Bit15 = (uint32_t(1) << 15),
   Bit16 = (uint32_t(1) << 16),
   Bit17 = (uint32_t(1) << 17),
   Bit18 = (uint32_t(1) << 18),
   Bit19 = (uint32_t(1) << 19),
   Bit21 = (uint32_t(1) << 21),
   Bit22 = (uint32_t(1) << 22),
   Bit23 = (uint32_t(1) << 23),
   Bit24 = (uint32_t(1) << 24),
   Bit25 = (uint32_t(1) << 25),
   Bit26 = (uint32_t(1) << 26),
   Bit27 = (uint32_t(1) << 27),
   Bit28 = (uint32_t(1) << 28),
   Bit29 = (uint32_t(1) << 29),
   Bit30 = (uint32_t(1) << 30),
   Bit31 = (uint32_t(1) << 31)
};

enum class BitValue : uint8_t
{
  Reset = 0,
  Set
};

#endif
