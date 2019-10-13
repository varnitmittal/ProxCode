//simple for loop program
#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"Program to print table of a number.\nEnter the number: \n";
    cin>>num;

    for(int i=1; i<=10; i++){
        cout<<"\n"<<i*num;
    }
    cout<<"\n";
    return 0;
}




/* OUTPUT

Program to print table of a number.
Enter the number: 
7

7
14
21
28
35
42
49
56
63
70

*/