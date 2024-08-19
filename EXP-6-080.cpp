//Experiment 6 - To study and implement C++ decision making statements Loops
//Name - Mahil Anthony
//PRN -  23070123080
//Batch -  ENTC B1

//Program 1 (For loop)
#include<iostream>
using namespace std;
int main() {
    int i;
    for(i=0;i<10;i++){
        cout<<"Hello world("<<i+1<<")"<<endl;
    }
}

//Output:
/*
Hello world(1)
Hello world(2)
Hello world(3)
Hello world(4)
Hello world(5)
Hello world(6)
Hello world(7)
Hello world(8)
Hello world(9)
Hello world(10)
*/

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
//Output
/*
enter the numbers for sum: 4
sum of first 4natural numbers is 10
*/

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

//Output
/*
enter the end value7
1234567
*/

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

//Output
/*
*****
*****
*****
*****
*/
    
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

//Output
/*
 * 
 *  * 
 *  *  * 
 *  *  *  * 
 *  *  *  *  * 
*/

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

//Output:
/*
       *
      ***
     *****
    *******
   *********
  ***********
 *************
***************
*/
           
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

//Output
/*
Enter end value: 6
 1 2 3 4 5 6
*/

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

//Output
/*
Enter the number of rows : 5
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
*/
