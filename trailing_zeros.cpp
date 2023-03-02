#include<iostream>

using namespace std;
int main(){
    int n; // Input Variable  // eg n = 50
    cout << "Enter the input no of which you find the trailing zeros: ";
    cin >> n; // Taking input from user
    int no_of_zero =0, quotient=0; // defining no-of-zero is 0 and quotient is 0

    while(n!=0){
        quotient = n/5; // 50/5 = 10 = quotient // n = 10 => 10/5 = 2 = quotient
        no_of_zero = no_of_zero + quotient; // no_of_zero = 0+ 10 = 10 // no_of_zero = 10, quotient =2 => no_of_zero = 10+2 =12
        n = n/5; // n = 50 /5 = 10  // n=10 => 10/5 = 2 

    }
    cout << "The no of trailing zeros are: " << no_of_zero<< endl;
    return 0; 
}