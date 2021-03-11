#pragma once
#include <iostream>
using namespace std;

int f1(int a) { //takes in value
    return ++a; //a=a+1 passed by value so does not alter original
}
int f2(int& a) { //takes in memory address
    return ++a; //a=a+1 passed by ref so alters the original
}
int f3(int* a) { //takes in pointer
    return *a + 1; // a* + 1 is NOT a*=a*+1!!!!! just adds 1
}

void mainMethodFour() {
    int value = 2;
    cout << f1(f2(f3(value)));

    //cout << f1(value); //pass by value, value remains the same but outputs 3
    //cout << "a" << value << endl;

    //cout << f2(value); //pass by reference, value increases by one to 3, outputs 3
    //cout << "b" << value << endl;

    //cout << f3(&value); //pass value memory address, 
    //cout << "c" << value << endl;
}