#include<iostream>
using namespace std;
#include<math.h>
#include<limits.h>

/*int main()
{
    //simple calculator

    int a,b;
    char o;
    std::cout<<"enter the two operands:";
    std::cin>>a>>b;
    for(int i=0;i++<5;){
    std::cout<<"enter the operation you want to perform:";
    std::cin>>o;
    
    
    switch(o){
        case '+':std::cout<<"a+b="<<a+b<<"\n";
                 break;

        case '-':std::cout<<"a-b="<<a-b<<endl;
                 break;

        case '*':std::cout<<"a*b="<<a*b<<endl;
                 break;

        case '/':std::cout<<"a/b="<<a/b<<endl;
                 break;

        case '%':std::cout<<"a%b="<<a%b<<endl;
                 break;  

        default:std::cout<<"invalid operator"<<endl;       
    }
}

}
*/

//********************************************************

//use functions to reduce bulkyness and improve redablility

//finding nCr value 
/*
int facto(int n){
    int fact=1;
    for(int i=2;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}

int nCr(int n,int r)
{
    int num=facto(n);
    int denom=facto(r) * facto(n-r);
     
    return(num/denom);
}

int main()
{
    int n,r;
    cout<<"enter the values of n,r:";
    cin>>n>>r;
    int ans=nCr(n,r);
    cout<<n<<"C"<<r<<"="<<ans<<endl;
}
*/

//**********************************************************
//to find whether a number is prime or not
/*
bool isPrime(int n){//here n is 'copy' of n of main() function
    for(int i=2;i<n;i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}

int main(){
    int n;
    cout<<"enter the number n:";
    cin>>n;
    cout<<isPrime(n)<<endl;
}
*/


//ARRAYS..
//An array is a series of elements of the same type placed in contiguous memory locations that can be individually referenced by adding an index to a unique identifier.

// Initializing arrays
// By default, regular arrays of local scope (for example, those declared within a function) are left uninitialized. This means that none of its elements are set to any particular value; their contents are undetermined at the point the array is declared.

// But the elements in an array can be explicitly initialized to specific values when it is declared, by enclosing those initial values in braces {}. For example:
// int foo [5] = { 16, 2, 77, 40, 12071 };

// This statement declares an array that can be represented like this:


// The number of values between braces {} shall not be greater than the number of elements in the array. For example, in the example above, foo was declared having 5 elements (as specified by the number enclosed in square brackets, []), and the braces {} contained exactly 5 values, one for each element. If declared with less, the remaining elements are set to their default values (which for fundamental types, means they are filled with zeroes). For example:
// int bar [5] = { 10, 20, 30 };
// Will create an array like this:
//bar[0]=10,bar[1]=20,bar[3]=30,bar[4]=0,bar[5]=0

// The initializer can even have no values, just the braces:
// int baz [5] = { };
//baz[0]=0,baz[1]=0,baz[2]=0,baz[3]=0,baz[4]=0
// This creates an array of five int values, each initialized with a value of zero:


// Finally, the evolution of C++ has led to the adoption of universal initialization also for arrays. Therefore, there is no longer need for the equal sign between the declaration and the initializer. Both these statements are equivalent:

// int foo[] = { 10, 20, 30 };
// int foo[] { 10, 20, 30 };

// Static arrays, and those declared directly in a namespace (outside any function), are always initialized. If no explicit initializer is specified, all the elements are default-initialized (with zeroes, for fundamental types).


/*int main(){
    //initializing array of int type
    int a[5]{1,2,3};
    
    //displaying
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;
    int b[6]{};
    for(int i=0;i<6;i++){
        cout<<b[i]<<" ";
    }

    cout<<endl;
    char c[5]{'a','z'};
    for(int i=0;i<6;i++){
        cout<<c[i]<<" ";
    }

}*/

//*************************************************

//finding max and min element,sum of elts,searching of a key and reversing of array

/*int getMax(int arr[],int n){
    int maxi=arr[0];
    for(int i=1;i<n;i++){
        // if(arr[i]>maxi)
        // maxi=arr[i];
        maxi=max(arr[i],maxi); //inbuilt function
    }
    return maxi;
}

int getMin(int arr[],int n){//address is passed as parameter so any updation in arr[] then it'll reflect in main() also.. 
    int mini=arr[0];
    for(int i=1;i<n;i++){
        // if(arr[i]<mini)
        // mini=arr[i];
        mini=min(arr[i],mini);//inbuilt function
    }
    return mini;
}

int getSum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

bool linearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(key==arr[i])
        return 1;
    }
    return 0;
}

void reverse(int arr[],int n){
    int start=0,end=n-1;

    while(start<end){
        swap(arr[start++],arr[end--]); //inbuilt function
    }
}

int main(){
    int a[20],n;
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"enter the "<<n<<" array elements:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"maximum of array :"<<getMax(a,n)<<endl; //a is passed as parameter (a is address of first elt of array)

    cout<<"Minimum of array :"<<getMin(a,n)<<endl;

    cout<<"Sum of array elts :"<<getSum(a,n)<<endl;

    int k;
    cout<<"enter the key elt to be searched:";
    cin>>k;

    cout<<"is key present in array:"<<linearSearch(a,n,k)<<endl;

    cout<<"After reversing..."<<endl;
    reverse(a,n);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
*/