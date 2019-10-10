#include <iostream> 
using namespace std; 
  
int main(){ 
    int a=10, b=20, temp;
    cout <<"Before swaping, value of a is: "<<a<<" and b is: "<<b<<"\n";

    temp = a;
    a = b;
    b = temp;

    cout <<"After swaping, value of a is: "<<a<<" and b is: "<<b<<"\n";
    return 0; 
}



/* OUTPUT

Before swaping, value of a is: 10 and b is: 20
After swaping, value of a is: 20 and b is: 10

*/