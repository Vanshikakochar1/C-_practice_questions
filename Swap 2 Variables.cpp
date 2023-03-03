// Swapping 2 numbers with or without using a third variable
#include<iostream>
using namespace std;
int main(){
    // with 3rd variables
    int a,b,temp;
    cout << "Input value of a:" << endl;
    cin >> a;
    cout << "Input value of b:" << endl;
    cin >> b;
    cout << "After Swapping" << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "a value:" << a << endl;
    cout << "b value:" << b << endl;

    // without 3rd variables 
    int a, b;
    cout << "Enter two numbers:" << endl;
    cin >> a;
    cin >> b;
    a = a +b;
    b = a -b ;
    a = a -b;
    cout << "a value is:" << a << endl;
    cout << "b value is:" << b << endl;
return 0;
}
