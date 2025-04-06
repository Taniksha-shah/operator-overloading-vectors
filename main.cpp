// The Vector2D class represents a 2-dimensional vector quantity with x and y components. 
// It supports basic vector operations such as addition, scalar multiplication, comparison, 
// magnitude calculation, and formatted output using operator overloading.

#include<iostream>
#include<cmath>
#include"vector.h"
using namespace std;

int main() {
    Vector V1(2, 3);
    Vector V2(1, 2);

    Vector V3 = V1 + V2;                                //vector addition
    
    cout << V1*2 << endl;                               //vector multiplication

    cout << boolalpha << (V1==V2) << endl;              //vector comparison

    cout << V1.magnitudeCalculation() << endl;        //magnitude calculation

    cout << V3 << endl;                                 //formatted output using operator overloading
    return 0;
}