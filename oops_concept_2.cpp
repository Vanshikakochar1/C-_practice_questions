// about default constructor
#include<iostream>
#include<string>
using namespace std;
class A{
private:
int age;
string name;
float height;
public:
class Person;
A(){
    name = "null"; // default constructor 
    age =0;
    height=0.0f;
}
void getData(){
    cout << "Name is:" << name <<endl;
    cout << "age is:" << age << endl;
    cout << "height is:" << height << endl;
}

};
int main(){
    A a_obj;
    a_obj.getData();
    return 0;
}