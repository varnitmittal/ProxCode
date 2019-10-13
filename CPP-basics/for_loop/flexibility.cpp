//see value.cpp before reading this code
//this program demostarates flexibility in for loop syntax
#include <iostream>
using namespace std;

int main(){
    int i=7;              //initialization
    for(; i>0 ;){               //condition
        cout<<"Value of i is: "<<i<<"\n";
        i--;                      //updation
    }
   
    return 0;
}



/* OUTPUT

Value of i is: 7
Value of i is: 6
Value of i is: 5
Value of i is: 4
Value of i is: 3
Value of i is: 2
Value of i is: 1

*/