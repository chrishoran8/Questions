#pragma once
#include <iostream>
using namespace std;

void mainMethodThree() {
    int* val = new int; //unable to read memory, no value
    *val = sizeof(val) / sizeof(int *); //size of pointer of int is same as size of int
    int* tab = new int[*val]; //*val = 1 
    tab[0] = *val; //tab now equal to 1
    delete val; //delete val
    cout << *tab; //
    delete[] tab;
}

void mainMethodThreeOne() {
    float x = 3.14, * p = &x; //varialbe 3.14, pointer pointing at that mem location
    p[0] = ++x; //x aka *p aka p[0] = ++x so add 1 to 3.14
    cout << x; //output 4.14
}

void mainMethodThreeTwo() {
    int tab[5] = { 1,2,4,8,16 };
    int* p1 = tab; //p1 at start of array    
    int* p2 = tab + 4; //p2 at end of array    
    for (int* p = p1 + 1;p < p2;p++) {//starting point is p1 +1
        *p = p[-1] * 2; 
        // = one before * 2 which is the same as it currently is!   
    }
    cout << tab[1] << tab[2]; //24
}

void mainMethodThreeThree() {
    int t[3] = { 3,2,1 };
    int* ptr = t + 1;
    cout << *ptr << endl; //outputs 2 as expected
    (*(ptr + 1))++; //this doesnt actually move the pointer: (ptr + 1) is temporary
    *ptr = *ptr + 1; //VS doesnt like the shortcut version
    cout << t[1] << t[2]; //outputs 3 2

}