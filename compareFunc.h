#ifndef __COMPARE_H__
#define __COMPARE_H__
#include "types.h"

// C, C++
// typedef bool (*CompFunc)(const ContainerElemType &, const ContainerElemType &);
// C++11 en adelante
using CompFunc = bool (*)(const ContainerElemType &, const ContainerElemType &);

bool Mayor(const ContainerElemType &a, const ContainerElemType &b);
bool Menor(const ContainerElemType &a, const ContainerElemType &b);

#endif // __COMPARE_H__