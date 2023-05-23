/*Recursion is a method in which calls itself directly or indirectly
until a suitable condition is met
we repeatedly call a function within the same function,and it has a base
case and a recursive condtion*/

/*Any function which calls itself is called recursion.
A recursive method solves a problem by calling a copy of itself to work on a 
smaller problem.Each time a function calls itself with a slightly 
simpler version of the original problem. 
This sequence of smaller problems must eventually converge on a base case.*/

/*
We can define the steps of the recursive approach by summarizing the above three steps: 

●Base case: A recursive function must have a terminating condition at which the process will stop calling itself. 
Such a case is known as the base case. In the absence of a base case, it will keep calling itself and get stuck 
in an infinite loop. Soon, the recursion depth* will be exceeded and it will throw an error. 

●Recursive call (Smaller problem): The recursive function will invoke itself on a smaller version of the main problem. 
We need to be careful while writing this step as it is crucial to correctly figure out what your smaller problem is.

●Self-work : Generally, we perform a calculation step in each recursive call. We can achieve this calculation 
step before or after the recursive call depending upon the nature of the problem. 

Note*:Recursion uses an in-built stack that storesrecursive calls. 
Hence, the number of recursive calls must be as small as possible to avoid memory-overflow. 
If the number of recursion calls exceeded the maximum permissible amount, 
therecursion depth*will be exceeded. This condition is calledstack overflow.
*/

//1.factorial of a number(notes pg:27)
/*#include<iostream>
using namespace std;

int facto(int n){

    // case case
    if(n==0 || n==1)
        return 1;

    // recursive condition
    return(n * facto(n-1));
}
int main()
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    if(n<0)
        cout<<"please, enter number>=0.";
    cout<<"factorial of "<<n<<" is:"<<facto(n)<<endl;
}
*/

//******************************************************************************
//2.power of 2
/*#include<iostream>
using namespace std;

double power2(int n){

    // case case
    if(n==0)
        return 1;

    // recursive condition
    return(2 * power2(n-1));
}
int main()
{
    int n;
    cout<<"enter the exponent of 2:";
    cin>>n;
    if(n<0){
        n=n*-1; //making n positive
        cout<<"2 raised to the power "<<n<<" is:"<<(1/power2(n))<<endl;
    }
    else
    cout<<"factorial of "<<n<<" is:"<<power2(n)<<endl;
}
*/

//*******************************************************************************
//3.printing 1 to n and reversly..

/*#include<iostream>
using namespace std;

void printing(int n){

    // case case
    if(n==0)
        return;

    // cout<<n<<" "; //to print in reverse order
    // recursive condition
    printing(n-1);

    cout<<n<<" "; //to print in order
}
int main()
{
    int n;
    cout<<"enter a positive integer:";
    cin>>n;

    cout<<"printing:"<<endl;
    printing(n);
}*/

//*******************************************************************************
//4.nth fibonacci number where 0th and 1st fibonacci numbers are 0,1 respectively
//fibonacci series..0,1,1,2,3,5,8,13,21,34...
//a number is sum of provious two numbers
//notes pg:29
/*
                  fib(5)
             '3'/        \'2'
               /          \
           fib(4)         fib(3)
       '2'/      \'1' '1'/      \'1'  
         /        \     /        \ 
     fib(3)     fib(2) fib(2)    fib(1) 
     /    \  '1'/   \'0'
 '1'/   '1'\   /     \ 
   /        \ fib(1) fib(0) 
fib(2)     fib(1)
*/
/*#include<iostream>
using namespace std;

int fib(int n)
{
    //base case(there are two if n=0 return 0; and if n=1 return 1)
    if(n<=1)
    return n;

    //recursive condition
    return(fib(n-1)+fib(n-2));
}
int main()
{
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    cout<<n<<"th fibonacci number is:"<<fib(n)<<endl;
}
*/

//?????????????????????????(to print first n fibonacci series)
/*#include<iostream>
using namespace std;

void printfib(int a,int b,int n)
{
    //base case
    if(n==0)
    return;

    int c=a+b;
    cout<<c<<endl;

    //recursive relation
    printfib(b,c,n-1);
}

int main()
{
    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;

    cout<<"first "<<n<<" fibonacci numbers are:\n";
    cout<<"0"<<endl;//first fibonacci number
    cout<<"1"<<endl;//second fibonacci number
    printfib(0,1,n-2);//n-2 becoz first 2 already printed
    return 0;
}*/

//**********************************************************************************
//5.count ways to reach the nth stairs(codestudio)
/*
Problem Statement	
You have been given a number of stairs. Initially, you are at the Oth stair, and you need	
to reach the Nth stair. Each time you can either climb one step or two steps. You are	
supposed to return the number of distinct ways in which you can climb from the Oth	
step to Nth step.	

Example:	
N=3
We can climb one step at a time i.e. ((0, 1) , (1, 2), (2,3)} or we can	
climb the first two-step and then one step i.e. {(0,2), (1, 3)} or we can	
climb first one step and then two step i.e. {(0,1), (1,3)).	

Sample Input 1 :	
2	
3	
Sample Output 1 :	
2	
3	
Explanation Of Sample Input 1 :	
In the first test case, there are only two ways to climb the stairs,	
i.e. {1,1} and {2}.	
In the second test case, there are three ways to climb the stairs i.e.	
{1,1,1} , {1,2) and (2,1).	

Sample Input 2 :	
4	
5	
Sample Output 2 :	
5	
8	
Explanation Of Sample Input 2 :	
In the first test case, there are five ways to climb the stairs i.e.	
(1, 1, 1, 1) , (1, 1, 2) , (2,1,1) , (1,2,1), (2, 2).	
In the second test case, there are eight ways to climb the stairs i.e.	
(1,1,1,1,1) , (1,1,1,2) , (1,1,2,1), (1, 2, 1,1), (2, 1, 1), (2, 2, 1), (2, 1, 2)	
and (2,2,1).	
*/

