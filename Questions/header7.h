#pragma once
#pragma once
#include <iostream>
using namespace std;

int f71(int* a) { //takes in the pointer equal to 2     
    return *a; //returns the value of the pointer....which is 2
}
int* f72(int* a) {  //takes in a pointer of equal to 2
    return a; //returns the memory location of the above
}
int* f73(int& a) {  //takes in memory location where there is a 2
    return &a; //returns the same
}
void mainMethod7() {
    int value = 2;
    cout << f71(f72(f73(value))) << endl; 
}