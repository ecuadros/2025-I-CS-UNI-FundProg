#ifndef __TYPES_H__
#define __TYPES_H__
#include <string>

enum Docs{
    DocTypeNone, 
    DocTypePassport, 
    DocTypeDNI, 
    DocTypeCE
};

using namespace std;
using NameType = string;
using DocType = Docs;

using SalaryType = double;
using TermType = size_t;
using OfficeType = string;

using ContainerElemType = int;

#endif // __TYPES_H__