/*
Approach: We can easily find the recursive nature in the above problem. 
The person can reach nth stair from either (n-1)th stair or from (n-2)th 
stair. Hence, for each stair n, we try to find out the number of ways to 
reach n-1th stair and n-2th stair and add them to give the answer for the 
nth stair. Therefore the expression for such an approach comes out to be : 
ways(n) = ways(n-1) + ways(n-2)
The above expression is actually the expression for Fibonacci numbers, but there is one thing to notice, the value of ways(n) is equal to fibonacci(n+1). 

ways(1) = fib(2) = 1
ways(2) = fib(3) = 2
ways(3) = fib(4) = 3
*/
/*
#include<iostream>
using namespace std;
int countWays(int n)
{
    //base cases
    if(n<=1)
    return n;//if n=1 there is only one way(1 step) ,otherwise 0
    if(n==2)
    return 2;//if n=2 there are two ways (1step,1step) and (2 steps)

    //recursive relation
    //2 ways to reach nth stair by (n-1)th stair or (n-2)th stair
    return(countWays(n-1)+countWays(n-2)); 
    
}
int main()
{
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    cout<<"no. of ways to reach "<<n<<" th stair:"<<countWays(n)<<endl;
    
}
*/

//*********************************************************************************
//6.number to words
/*#include<iostream>
using namespace std;

void sayDigit(int n,string arr[])
{
    //base case
    if(n==0)
    return;

    //preprocessing
    int digit=n%10;
    n=n/10;
    ///if we print here then unit digit will be printed first but we want it to printed last
    //recursive condition
    sayDigit(n,arr);

    cout<<arr[digit]<<" ";//we're printing after recursive condition(as to print right-to-left)

}
int main()
{
    string arr[10]{"zero","one","two","three","four","five","six","seven","eight","nine"};

    int n;
    cout<<"enter a number:";
    cin>>n;
    cout<<endl;
    sayDigit(n,arr);
    cout<<endl;
}
*/

//**************************************************************************************
//7.check whether array is sorted
/*#include<iostream>
using namespace std;

bool isSorted(int* arr,int size){
    //base case
    if(size==0 || size==1)
    return true;//we campared till last elt

    //recursive condtion
    if(arr[0]>arr[1])
    return false;
    else
    return(isSorted(arr+1,size-1));

}
int main()
{
    int arr[]{1,2,3,5,5,4};
    if(isSorted(arr,sizeof(arr)/sizeof(arr[0])))
    cout<<"Sorted"<<endl;
    else
    cout<<"Not Sorted"<<endl;
}
*/

//*****************************************************************************
//8.sum of array elts 
/*#include<iostream>
using namespace std;
int getSum(int* arr,int size)
{
    //base cases
    if(size==0)//if no elt
    return 0;
    if(size==1)//if 1 elt
    return arr[0];//return that elt as sum

    //recursive condition
    return(arr[0]+getSum(arr+1,size-1));
}
int main()
{
    int arr[]{1,2,3,4,5,6};
    cout<<"Sum:"<<getSum(arr,sizeof(arr)/sizeof(arr[0]));
}*/

//**********************************************************************************
//9.LinearSearch in array
/*#include<iostream>
using namespace std;

bool linearSearch(int* arr,int size,int k){
    //base case
    if(size==0)//not found till last
    return false;


    //recursive condtion
    if(arr[0]==k)
    return true;//elt found
    else
    return(linearSearch(arr+1,size-1,k));

}
int main()
{
    int arr[]{1,2,3,5,5,4};
    int k=6;
    if(linearSearch(arr,sizeof(arr)/sizeof(arr[0]),k))
    cout<<"key found"<<endl;
    else
    cout<<"key not found"<<endl;
}
*/

//******************************************************************************
//10.binary search
/*#include<iostream>
using namespace std;
bool binarySearch(int* arr,int start,int end,int k)
{
    //base case
    if(start>end)
    return false;

    int mid=start+(end-start)/2;

    //recursive relation
    if(arr[mid]==k)
    return true;

    if(k<arr[mid])
    return(binarySearch(arr,start,mid-1,k));//search space shifted to leftpart
    else
    return(binarySearch(arr,mid+1,end,k));//search space shifted to right part
}
int main()
{
    int arr[]{1,2,3,3,5,6,9,10};
    int s=0,e=sizeof(arr)/sizeof(arr[0])-1,k=0;
    if(binarySearch(arr,s,e,k))
    cout<<"found"<<endl;
    else
    cout<<"not found"<<endl;
}
*/