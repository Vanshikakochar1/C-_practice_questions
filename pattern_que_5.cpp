// half pyramid after 180 degree rotation
//    *
//    **
//   ***
//  ****
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;

    for(int i =1; i<=n;i++){ // space
        for(int j=1; j<=n; j++){
            if(j<=n-i){ // j = n - rows => 5 - 2 =3 space 
                cout <<" "; // print space then 
            } 
            else{
                cout <<"* "; // else print *
            }
        }
        cout << endl;
    }
return 0;
}