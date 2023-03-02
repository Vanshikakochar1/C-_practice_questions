#include<algorithm>
#include<iostream>
using namespace std;
int main (){
    int n , sum;
    cout << " Input the length of array:";
    cin >> n;
    int a[n];
    cout<< "Enter the elements of the array:";
    for(int i =0; i<n; i++){
       
        cin>> a[i];
    
    }
    cout<< "Enter the required sum:";
    cin >> sum;
    sort(a,a+n);
    int l=0, h=n-1;
    while(l<h){
        if(a[l]+a[h] == sum){
            cout<< a[l] << ", " << a[h];
            break;
        }
        else{
            if((a[l]+a[h])> sum){
                h--;
            }
            else{
                l--;
            }
        }
    }
    return 0;
}