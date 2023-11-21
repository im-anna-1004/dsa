#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
   
   cout<<"//Part 1/////////////////////////////////////////////////////\n"<<endl;
 int a = 10;

 int *p;

 p = &a;

 cout<<"value in variable "<<a<<endl;

 cout<<"after using pointer "<< *p <<endl;

 cout<<"value in pointer "<< p <<endl;

cout<<"\n//Part 2/////////////////////////////////////////////////////\n"<<endl;
 int arr[] = {2,4,6,8,10};

 int *s;
 s=arr;

 for(int i=0; i<5; i++){
    cout<<s[i]<<endl;}



 cout<<"\n//Part 3/////////////////////////////////////////////////////\n"<<endl;

   int *p1;

   // p= (int *)malloc(5 * sizeof(int));
   //c method

   // c++ method 

   p1 = new int[5];

   p1[0]=10; p1[1]= 20; p1[2]= 30; p1[3]= 31; p1[4]= 44;


   for(int i=0; i<5; i++){
    cout<<p1[i]<<endl;}

   cout<<sizeof(p1)<<endl;
   cout<<sizeof(p)<<endl;
 return 0;
}