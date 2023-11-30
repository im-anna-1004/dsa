#include <iostream>
#include <stdio.h>

using namespace std;

void func (int A[], int size){

    cout << "Array is = ";
    for(int i = 0; i < size; i++){
        cout << A[i]<<" ";
    }
}

int main(){
    int size;
    cout<<"Enter size = ";
    cin>>size;
    int *A = new int[size];

    for(int i = 0; i < size; i++){
        cin>>A[i];
    }

    func(A, size);
    return 0;
}