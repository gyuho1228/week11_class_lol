#include<iostream>
#include<fstream>
#include"lol.h"
using namespace std;

int main() {
	LOL l1, l2, l3, l4;
	l1 = LOL(5, 10, 2, 3, -5, 0.1, 10);
	l2 = LOL(7, 100, -3.5, 4, 100, 10, 15);
	l3 = LOL(12, 17, 0.01, 0.2, 1.5, 0.08, 20);
	l4 = LOL(10, 20, 4.2, -5.3, 2.1, 0.2, 5);


	l1.f3("akali.bin");
	l1.ff("akali.bin");

	l2.f3("amumu.bin");
	l2.ff("amumu.bin");
	
	l3.f3("annie.bin");
	l3.ff("annie.bin");

	l4.f3("ashe.bin");
	l4.ff("ashe.bin");


	return 10;
}
