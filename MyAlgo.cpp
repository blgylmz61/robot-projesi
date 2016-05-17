#include "MyAlgo.h"

// a sample exported function
bool __stdcall Algo1(int S, int L, int R, int Init, int& VL, int& VR)
{

	//  VL = 60 ;
	//   VR = 60 ;

	double al = (double)L / 255.0;
	double ar = (double)R / 255.0;

	VL = 300 * ar;
	VR = 300 * al;



	return true;
}

bool __stdcall  Algo2(int S, int L, int R, int Init, int& VL, int& VR)
{
	
		VL = 60;
	

		VR = 60;

	return true;
}

bool __stdcall Algo3(int S, int L, int R, int Init, int& VL, int& VR)
{
	VL = 20;
	VR = -20;

	return true;
}

bool __stdcall Algo4(int S, int L, int R, int Init, int& VL, int& VR)
{
	double deltaL, deltaR;

	deltaL = R - L;

	deltaR = L - R;

	deltaL = deltaL / 255;
	deltaR = deltaR / 255;

	VL = 40 - deltaL * 10;
	VR = 40 - deltaR * 10;
	

	return true;
}

int oldS = 0;
int counter = 0;
bool turnLeft = false;
bool turnRight = false;

bool __stdcall  Algo5(int S, int L, int R, int Init, int& VL, int& VR)
{
	double deltaL, deltaR;

	if (S == 0)
	{
		oldS = 1;
		VL = 10;
		VR = -10;
		counter = 1;
		turnLeft = true;
		return true;
	}

	if (oldS == 1 && S == 0 && turnLeft)
	{
		VL = 10;
		VR = -10;
		counter++;
		if (counter > 3)
		{
			counter = 1;
			VL = -10;
			VR = 10;
			turnRight = true;
			turnLeft = false;
		}
		return true;
	}

	if (oldS == 1 && S == 0 && turnRight)
	{
		VL = -10;
		VR = 10;
		counter++;
		if (counter > 3)
		{
			counter = 1;
			VL = 5;
			VR = 5;
			turnRight = false;
			turnLeft = true;
		}
		return true;
	}

	deltaL = R - L;

	deltaR = L - R;

	deltaL = deltaL / 255;
	deltaR = deltaR / 255;

	VL = 10 - deltaL * 10;
	VR = 10 - deltaR * 10;


	return true;
}

bool __stdcall  Algo6(int S, int L, int R, int Init, int& VL, int& VR)
{
	double deltaL, deltaR;

	if (S == 0)
	{
		oldS = 1;
		VL = 5;
		VR = -5;
		counter = 1;
		turnLeft = true;
		return true;
	}

	if (oldS == 1 && S == 0 && turnLeft)
	{
		VL = -5;
		VR = 5;
		counter++;
		if (counter > 3)
		{
			counter = 1;
			VL = -5;
			VR = 5;
			turnRight = true;
			turnLeft = false;
		}
		return true;
	}

	if (oldS == 1 && S == 0 && turnRight)
	{
		VL = 5;
		VR = -5;
		counter++;
		if (counter > 3)
		{
			counter = 1;
			VL = 5;
			VR = 5;
			turnRight = false;
			turnLeft = true;
		}
		return true;
	}

	deltaL = R - L;

	deltaR = L - R;

	deltaL = deltaL / 255;
	deltaR = deltaR / 255;

	VL = 10 - deltaL * 10;
	VR = 10 - deltaR * 10;


	return true;
}

bool __stdcall  Algo7(int S, int L, int R, int Init, int& VL, int& VR)
{
	VL = 60;
	VR = 60;


	return true;
}

