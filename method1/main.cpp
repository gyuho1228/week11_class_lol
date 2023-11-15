#include<iostream>
#include<fstream>
#include"lol.h"
using namespace std;

int main() {
	LOL l1, l2, l3, l4;
	l1.N1 = 5; l1.N2 = 10;
	l1.a = 2; l1.b = 3;
	l1.x0 = -5; l1.dx = 0.1;
	l1.m = 10;

	l2.N1 = 7;  l2.N2 = 100;
	l2.a = -3.5;   l2.b = 4;
	l2.x0 = 100; l2.dx = 10;
	l2.m = 15;

	l1.f0("akali.bin");
	l1.f1();
	l1.f2();
	l1.f3("akali.bin");

	l2.f0("amumu.bin");
	l2.f1();
	l2.f2();
	l2.f3("amumu.bin");
	return 10;


}
