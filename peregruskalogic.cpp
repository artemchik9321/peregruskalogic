// peregruskalogic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;

class Circle 
{
    double rad;
    double const PI = 3.14;
public:
    Circle() { rad = 0; }
    Circle(double _rad) { rad = _rad; }
    bool operator==(Circle& b) 
    {
        if (rad == b.rad) 
        {
            return true;
        }
        return false;
    }
    bool operator>(Circle& b) 
    {
        if (2 * PI * rad > 2 * PI * b.rad)
        {
            return true;
        }
        return false;
    }
    Circle operator+=(int a) 
    {
        rad += a;
        return *this;
    }
    Circle operator-=(int a) 
    {
        rad -= a;
        return *this;
    }
    bool operator==(Circle& b) 
    {
        if (rad == b.rad)
        {
            return true;
        }
        return false;
    }
};