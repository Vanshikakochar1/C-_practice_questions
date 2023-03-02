// about copy constructor
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
A(int age_a, string name_a,float height_a){
    name = name_a; 
    age =age_a;
    height=height_a;
}
A(A &obj2){ //copy
    name = obj2.name; 
    age =obj2.age;
    height=obj2.height;
}
void getData(){
    cout << "Name is:" << name <<endl;
    cout << "age is:" << age << endl;
    cout << "height is:" << height << endl;
}

};
int main(){
    A a_obj, obj2(17,"vanshika",34.3f),obj3(obj2); // object name(whose copy is to be done obj) syntax 
    obj3.getData();
    a_obj.getData();
    obj2.getData();
    return 0;
}