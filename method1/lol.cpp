#include <iostream>
#include<fstream>
#include "lol.h"
void LOL::f0(string ss) {
	xx.open(ss, ios::binary | ios::out);
	xx.write((char*)&N1, sizeof(int));
	xx.write((char*)&N2, sizeof(int));
	xx.write((char*)&a, sizeof(float));
	xx.write((char*)&b, sizeof(float));
	xx.write((char*)&x0, sizeof(float));
	xx.write((char*)&dx, sizeof(float));
	xx.write((char*)&m, sizeof(int));


}

void LOL::f1() {
	int* f1d;
	f1d = new int[N2 - N1 + 1];
	
	for (int i = N1; i < N2 + 1; i++) {
		f1d[i-N1] = (i * (i + 1))/ 2;
	}
	cout << endl;
	xx.write((char*)f1d	, sizeof(int) * (N2 - N1 + 1));
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
void LOL::ff(string ss) {

	int* a;
	float* b;
	a = new int[N2 - N1 + 1];
	b = new float[m];
	
	int a1[2], a3;
	float a2[4];

	aa.open(ss, ios::binary | ios::in);
	aa.read((char*)a1, sizeof(a1));
	aa.read((char*)a2, sizeof(a2));
	aa.read((char*)&a3, sizeof(a3));
	aa.read((char*)a, sizeof(int) * (N2 - N1 + 1));
	aa.read((char*)b, sizeof(float) * m);
	
	cout << "a b N1 N2 x0 dx m" << endl;
	for (auto k : a1) {
		cout << k << " ";
	}
	for (auto k : a2) {
		cout << k << " ";
	}
	cout << a3 << endl;

	cout << "f1()" << endl;

	for (int i = 0; i < (N2 - N1 + 1); i++) {
		cout << a[i] << " ";
	}

	cout << endl<< "f2()" << endl;;

	for (int i = 0; i < m; i++) {
		cout << b[i] << " ";
	}
	cout<<endl;

	delete[] a;
	delete[] b;
	aa.close();
}
