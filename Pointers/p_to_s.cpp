#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle
{
    int l;
    int b;
};


int main(){
    
    system("CLS");
    Rectangle r = {10,5};
    Rectangle *p = &r;

    cout<<r.l<<" "<<r.b<<endl;

    (*p).l=15;  

    cout<<r.l<<" "<<r.b<<endl;

    p ->b= 10;          // arrow us used for pointer to point at data members of object

    cout<<r.l<<" "<<r.b<<endl;

    // Dynamically alloacating pointer of structure
    Rectangle *p2 = new(Rectangle);

    p2->l=25;

    p2 ->b=20;

    cout<<p2->l<<" "<<p2->b<<endl;

    return 0;
}