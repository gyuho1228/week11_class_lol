#pragma once
#include <fstream>
#include<iostream>
using namespace std;
class LOL {
public:
	LOL() {f1d = nullptr; f2d = nullptr;}
	LOL(int n1, int n2, float aa, float bb, float xx0, float ddx, int mm) {
		N1 = n1;
		N2 = n2;
		a = aa;
		b = bb;
		x0 = xx0;
		dx = ddx;
		m = mm;
		f1d = new int[N2-N1+1];
		f2d = new float[m];
	}
	~LOL() {
		delete[] f1d;
		delete[] f2d;
	}

	

	int N1, N2;
	float a, b, x0, dx;
	int m;
	int* f1d;
	float* f2d;

	ofstream xx;
	ifstream aa;

	void f0(string);
	void f1();
	void f2();
	void f3(string);
	void ff(string);
};
