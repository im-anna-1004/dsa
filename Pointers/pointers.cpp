#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

 int a = 10;

 int *p;

 p = &a;

 cout<<"value in variable "<<a<<endl;

 cout<<"after using pointer "<< *p <<endl;

 cout<<"value in pointer "<< p <<endl;
    
 return 0;
}