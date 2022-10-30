// Write a Program to find area of a circle using Function, take input from the user

#include <iostream>
const double pi=3.141592653589793238;
using namespace std;

float areaOfCircle(float r)
{
    return (pi * r * r);
}

int main() {
    float r, area;
    
    cout<<"Enter the radius ";
    cin>>r;
    
    area=areaOfCircle(r);
    cout<<"Area of Circle is: "<<area;

    return 0;
}