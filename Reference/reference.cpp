#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main(){
    system("CLS");
    int a= 10;
    int &r= a;

    cout<<"a = "<<a<<endl;
    cout<<"r = "<<r<<endl;

    cout<<"address of a "<<&a<<endl;
    cout<<"address of r "<<&r<<endl;

    r++;

    cout<<"a = "<<a<<endl;

    a++;
    cout<<"a = "<<a<<endl;
  return 0;
}