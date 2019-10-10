#include <iostream>
#include<math.h>   // for pow()
using namespace std;

int main(){
    int num, sum = 0, a, b, c, d;

    cout<<"Enter a three digit number (153, 370, 371 for example): \n";
    cin>>num;

    a = num / 100;    // 1  
    b = num % 100;    // 53      
    c = b / 10;       // 5
    d = b % 10;       // 3

    sum = pow(a,3) + pow(c, 3) + pow(d,3);

//    cout<<"Number is "<<num<<"\n";    
//    cout<<"\nSum is "<<sum<<"\n";

    if(num == sum)
        cout<<"Armstrong Number!!\n";
    else
        cout<<"Not an Armstrong number!\n";

    return 0;
}



/* OUTPUT

Enter a three digit number (153, 370, 371 for example): 
153          
Armstrong Number!!

*/


/* OUTPUT

Enter a three digit number (153, 370, 371 for example): 
157
Not an Armstrong number!

*/