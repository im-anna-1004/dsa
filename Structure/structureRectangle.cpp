#include <iostream>
#include <stdio.h>

using namespace std;

struct rect
{
    int length;
    int breadth;
};

int main(){

    struct rect a;                  //only declaration of object
    struct rect b = { 10,20 };      //declaration and initialization both simultaneously
    
    cout<<"Size of structure "<<sizeof(a)<<endl;

    cout<<"Value assigned in struct b"<<endl;
    cout<<b.length<<endl;
    cout<<b.breadth<<endl;

    cout<<"Value assigned in breadth of rect b using overriding"<<endl;
    b.breadth=25;                   //intialization manually
    cout<<b.breadth<<endl;


    int area = b.length*b.breadth;  //area of rectangle b
    cout<<"Area of rectangle b = "<<area<<endl;
  return 0;
}


