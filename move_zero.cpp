#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int count =0;
    for(int i =0; i<n; i++){
        if(a[i]!=0){
            a[count]= a[i];
            count++;
        }
    }
    while(count <n){
        a[count]=0;
        count++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
return 0;    
    
}