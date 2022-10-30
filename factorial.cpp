// Write a Program to find factorial, take input from the user

#include <iostream>
using namespace std;

int main() {
    int num, fact=1;
    cout<<"Enter the Number: ";
    cin>>num;
    
    if (num < 0)
        cout << "Factorial of a negative number doesn't exist!";
    else {
        for(int i=num; i>=1; i--) {
            fact = fact*i;
        }
        cout<<"\nFactorial of "<<num<< " = "<<fact;
    }
    
    return 0;
}
