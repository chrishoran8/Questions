#pragma once
#include <iostream>
#include "pointerOne.h"
using namespace std;

int fun(int t[]) {
	t[0] += t[1];
	return t[0];
}

int mainMethodTwo() {
	cout << "main method 2";
	return 0;
}