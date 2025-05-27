#ifndef __SORTING_H__
#define __SORTING_H__
#include "util.h"
#include "compareFunc.h"

using ContainerRange = int;

void BurbujaClasico(ContainerElemType* arr, ContainerRange n, CompFunc pComp);
void BurbujaRecursivo(ContainerElemType* arr, ContainerRange n, CompFunc pComp);
void DemoBurbuja();

ContainerRange  particionar(ContainerElemType* arr, ContainerRange first, ContainerRange last, CompFunc pComp);
void QuickSort  (ContainerElemType* arr, ContainerRange first, ContainerRange last, CompFunc pComp);
void DemoQuickSort();

void Merge(ContainerElemType* arr, const ContainerRange left, const ContainerRange mid, const ContainerRange right, CompFunc pComp); 
void MergeSort(ContainerElemType* arr, const ContainerRange begin, const ContainerRange end, CompFunc pComp);
void DemoMergeSort();

void DemoSorting();

#endif // __SORTING_H__