#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str= "hello1";
    string str2= "hello4";
    // cout << str.append(str2) <<endl;
    string str1(5,'n'); // print n 5 times 
    // cout << str1 << endl;
    string str3;
    // getline(cin, str3);
    // cout << str3 << endl;
    // cout << str[1] << endl;
    cout << str2.compare(str) << endl;
    if(str.compare(str2)==0){
        cout << "Strings are equal" << endl;
    }
    else if(!str.compare(str2)){
        cout << "Strings are not equal" <<endl;
    }

    // for empty string 
    // string s = "abc";
    // cout <<"The original string is:" << s << endl;
    // s.clear();
    // if(s.empty()){
    //     cout << "String is Empty" << endl;
    // }
     
    // erase tool
     string s = "nincompoop";
    //  s.erase(4,3);
    //  cout << "After erase 3 elements from position 4 :" << endl;
    //  cout << s << endl;
    // return 0;

    // find elements substring of a string
    
    cout << s.find("com") << endl;

    // insert functionn
    s.insert(2,"lol");
    cout << s << endl;
    cout << s.length() << endl;
    /// this loop is used to write every element differently 
    for(int i =0; i<s.length(); i++){
        cout << s[i] << endl;
    }

    // substring of an existing string 
    string s1= s.substr(6,4);
    cout << s1 << endl;


    // numeric string convert to integer (stoi)
    string s2 = "654";
    int x = stoi(s2);
    cout << x+2 << endl;

    // Integer to string (to_string)
    int y = 635;
    string s4 = to_string(y+2) ; // this will increement the int will by 2
    string s3 = to_string(y) +"2" ; // this will append the value by 2 at end 
    cout << s3 << endl;
    cout << s4 << endl;

    // sorting a string 
    string s5= "sgjsndbdbaaihm";
    sort(s5.begin(), s5.end());
    cout <<"Sorting a string:" << "   " << s5 << endl;
}