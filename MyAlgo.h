#ifndef __MAIN_H__
#define __MAIN_H__
#include <windows.h>
/*  To use this exported function of dll, include this header
*  in your project.
*/
#ifdef BUILD_DLL
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT __declspec(dllimport)
#endif
#ifdef __cplusplus
#endif
extern "C" __declspec(dllexport) bool __stdcall  Algo1(int S, int L, int R, int Init, int& VL, int& VR);
extern "C" __declspec(dllexport) bool __stdcall  Algo2(int S, int L, int R, int Init, int& VL, int& VR);
extern "C" __declspec(dllexport) bool __stdcall  Algo3(int S, int L, int R, int Init, int& VL, int& VR);
extern "C" __declspec(dllexport) bool __stdcall  Algo4(int S, int L, int R, int Init, int& VL, int& VR);
extern "C" __declspec(dllexport) bool __stdcall  Algo5(int S, int L, int R, int Init, int& VL, int& VR);
extern "C" __declspec(dllexport) bool __stdcall  Algo6(int S, int L, int R, int Init, int& VL, int& VR);
extern "C" __declspec(dllexport) bool __stdcall  Algo7(int S, int L, int R, int Init, int& VL, int& VR);


float PID(int S, float Kp, float Ki, float Kd);
float pid = 0.0f;

int arama(int S);

//bool DLL_EXPORT Algo7(int *ptr);
#ifdef __cplusplus
#endif
#endif // __MAIN_H__