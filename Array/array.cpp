#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    
    int n;
    cout << "Enter size:";
    cin >> n;
    int A[n] ;

    for(int i = 0; i < n; i++){
        cin>> A[i];
    }
    cout<<"Array is "<<endl;
    for(int i:A){

        cout << i <<endl;
    }
    return 0;
}