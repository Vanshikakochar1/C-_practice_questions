#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cout << v[i]<<" ";
        cout << v.at(i)<<" ";
    }
    cout <<endl;
}
int main(){
    vector<int> vec1; // zero length integer vwctor
    vector<char> vec2(4); 
    vector<char> vec3(vec2); // 
    vector<int> v(6,3); // 6-elememt vector of 3
    int ele,size;
    cout <<"enter the size of your vector:" <<endl;
    cin >> size;

    for(int i =0; i<size; i++){
        cout << "Enter an element that will be added to the vector:";
        cin>>ele;
        vec1.push_back(ele);
     }
    // vec1.pop_back(); // end element removed 
    display (vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1,3, 566); // 3 is the no of copies required
    // display(vec1);
    return 0;
}