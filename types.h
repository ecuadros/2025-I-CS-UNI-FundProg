#ifndef __TYPES_H__
#define __TYPES_H__
#include <string>

using namespace std;
using NameType = string;
enum Docs{DocTypeNone, DocTypePassport, DocTypeDNI, DocTypeCE};
using DocType  = Docs;

using SalaryType = double;

using StudentCode = string;
using OfficeType = string;

using ContainerElemType = int;

#endif // __TYPES_H__