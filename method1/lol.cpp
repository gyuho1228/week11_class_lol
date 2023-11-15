#include <iostream>
#include<fstream>
#include "lol.h"
void LOL::f0(string ss) {
	xx.open(ss, ios::binary | ios::out);
}

void LOL::f1() {
	int* f1d;
	f1d = new int[N2 - N1 + 1];
	for (int i = N1; i < N2 + 1; i++) {
		f1d[i-N1] = (i * (i + 1))/ 2;
	}
	xx.write((char*)f1d, sizeof(int) * (N2 - N1 + 1));
	delete[] f1d;
}
	
void LOL::f2() {
	float* f2d, x;
	f2d = new float[m];
	x = x0;
	for (int i = 0; i < m; i++, x+=dx) {
		f2d[i] = a * x + b;
	}
	xx.write((char*)f2d, sizeof(float) * m);
	delete[] f2d;
	xx.close();
}

void LOL::f3(string ss) {	//binary파일을 읽어서 cout 하기

	int* a;
	float* b;
	a = new int[N2 - N1 + 1];
	b = new float[m];


	aa.open(ss, ios::binary | ios::in);

	aa.read((char*)a, sizeof(int) * (N2 - N1 + 1));
	aa.read((char*)b, sizeof(float) * m);
	
	for (int i = 0; i < (N2 - N1 + 1); i++) {
		cout << a[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < m; i++) {
		cout << b[i] << " ";
	}
	cout<<endl;

	delete[] a;
	delete[] b;
	aa.close();
}
