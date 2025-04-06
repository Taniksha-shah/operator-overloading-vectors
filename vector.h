// The Vector2D class represents a 2-dimensional vector quantity with x and y components. 
// It supports basic vector operations such as addition, scalar multiplication, comparison, 
// magnitude calculation, and formatted output using operator overloading.

#ifndef VECTOR_H
#define VECTOR_H

#include<iostream>
#include<cmath>
using namespace std;

class Vector {
    private :
    float x;
    float y;

    public :
    Vector (float x, float y) {
        this->x = x;
        this->y = y;
    }

    //vector addition
    Vector operator+(const Vector& V){
        return Vector(x + V.x, y + V.y);                              // creates temporary object so pass by value rather than a reference
    }

    //vector multiplication with scalar 
    Vector operator* (const float A) {
        return Vector( A * this->x , A * this->y);                    // creates temporary object so pass by value rather than a reference
    }

    //Vector comparison
    bool operator==(const Vector& V) {
        return (x==V.x && y==V.y);
    }

    //Vector magnitude calculation - |V| = sqrt(x^2 + y^2)
    float magnitudeCalculation () {
        return sqrt(x*x + y*y);
    }

    friend ostream& operator<<(ostream& COUT, const Vector& V);
};

//formatted output using operator overloading
ostream& operator<<(ostream& COUT, const Vector& V) {
    COUT << V.x << "i + " << V.y << "j";                     // pass by reference as ostream(like cout) is huge, non-copyable
    return COUT;
}
#endif