#pragma once
#include <iostream>
using namespace std;

int* make(int v){ //takes in a normal variable
	int* p = new int; //creates a pointer of type in
	*p = v + 1; // assigns the new pointer with the v + 1
	return p; //returns the memory address of the pointer
}
int* play(int& v) { //takes in a memory address of variable v
	cout << ++v; //before outputting, increments v
	return &v;//returns the memory address of v
}
void remove(int* v) {
	delete v;
}

void mainMethodFive() {
	remove(play(*make(3)));
	

}