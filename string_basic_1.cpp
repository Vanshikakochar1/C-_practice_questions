#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    // cout <<"input a string:" <<endl;
    // cin >> s;

    // cout << "The ouput is:"<<s << endl;
    getline(cin,s);
    cout<<"The output with white space is:"<<s<<endl;
    return 0;
}