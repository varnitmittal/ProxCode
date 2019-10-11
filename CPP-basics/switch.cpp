//Program to demonstrate the use of switch-case
#include<iostream>
using namespace std;

int main(){
    const float pi = 3.14;     //const here makes pi "read-only". value of pi can't be changed now.
    int choice, r, s;          //r for radius, s for side

    cout<<"Enter your choice:\n1. Area of Circle\n2. Area of Square\n3. Exit\n\n";
    cin>>choice;

    switch(choice){
        case 1:{
            cout<<"\nEnter radius of circle:\n";
            cin>>r;
            cout<<"Area of circle is:\t"<<pi*r*r<<"\n";
            break;
        }         
        
        case 2:{
            cout<<"\nEnter side of square:\n";
            cin>>s;
            cout<<"Area of square is:\t"<<s*s<<"\n";
            break;
        }

        case 3:{
            exit(0);
        }

        default:{
            cout<<"\nInvalid Choice!\n";
        }
    }

    return 0;
}

//end of program




/* OUTPUT

Enter your choice:
1. Area of Circle
2. Area of Square
3. Exit

1

Enter radius of circle:
8
Area of circle is:	200.96

*/



/* OUTPUT

Enter your choice:
1. Area of Circle
2. Area of Square
3. Exit

2

Enter side of square:
10
Area of square is:	100

*/



/* OUTPUT

Enter your choice:
1. Area of Circle
2. Area of Square
3. Exit

6

Invalid Choice!

*/