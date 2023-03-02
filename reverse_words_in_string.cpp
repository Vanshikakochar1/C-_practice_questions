#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

string reverseString( string str){
    reverse(str.begin(), str.end()); // reverse string using inbuilt function
    str.insert(str.end(),'.'); // will insert dot at the end of the string to identify the end 
    int n = str.length(); // check the length
    int j =0; // extra space to store
    for (int i =0; i<n ; i++){ 
        if (str[i]=='.'){ // if it founds the last dot
            reverse(str.begin()+j, // it will store the begin value in j
            str.begin()+i); 
            j = i+1; // store the consecutive i values in j 
        }
    }
    str.pop_back(); // pop the last extra space
    return str; // then return the string of the function
}
int main(){
    cout << endl;
    string str = "I.like.this.code"; // input the string 
    string rev = reverseString(str); // using function input the string
    cout << rev << endl;
    return 0;

}
