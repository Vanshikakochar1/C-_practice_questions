//butterfly pattern
// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // spaces = 6,4,2, 0 = 2*n-2*Row no
    // rows = * in starting and ending
    // for upper pattern 
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            cout<<"*";
        }
        int space= 2*n - 2*i;
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        for (int j = 1; j<=i; j++)
        {
            cout<<"*";
        }
        cout << endl;
    }
    // for lower pattern 
    for (int i = n; i >=1; i--)
    {
        for (int j = 1; j<=i; j++)
        {
            cout<<"*";
        }
        int space= 2*n - 2*i;
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        for (int j = 1; j<=i; j++)
        {
            cout<<"*";
        }
        cout << endl;
    }
    
return 0;   
} 
