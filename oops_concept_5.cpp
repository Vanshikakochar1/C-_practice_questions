// program to take mobile values as input and use a constructor
#include<iostream>
#include<string>
using namespace std;
class A{
private:
// long long int phone_no;
string name;
int ram;
string processor;
int battery;
public:
// A(long long int phone_no_a=9999999999){
//     phone_no = phone_no_a;
// }
A(string name_a="Null", int ram_a=0, int battery_a=0, string processor_a="Null")
{
    name = name_a;
    ram = ram_a;
    processor=processor_a;
    battery = battery_a;
}
A(A &mob){
    name = mob.name;
    ram = mob.ram;
    processor=mob.processor;
    battery=mob.battery;
}
void getData(); // call outside the class
};
void A :: getData() // scope resolution function
{
   cout << endl <<"name: "<<name;
   cout << endl <<"Ram: "<<ram;
   cout << endl <<"processor: "<<processor;
   cout << endl <<"battery: "<<battery;
}
int main(){
    A doko;
    A doko2("Doko123", 4,55,"spandraogon");
    A doko3(doko2);
    doko.getData();
    doko2.getData();
    doko3.getData();

    return 0; 
}