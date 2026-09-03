// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the MATHHELPER_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// MATHHELPER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef MATHHELPER_EXPORTS
#define MATHHELPER_API __declspec(dllexport)
#else
#define MATHHELPER_API __declspec(dllimport)
#endif

// This class is exported from the dll
class MATHHELPER_API CMathHelper {
public:
	CMathHelper(void);
	// TODO: add your methods here.
};

extern MATHHELPER_API int nMathHelper;

MATHHELPER_API int fnMathHelper(void);
