//Program to show use of cin

#include<iostream>
using namespace std;

int main(){
    int age;        //integer type variable
    char gender;    //char type variable
    float perc;     //float for decimal values
    
    cout<<"Enter your age: \n";
    cin>>age;

    cout<<"Enter your gender (M/F): \n";
    cin>>gender;

    cout<<"Enter your percentage (upto 2 decimals): \n";
    cin>>perc;

    cout<<"\n\n\n Your Data-\n";

    cout<<"Age is: "<<age<<"\n";
    cout<<"Gender: "<<gender<<"\n";
    cout<<perc<<"% is your average percentage\n";
    
    return 0;
}

//end of program




/* OUTPUT

Enter your age: 
19
Enter your gender (M/F): 
F
Enter your percentage (upto 2 decimals): 
82.37



 Your Data-
Age is: 19
Gender: F
82.37% is your average percentage

*/