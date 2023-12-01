#include <iostream>
#include <stdio.h>

using namespace std;

int * func(int n){
    int *p;

    p = new int[n];

    for(int i=0; i<n; i++){
        p[i]=i+1;
    }
    return p;
}


int main(){
    
    int *A, size=5;
    A = func(size);
    cout<<"Array ";
    for(int i=0; i<size; i++){
    cout<<A[i]<<endl;}
    return 0;
}