#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    unordered_map<int,int> mp;

    int sum =0, find_sum =0;
    for(int i=0; i < n; i++){
        sum = sum + a[i];
        if(sum ==0){
            find_sum = 1;
        }
        else{
            if(mp[sum] > 0){
                find_sum = 1;
            }
            else{
                mp[sum]++;
            }
        }
    }
    if(find_sum == 1){
        cout << "True" << endl;
    }
    else{
        cout << "false" << endl;
    }
    return 0;
}