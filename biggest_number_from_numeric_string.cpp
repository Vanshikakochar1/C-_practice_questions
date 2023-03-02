#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s = "63828269822";
    transform(s.begin(),s.end(),s.begin(),greater<int>());
    cout << s << endl;
}