#include "MyAlgo.h"

float PID(int S, float Kp, float Ki, float Kd) {

	float hata, eskihata, i, P, D, pid;

	eskihata = 0;
	i = 0;
	hata = S - 992;

	P = Kp * hata;
	i = Ki*(i + hata);
	D = Kd * (hata - eskihata);

	pid = P + i + D;

	eskihata = hata;
	return pid;
}

int arama(int S) {
	int deger[19] = { 1,3,7,15,31,62,124,248,496,992,1984,3968,7936,15872,31744,30720,28672,24576,16384 };
	for (int j = 0; j <= 19; j++) {
		if (deger[j] == S)
		{
			return j + 1;
		}
	}
	return -1;
}

bool __stdcall Algo1(int S, int L, int R, int Init, int& VL, int& VR)
{
	int eskisensordegeri = 992;
	int sensordegeri = arama(S);
	int a = eskisensordegeri - sensordegeri;
	float Kp, Ki, Kd;
	Kp = 0.000000012*a;
	Ki = 0.0000000001*a;
	Kd = 0.00001*a;
	int df = 35;
	float pid = PID(S, Kp, Ki, Kd);
	if (a <= -1) {

		VL = df + pid*a * 10;
		VR = df - pid*a * 10;
	}
	else if (a >= -1) {
		VL = df - pid * 10;
		VR = df + pid* 10;
	}
	else if (sensordegeri == -1) {
		VL = df - pid * 10;
		VL = df - pid * 10;
	}
	else {
		VL = df + pid * 10;
		VL = df + pid * 10;

	}
	




	eskisensordegeri = sensordegeri;

	return true;
}

bool __stdcall  Algo2(int S, int L, int R, int Init, int& VL, int& VR)
{
	int eskisensordegeri = 10, Lesd = 10, Resd = 10;
	int sensordegeri = arama(S);
	int Lsensor = arama(L);
	int Rsensor = arama(R);
	int La = Lesd - Lsensor;
	int Ra = Resd - Rsensor;
	int a = eskisensordegeri - sensordegeri;
	float Kp, Ki, Kd;
	Kp = 0.0000001;
	Ki = 0.00000001 ;
	Kd = 0.000001;
	int hiz = 30;


	float pid = PID(S, Kp, Ki, Kd);
	if (a <= -1) {


		if (La <= -1) {
			VL = hiz + pid*La;
			VR = hiz - pid*La;
		}
		else if (La >= 1) {

			VL = hiz + pid + 10;
			VR = hiz - pid + 10;

		}
		else if (Lsensor == -1) {

			VL = hiz + pid;
			VR = hiz + pid;
		}


		if (Ra <= -1)
		{
			VL = hiz - pid*Ra;
			VR = hiz + pid*Ra;
		}
		else if (Ra >= 1) {

			VL = hiz - pid + 10;
			VR = hiz + pid + 10;

		}
		else if (Rsensor == -1)
		{
			VL = hiz + pid;
			VR = hiz + pid;
		}


	}
	else if (a >= -1) {

		if (Ra <= -1)
		{
			VL = hiz - pid;
			VR = hiz + pid;

		}
		else if (Ra >= 1) {
			VL = hiz - pid + 10;
			VR = hiz + pid + 10;

		}
		else if (Rsensor == 0) {
			VL = hiz + pid;
			VR = hiz + pid;
		}



		if (La <= -1)
		{
			VL = hiz + pid;
			VR = hiz - pid;

		}
		else if (Ra >= 1) {
			VL = hiz + pid + 10;
			VR = hiz - pid + 10;

		}
		else if (Rsensor == 0) {
			VL = hiz + pid;
			VR = hiz + pid;
		}





	}
	else if (sensordegeri == -1) {

		VL = hiz - pid;
		VL = hiz - pid;
	}
	else {
		VL = 127;
		VL = 127;

	}






	eskisensordegeri = sensordegeri;
	Lesd = Lsensor;
	Resd = Rsensor;
	return true;


	
}

bool __stdcall Algo3(int S, int L, int R, int Init, int& VL, int& VR)
{
	VL = 60;
	VR = 60;

	return true;
}

bool __stdcall Algo4(int S, int L, int R, int Init, int& VL, int& VR)
{
	VL = 60;
	VR = 60;


	return true;
}

bool __stdcall  Algo5(int S, int L, int R, int Init, int& VL, int& VR)
{
	VL = 60;
	VR = 60;

	return true;
}

bool __stdcall  Algo6(int S, int L, int R, int Init, int& VL, int& VR) {

	int eskisensordegeri = 992;
	int sensordegeri = arama(S);
	int a = eskisensordegeri - sensordegeri;
	float Kp, Ki, Kd;
	Kp = 0.000000012*a;
	Ki = 0.0000000001*a;
	Kd = 0.00001*a;
	int df = 35;
	float pid = PID(S, Kp, Ki, Kd);
	if (a <= -1) {

		VL = df + pid*a * 10;
		VR = df - pid*a * 10;
	}
	else if (a >= -1) {
		VL = df - pid * 10;
		VR = df + pid * 10;
	}
	else if (sensordegeri == -1) {
		VL = df - pid * 10;
		VL = df - pid * 10;
	}
	else {
		VL = df + pid * 10;
		VL = df + pid * 10;

	}





	eskisensordegeri = sensordegeri;

	return true;

}

bool __stdcall  Algo7(int S, int L, int R, int Init, int& VL, int& VR)
{
	VL = 60;
	VR = 60;


	return true;
}
