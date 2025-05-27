#ifndef __ARRAYS_H__
#define __ARRAYS_H__
#include <iostream>
#include "types.h"
using namespace std;

void CreateArray(ContainerElemType *&pArray, size_t n);
void ReadArray(ContainerElemType *pArray, size_t n);
void PrintArray(ContainerElemType *pArray, size_t n, ostream &os);
void DestroyArray(ContainerElemType *&pArray);
void DemoArrays();

#endif // __ARRAYS_H__