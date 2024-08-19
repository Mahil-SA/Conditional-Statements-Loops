# Conditional-Statements-Loops
This repository contains experiments 5,6 which are related to the __conditional statements__ in C++.

# If-Else & Switchcase Statements
# EXPERIMENT 6 (Program 1):
## Aim: 
To study and implement C++ decision making statements (Loops)
## Theory: 
In C++, loops are used to execute a block of code repeatedly.

1. *for* loop: Ideal for iterating a known number of times. It includes initialization, condition, and increment/decrement in a single line.
2. Nested loop: A nested loop is simply a loop inside another loop.
3. Nested *for* loop: A for loop inside another for loop, often used for multidimensional data like matrices. Each inner loop completes all its iterations for every single iteration of the outer loop.
4. *while* loop: Executes a block of code repeatedly as long as the specified condition is true. The condition is checked before each iteration.
5. *do-while* loop: Similar to while, but the condition is checked after each iteration, ensuring the loop runs at least once.

These loops provide flexibility in controlling the flow of a program based on the needs of the task at hand.

~~~
CODE:

//Program 1 (For loop)
#include<iostream>
using namespace std;
int main() {
    int i;
    for(i=0;i<10;i++){
        cout<<"Hello world("<<i+1<<")"<<endl;
    }
}

//Program 2 (For loop to print sum)
#include<iostream>
using namespace std;
int main(){
    int sum=0, i, num;
    cout<<"enter the numbers for sum: ";
    
    cin>> num;
    for(i=1;i<=num;i++)
    {
         
        sum=sum+i;
          
    }
    cout<<"sum of first "<<num<<"natural numbers is "<<sum;
}

//Program 3 (For  loop)
#include<iostream>
using namespace std;
int main(){
    int num, i;
    cout<<"enter the end value";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        cout<<i;
        
    }
}

//Program 4 (Nested-For loop)
 #include<iostream>
using namespace std;
int main(){
    int i, j;
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=4;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
    
//Program 5 (Printing inverted stars pattern)
#include<iostream>
using namespace std;
int main(){
    int i, j,rows=4;
    for(i=0;i<=rows;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}

//Program 6 (Printing star pattern)
#include<iostream>
using namespace std;
int main() 
{
    int i, j, k, rows=8;
    for(i=0;i<rows;i++)
    {
        for(j=rows-1;j>i;j--)
        {
            cout<<" ";
        }
        for(k=0;k<2*i+1;k++)
        {
            cout<<"*";
        }  cout<<endl;
    }
    
}
           
//Program 7 (Printing numbers n numbers)
#include<iostream>
using namespace std;
int main ()
{ int a,i=1;
    cout << "Enter end value: ";
    cin >> a;
    while( i <= a)
    { 
        cout<< " "<<i;
        i++;
    }
    return 0;
}

//Program 8 (Star pattern with numbers)
#include<iostream>
using namespace std;
int main()
{
    int i,j,row,n=1;
    std::cout<<"Enter the number of rows : ";
    std::cin>>row;
    for(i=0;i<row;i++)
    {
        for(j=0;j<i+1;j++)
        {
            cout<<n<<" ";
            n=n+1;
        }
        cout<<endl;
    }
    return 0;
}
~~~
