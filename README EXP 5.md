# Conditional-Statements-Loops
This repository contains experiments 5,6 which are related to the __conditional statements__ in C++.

# If-Else & Switchcase Statements
# EXPERIMENT 5 (Program 1):
## Aim: 
To study and implement C++ decision making statements
## Theory: 
In C++, if-else and switch are control structures used for decision-making.

The *if-else* statement executes a block of code based on whether a condition is true or false. It allows multiple conditions to be checked sequentially, with each block being executed only if its condition is met.
The *switch* statement is used when a variable needs to be compared against several values. It's often more efficient than multiple if-else statements for such cases.
*switch* is ideal for handling a fixed set of possible values, while *if-else* is more flexible for complex conditions.

~~~
CODE:

//Program 1
#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter 3 variables: "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b && a>c)
    {
        cout<<"a is the largest number: "<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<"b is the largest number: "<<endl;
    }
    else if(c>a && c>b)
    {
        cout <<"c is the largest number: "<<endl;
}
    int month;
cout<<"Enter a number between 1 to 12"<< endl;
cin>>month;
switch (month)
{
    case 1:
    cout<<"Jan"<<endl;
    break;

    case 2:
    cout<<"February"<<endl;
    break;

    case 3:
    cout<<"march"<<endl;
    break;
    
    case 4:
    cout<<"April"<<endl;
    break;
    
    case 5:
    cout<<"May"<<endl;
    break;

    case 6:
    cout<<"June"<<endl;
    break;

    case 7:
    cout<<"July"<<endl;
    break;

    case 8:
    cout<<"August"<<endl;
    break;
    
    case 9:
    cout<<"September"<<endl;
    break;

    case 10:
    cout<<"October"<<endl;
    break;

    case 11:
    cout<<"November"<<endl;
    break;

    case 12:
    cout<<"December"<<endl;
    break;

    default:
    cout<<"Invalid input"<<endl;

}
}
~~~
