#include <iostream>
#include <stdio.h>

using namespace std;
int add(int a, int b)        // prototye or header of function       
{                           // here a and b are formal parameters
    
     return a + b;

}


int main(){
                // here a and b are actual parameters
    int a= 10;
    int b= 15;

    int c = add(a,b);

    cout << "sum: " << c << endl;
    

    return 0;
}