//using inheritance 
#include<iostream>
using namespace std;
class rectangle{
public:
int length;
int breadth;
void area(){
    cout << "area is :" << length*breadth<<endl;
}
};
class cuboid: public rectangle{
public:
int height;
void volume(){
    cout <<"volume is :" << length*breadth*height;
}
};
int main(){
    cuboid c;
    c.length=10; c.breadth=20;c.height=90;
    c.area();
    c.volume();
    return 0;
}