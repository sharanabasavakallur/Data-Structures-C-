
//1.finding prime numbers <= given no.
//(naive method)
/*#include<iostream>
using namespace std;

bool isPrime(int n)
{
    for(int i=2;i*i<=n;i++){
        //i*i becoz n has pair of devisors and small divisor among them is always <= sqroot(n)
        //let n=20 pair of devisors>=2 are (2,10) & (4,5) and 2,4 are <= sqroot(20)
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    cout<<"enter value of n:";
    cin>>n;
    if(n<2)
    cout<<"no prime numbers..\n";
    for(int i=2;i<=n;i++){
        if(isPrime(i))
        cout<<i<<" ";
    }
}*/


//(sieve of erotosthones method)
/*#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    if(n<2)
    cout<<"no prime numbers..\n";
    //making a vector of size n+1 and marking all no. as prime
    vector<bool> isPrime(n+1,true);

    for(int i=2;i*i<=n;i++){
        //if i is prime then make all multiples of i as non-prime
        if(isPrime[i]){

            for(int j=2*i;j<=n;j=j+i){
                //to optimize make j=i*i becoz <=i*i already marked
                isPrime[j]=false;
            }
        }
    }
    cout<<endl<<endl;
    for(int i=2;i<=n;i++){
        if(isPrime[i])
        cout<<i<<" ";
    }
}*/

//****************************************************************************
//2.GCD of two numbers
// #include<iostream>
// using namespace std;
/*int gcd(int a,int b)
{
    //base case
    if(a==0 || b==0)
    return 0;

    while(a!=b){
        if(a>b)
        a=a-b;

        else
        b=b-a;

    }//loop breakes when a==b

    return a;//or b
}*/

//or
/*int gcd(int a,int b)
{
    //base case remains same
    if(a==0 || b==0)
    return 0;

    int gcd;
    for(int i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0)
        gcd=i;
    }
    return gcd;
}

int main()
{
    int a,b;
    cout<<"enter two numbers:";
    cin>>a>>b;
    cout<<"GCD("<<a<<","<<b<<")="<<gcd(a,b)<<endl;
}*/

//********************************************************************************
//3.LCM of two numbers
//if gcd is known then lcm=product of two numbers/gcd.
#include<iostream>
using namespace std;

int lcm(int a,int b)
{
    //base case
    if(a==0 || b==0)
    return 0;
    int max=(a>b)?a:b;
    while(1){
        if(max%a==0 && max%b==0)
        return max;
        else 
        max++;
    }
}
int main()
{
    int a,b;
    cout<<"enter two numbers:";
    cin>>a>>b;
    cout<<"LCM("<<a<<","<<b<<")="<<lcm(a,b)<<endl;
}

//***********************************************************************************
//4.fast exponentiation(x^n can be written as (x^(n/2))^2 if n is even
//or (x^(n/2)^2)*x if n is odd)
//given x,n,m do x^n%m
/*#include<iostream>
using namespace std;
int moduloexpo(int x,int n,int m)
{
    int res=1;
    while(n>0){
        if(n&1)//if n is odd
        res=1LL*(res*x%m)%m;//type casting by long long

        x=1LL*(x%m*x%m)%m;
        n=n>>1;//or n=n/2; (right shifting)
    }
    return res;
}
int main()
{
    int x,n,m;
    cout<<"enter values of x,n and m:";
    cin>>x>>n>>m;
    cout<<"ans="<<moduloexpo(x,n,m)<<endl;
}*/