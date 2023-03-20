#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout << "Enter the length of array:" << endl;
    cin >> n;

    int a[n];
    cout << "enter the array elements as defined according to length " ;
    for(int i =0; i<n; i++){
        cin >> a[i];
    }
    int sum;
    cout << "Enter the sum of triplet elements" << endl;
    cin >> sum;
    sort (a,a+n);
    int flag =0;
    
    for(int i =0; i<n-2 && flag ==0; i++){
        int l = i+1, h = n-1;
        while(l<h){
            if(a[i]+a[l]+a[h]<sum){
                l--;
            }
            else if(a[i]+a[l]+a[h]>sum){
                h++;
            }
            else{
                cout << a[i] << " " << a[l] << " " << a[h]<< endl;
                flag =1;
                break;
            }
        }
    }
if (flag == 0){
    cout << "No Triplet Found" << endl;
}


return 0;
}