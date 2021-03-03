#pragma once
#pragma once
#include <iostream>
using namespace std;


void mainMethodSix() {
	float f[2]; //create an array of 2 elements
	float* p1 = f;//create a *p1 pointing at above array 
	cout << "a:" << p1 << endl; //shows the p1 memory location
	float *p2 = p1 + 1; //create a *p2 equating to p1memory address + 1 float block
	cout << "b:" << p2 << endl; //shows the p2 memory location
	cout << "c:" << p2 - p1 << endl; //shows 1 (p1 - p2 memory locations 
	cout << "d:" << sizeof(float) << endl; //sizeOf float is 4bytes
	cout << "e:" << (p2 - p1) / sizeof(float) << endl; // 1 / 4 returned as an int = 0
	

}