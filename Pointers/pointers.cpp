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



 int arr[] = {2,4,6,8,10};

 int *s;
 s=arr;

 for(int i=0; i<5; i++){
    cout<<s[i]<<endl;}
    
 return 0;
}