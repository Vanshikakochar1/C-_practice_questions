// define a class and how to create a object 
#include<iostream>
using namespace std;
class house{
private:
int length, breadth;
public:
void setData(int x, int y){
    length = x;
    breadth = y;
}
void area(){
    cout << length*breadth;
}
};
int main(){
    house h1;
    h1.setData(209,892);
    h1.area();
    return 0;
}

