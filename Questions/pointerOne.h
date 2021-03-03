#pragma once
#include <iostream>
using namespace std;

int f1(int* a) { //returns an integer
    cout << "f1: " << *a << endl; //299
    return *a + 1;
}
int* f2(int* a) { //returns a pointer
    cout << "f2: " << *a << endl; //500 
    return a + 1;
}
int* f3(int& a) { //returns a pointer
    cout << "f3: " << &a << endl; //memory
    return &a + 1;
}
int mainMethod() {
    int t[] = { 500, 501, 299, 503 };
    cout << f1(f3(*f2(t))) << endl; //300
    cout << t[0] << t[1] << t[2] << t[3] << endl;
    cout << "1 currently" << t << endl; //memory location same
    cout << "2 currently" << *t << endl ; //500
    cout << "3 currently" << t[0] << endl; //500
    cout << "4 currently" << &t[0] << endl; //memory location same
    cout << "cout1" << *f2(t) << endl; // 501
    cout << "cout2" << f3(*f2(t)) << endl; //memory location
    cout << "cout3" << f1(f3(*f2(t))); //500
    cout << "cout4" << f2(t); //memory location


    return 0;
}