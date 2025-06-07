#ifndef __TYPES_H__
#define __TYPES_H__
#include <string>

using namespace std;
using NameType = string;
//using AgeType  = unsigned int;
enum DocTypeEnum {DocTypeNone, DocTypePassport, DocTypeDNI, DocTypeCE};
using DocType = DocTypeEnum;
using SalaryType = double;

using ContainerElemType = int;

#endif // __TYPES_H__