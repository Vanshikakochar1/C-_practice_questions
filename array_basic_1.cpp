// program to take array as input user 
#include<iostream>
using namespace std;
int main(){
    int arr[10]={};// empty array of size 10
    int n = sizeof(arr)/sizeof(arr[0]); // to find the length of array

    for(int i=0;i<n;i++){ // iterate for entering the values
        cout << "Enter the number for " << i+1<<" ";
        cin >> arr[i]; // input the array values
    }
    for(int i =0; i<n; i++){
        cout <<"[" << arr[i]<<"]"<< " "; // loop to print the output 
    }
    
return 0;
}