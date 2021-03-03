#pragma once
#include <iostream>
#include "pointerOne.h"
using namespace std;

struct s {
	float* f;
};

void make(s* p, float x = 10) { // a pointer of ss is taken in here of type s called p
	float* f = new float; //a new null pointer of type f is created here	
	*f = sizeof(*f) / sizeof(float) * 10; // the size of *f and the size of float are the same
	//*f = 4 / 4 * 10 = 10
	
	p->f = f; //p.f = 10
	cout << "f: " << *f << endl; // is a memory location
	//object pointer p.f = memory location of above f
}

void mainMethodTwo() {
	s* ss = new s; //make a new pointer of type s called ss
	make(ss); // pass the pointer of ss to the make function
	cout << *(*ss).f; // the value (the above pointer).f
	delete ss->f;
	delete ss;

}