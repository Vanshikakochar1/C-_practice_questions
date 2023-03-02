#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "jjhshskjsdnbhdmsdhdkdbhs";
    cout << 'a'-'A' << endl; // output - 32 means a > A 32 more 
    // brute force approach 
    // convert to upper case 
    // for(int i =0; i<s.size(); i++){
    //     if(s[i]>='a' && s[i] <= 'z'){
    //         s[i] -=32;
    //     }
    //     cout << s<< endl;
    // }
    // for(int i =0; i<s.size(); i++){
    //     if(s[i]>='A' && s[i] <= 'Z'){
    //         s[i] +=32;
    //     }
    //     cout << s<< endl;
    // }

    // optimized approach 
    //upper case
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s << endl;
    // lower case
    string s1 = "SHGDHSXSKAKAKKA";
    transform(s1.begin(), s1.end(), s1.begin(),:: tolower);
    cout << s1 << endl;
}