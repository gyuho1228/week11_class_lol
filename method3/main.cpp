#include<iostream>
#include<fstream>
#include"lol.h"
using namespace std;

int main() {

	LOL l1(5, 10, 2, 3, -5, 0.1, 10, "akali.bin");
	LOL l2(7, 100, -3.5, 4, 100, 10, 15, "amumu.bin");
	LOL l3(12, 17, 0.01, 0.2, 1.5, 0.08, 20, "annie.bin");
	LOL l4(10, 20, 4.2, -5.3, 2.1, 0.2, 5, "ashe.bin");


	l1.f3();
	l1.ff("akali.bin");

	l2.f3();
	l2.ff("amumu.bin");

	l3.f3();
	l3.ff("annie.bin");

	l4.f3();
	l4.ff("ashe.bin");


	return 10;
}
