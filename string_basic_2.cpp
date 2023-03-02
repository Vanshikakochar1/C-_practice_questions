#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="geeks for geeks";
    int frequency[26];
    for(int i=0; i<26; i++){
        frequency[i]=0;

    }
    for(int i =0; i<s.size();i++){
        cout << frequency[s[i]-'a']++ << endl;

    }
    char ans ='g';
    int maxF =0;
    for (int i = 0; i <26; i++)
    {
        if (frequency[i]>maxF)
        {
            maxF = frequency[i];
            ans = i+'a';
        }
        
    }
    cout <<maxF << " " << ans << endl;
    
    return 0;
}