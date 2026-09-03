// MathHelper.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "MathHelper.h"


// This is an example of an exported variable
MATHHELPER_API int nMathHelper=0;

// This is an example of an exported function.
MATHHELPER_API int fnMathHelper(void)
{
    return 2 * 2;
}

// This is the constructor of a class that has been exported.
CMathHelper::CMathHelper()
{
    return;
}
