#include <iostream>
#include<math.h>
#include<limits.h>
using namespace std;

int main()
{

    /*int a,b;
    cout<<"enter values of a & b:";
    cin>>a>>b;
    cout<<"a&b="<<(a&b)<<endl;

    cout<<"a|b="<<(a|b)<<endl;

    cout<<"~b="<<~b<<endl;

    cout<<"~a="<<~a<<endl;

    cout<<"a^b="<<(a^b)<<endl;
    */

    // SHIFTING..
    //(right shift)
    // cout << (17 >> 1) << endl; // right shift means divide 17>>1 ==> (17/2^1)=8
    // cout << (17 >> 2) << endl; //  "     "      "    "    17>>2 ==> (17/2^2)=4
    // //(left shift)
    // cout << (20 << 1) << endl; // left shift means multiply 20<<1 ==> (20*2^1)=40
    // cout << (20 << 2) << endl; // "     "     "       "    20<<2 ==> (20*2^2)=80

    //post increment
    // int i=7;
    // cout<<++i<<endl; //first increment i and then print
    // cout<<i--<<endl; //first print i and then decrement i
    // cout<<i<<endl;


    //FOR loop

    //sum of first n numbers
    // int n,sum=0;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     sum+=i;
    // }
    // cout<<"sum of first "<<n<<" numbers="<<sum<<endl;

    // //fibonacci series
    // int fib1=0,fib2=1;
    // cout<<"first "<<n<<" fibonacci series:"<<endl;
    // cout<<fib1<<" "<<fib2<<" ";

    // for(int i=1;i<=n-2;i++){
    //     int fib3=fib1+fib2;
    //     cout<<fib3<<" ";
    //     fib1=fib2;
    //     fib2=fib3;
    // }
    // cout<<endl;



    //a number is prime or not
    /*
    int n,i;
    cin>>n;
    for(i=2;i<n;i++){
        //if prime ,remainder is zero
        if(n%i==0){
        cout<<"not a prime number"<<endl;
        break;
        }
    }

    if(i==n)
    cout<<"prime number!";
    */

/*
    Scope of Variables in C++
    _________________________________
    In general, the scope is defined as the extent up to which something can be worked with. In programming also the scope of a variable is defined as the extent of the program code within which the variable can be accessed or declared or worked with. There are mainly two types of variable scopes: 
        1.Local Variables
        2.Global Variables
    
    Local Variables
    -----------------------
Variables defined within a function or block are said to be local to those functions.  
Anything between ‘{‘ and ‘}’ is said to inside a block.
Local variables do not exist outside the block in which they are declared, i.e. they can not be accessed or used outside that block.
Declaring local variables: Local variables are declared inside a block.

Global Variables
----------------------------
As the name suggests, Global Variables can be accessed from any part of the program.
They are available through out the life time of a program.
They are declared at the top of the program outside all of the functions or blocks.
Declaring global variables: Global variables are usually declared outside of all of the functions and blocks, at the top of the program. They can be accessed from any portion of the program.


*Usually when two variable with same name are defined then the compiler produces a compile time error. But if the variables are defined in different scopes then the compiler allows it.
*Whenever there is a local variable defined with same name as that of a global variable then the compiler will give precedence to the local variable

How to access a global variable when there is a local variable with same name?

What if we want to do the opposite of above task. What if we want to access global variable when there is a local variable with same name? 
To solve this problem we will need to use the scope resolution operator. Below program explains how to do this with the help of scope resolution operator. 
Example:
#include<iostream>
using namespace std;
  
// Global x 
int x = 0; 
   
int main()
{
  // Local x   
  int x = 10;
  cout << "Value of global x is " << ::x;
  cout<< "\nValue of local x is " << x; 
  return 0;
}
*/

//Problem-1
//Subtract the product and sum of digits of an integer
/*
int n;
cout<<"enter the number\n";
cin>>n;
int prod=1;
int sum=0;

while(n!=0){
    int digit=n%10;
    sum+=digit;
    prod*=digit;
    n=n/10;
}
int res=prod-sum;
cout<<"result="<<res<<endl;
*/

//*****************************************************************

//Problem-2
//Number of 1 bits(HammingWeight)
/*  
    int n;
    cout << "enter the number" << endl;
    cin >> n;

    int count = 0;
    while (n != 0)
    {
        if (n & 1) // compares last digit with 1 bitwise
            count++;

        n = n >> 1; // keep on right shifting untill it becomes 0
    }
    cout << "no. of 1's=" << count << endl;
*/

//*********************************************************************

//Problem-3
//convert decimal to binary

// int n;
// cout<<"enter the number\n";
// cin>>n;
/*
int i=0,ans=0;
while(n!=0){
    int bit=n&1; //extract last bit
    cout<<bit<<endl;
    ans=( bit*pow(10,i) )+ans;
    cout<<pow(10,i)<<endl;
    cout<<ans<<endl<<endl;
    n=n>>1; //right shifting by 1 bit eqlt to divided by 2
    i++;
}
cout<<"binary:"<<ans<<endl;*/
 
//or

// int i=0,ans=0;
// while(n!=0){
//     int dig=n%2;
//     ans=pow(10,i)*dig + ans;
//     i++;
//     n=n/2;
// }
// cout<<"binary:"<<ans<<endl;

//or(and executed!!)

// int i=1;
// int bit,ans=0;
// while(n!=0){
//     bit=n%2;
//     n=n/2;
//     ans=ans+(bit*i);
//     i=i*10;
// }
// cout<<"binary:"<<ans<<endl;

//or(executed)

// for(int i=31;i>=0;i--){
//     int k=n>>i;
//     if(k&1)
//     cout<<"1";
//     else
//     cout<<"0";
// }

//*************************************************************
//Problem-4
//binary to decimal

// int n;
// cout<<"enter a binary number"<<endl;
// cin>>n;

/*int ans=0,i=0;

while(n!=0){
    int bit=n%10;
    
    if(bit==1)
    ans=ans+pow(2,i);

    n=n/10;
    i++;
}
cout<<"decimal:"<<ans<<endl;
*/

//***************************************************************
//Problem-5
//Reverse Integer(if the reverse goes out of integer range [-2^31,2^31-1] then return 0)
/*
int x;
cout<<"enter the value of x"<<endl;
cin>>x;
int rev=0,dig;
while(x!=0){
    dig=x%10;
    if((rev>INT_MAX/10) || (rev<INT_MIN/10)) //checking integer range..before calculating rev*10
    {
        cout<<"rev=0"<<endl;
        break;
    }
    rev=rev*10+dig;
    x=x/10;
}
cout<<"rev="<<rev<<endl;
*/

//**************************************************************
//Problem-6
//complement of base-10 integer (ex-5=> 101 its complement is 010 i.e 2)
/*
int n;
cout<<"enter the value of n:";
cin>>n;
int temp=n,mask=0;

if(n==0) //edge case
{
    cout<<"complement=1"<<endl;
    exit(0);
}

while(temp!=0){ //preparing mask value for anding with ~n
    mask=(mask<<1)|1;//left shift and oring 1
    temp=temp>>1; //right shift temp
}
int ans=~n & mask;
cout<<"complement="<<ans<<endl;
*/

//************************************************************
//Problem-7
//Power of two(return true if no. is power of two)

    int n;
    cout << "enter the number n:";
    cin >> n;

/*    for (int i = 0; i <= 30; i++)
    {
        int p = pow(2, i);
        if (n == p)
        {
            cout << "Yes" << endl;
            exit(0);
        }
    }
    cout << "No" << endl;
 */

//or
/*
int ans=1;
for(int i=0;i<=30;i++){
    if(ans==n){
    cout<<"Yes"<<endl;
    exit(0);
    }

    if(ans<INT_MAX/2)//checking integer range..
    ans=ans*2;
}
cout<<"No"<<endl;
*/

//or(optimized)
/*   if(n>0 && !(n&n-1)){
    cout<<"yes"<<endl;
   }
   else
   cout<<"no"<<endl;
*/

//or
int count=0;
while(n!=0){
    if(n&1)
    count++;
    n=n>>1;
}
if(count==1)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;

//**********************************************************



}