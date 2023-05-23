/*A pointer is a variable whose value is the address of another variable. 
Like any variable or constant, you must declare a pointer before you can work with it. 
The general form of a pointer variable declaration is −
type *var-name;

Here, type is the pointer's base type; it must be a valid C++ type and var-name is the name of 
the pointer variable. The asterisk you used to declare a pointer is the same asterisk that you 
use for multiplication. However, in this statement the asterisk is being used to designate a 
variable as a pointer. Following are the valid pointer declaration −

int    *ip;    // pointer to an integer
double *dp;    // pointer to a double
float  *fp;    // pointer to a float
char   *ch     // pointer to character

The actual data type of the value of all pointers, whether integer, float, character, or otherwise, is the same, 
a long hexadecimal number that represents a memory address. The only difference between pointers of different data types 
is the data type of the variable or constant that the pointer points to.*/

// #include<iostream>
// using namespace std;

// int main()
// {
    /*
    int num=5;
    cout<<num<<endl;
    //addressOf operator-&
    cout<<"address of num:"<<&num<<endl;
    //we must initialize a pointer and should not leave just declared to avoid pointing 
    //any unknown address
    int* p=&num;//p is pointer pointing to a variable of type of integer
    cout<<"address of num:"<<p<<endl;

    //dereferencing operator-*
    cout<<"value of num:"<<*p<<endl;

    double d=23.44;
    double* p2=&d;//p2 is pointer pointing to a variable of type double

    cout<<"size of int is:"<<sizeof(num)<<endl;
    cout<<"size of pointer is :"<<sizeof(p)<<endl;
    cout<<"size of pointer p2 is:"<<sizeof(p2)<<endl;
    //size of pointer is same i.e 4 irrespective of its type becoz it's storing adress
    //which will be integer type.
    */


//NULL Pointers
/*It is always a good practice to assign the pointer NULL to a pointer variable 
in case you do not have exact address to be assigned. 
This is done at the time of variable declaration. 
A pointer that is assigned NULL is called a null pointer.

The NULL pointer is a constant with a value of zero defined in several standard libraries, including iostream.

the memory address 0 has special significance; it signals that the pointer is not intended to point to an accessible memory location. 
But by convention, if a pointer contains the null (zero) value, it is assumed to point to nothing.

*/
/*int *ptr;//contains garbage value
int *ptr=NULL;
int *ptr=0;//same as above
cout<<"value of pointer ptr:"<<ptr<<endl;
*/
	
/*void * ptr;	
int i = 10;	
// assign int address to void	
ptr = &i;	
cout<<"Address of variable i "<<&i<< endl;	
cout<<"Address where the void pointer is pointing "<<ptr<<endl;	
*/


//Wild Pointers:	
/*A pointer behaves like a wild pointer when declared but not initialized. So, they point to any random memory	
location.	
Example:	
int *ptr; //wild pointer	
*ptr = 5;	
Note: If a pointer p points to a known variable, it's not a wild pointer.	
Example:	
int * p; // wild pointer 
int a = 10;	
p = & a; // p is not a wild pointer now	
* p = 12; // This is fine. Value of a is changed 	
In the above program, p is a wild pointer till this points to a.	
*/


//Void Pointers:	
/*A void pointer is a generic pointer; it has no associated type with it. A void pointer can hold an address of any	
type and can be typecasted to any type. Thus we can use the void pointer to store the address of any variable.	
Void pointer is declared by:	
void *ptr;	
Note:	
1. void pointers cannot be dereferenced. It can, however, be done using typecasting the void pointer.	
2. Pointer arithmetic is not possible on pointers of void due to lack of concrete value and size.	
*/


//POINTER ARITHMETICS
/*pointer is an address which is a numeric value; therefore, you can perform arithmetic operations on a pointer just as you can a numeric value. 
There are four arithmetic operators that can be used on pointers: ++, --, +, and -
To understand pointer arithmetic, let us consider that ptr is an integer pointer which points to the address 1000. Assuming 32-bit integers, 
let us perform the following arithmetic operation on the pointer −
ptr++
the ptr will point to the location 1004 because each time ptr is incremented, it will point to the next integer. This operation will move the pointer to next memory location without impacting actual value at the memory location. 
If ptr points to a character whose address is 1000, then above operation will point to the location 1001 because next character will be available at 1001.

char always has a size of 1 byte, short is generally larger than that, and int and long are even larger; 
the exact size of these depends on the system. For example, let's imagine that in a given system, char takes 1 byte, 
short takes 2 bytes, and long takes 4. Suppose now that we define three-pointers: 
char *mychar; 
short *myshort; 
long *mylong; 
and they point to the memory locations 1000, 2000, and 3000, respectively. 
Therefore, if we write: 
++mychar; 
++myshort; 
++mylong; 
mychar, as one would expect, would contain the value 1001. But not so obviously, 
myshort would contain the value 2002, and mylong would contain 3004, even though they have each been incremented only once. 
The reason is that, when adding one to a pointer, the pointer is made to point to the following element of the same type, and, 
therefore, the size in bytes of the type it points to is added to the pointer.
*/

/*int a=5;
int* p=&a;
cout<<"address before:"<<p<<endl;
p++;
cout<<"address after :"<<p<<endl;
cout<<"a value before:"<<a<<endl;
(*p)++;
cout<<"a value after :"<<a<<endl;
//copying a pointer
int* q=p;
cout<<"a value here:"<<*q<<endl;
cout<<endl<<endl;

int b[3]={10,20,30};
int *p1;

p1=&b[2]; //assigning address of last elt of array
for(int i=2;i>=0;i--){
    cout<<"address of a["<<i<<"] : ";
    cout<<p1<<endl;
    cout<<"value of a["<<i<<"] : ";
    cout<<*p1<<endl;
    p1--;

}*/

// }


/*Dangling Pointers:	
A dangling pointer is a pointer pointing to a memory location that has been freed (or deleted. There are three	
different ways where Pointer acts as a dangling pointer.*/	

// a)Function Call	
// The pointer pointing to the local variable becomes dangling when the local variable is not static.	
// Example:	
/*#include<iostream>	
using namespace std;	
int * fun() {	
int x = 10;	
return &x;	
}
int main() {	
int * p = fun();	
//p points to something which is not	
//valid anymore	
cout<<*p;	
return 0;
}*/

// b) Deallocation of memory	
// Deallocating a memory pointed by a pointer causes a dangling pointer.	
// Example:	
/*#include<iostream>	
using namespace std;	
int main() {	
//dynamic memory allocation.	
int * p = (int * ) malloc(sizeof (int));	
//after calling free() p becomes a dangling pointer	
free(p);	
//now p no more a dangling pointer.	
p = NULL;	
return 0;	
}*/

// c) Variable goes out of scope	
// When a pointer goes out of scope where it is valid, then it becomes a dangling pointer.	
// Example:	
/*#include<iostream>	
using namespace std;	
int main(){	
int * ptr;	
//..... //any code statements	
int ch;	
ptr = & ch;	
// Here ptr is dangling pointer
return 0;	
}*/

//*************************************************************************
//Arrays and Pointers
// #include<iostream>
// using namespace std;

// int main()
// {
    /*int arr[10]{2,9,5,8};
    //address of first elt is given by array variable name arr or &arr[0]
    cout<<"address of first elt of array:"<<arr<<endl;
    cout<<"address of first memory block:"<<&arr[0]<<endl;

    cout<<"value at first memory block:"<<*arr<<endl;
    cout<<"value of first elt+1 :"<<*arr+1<<endl;

    //wkt arr+1 will be pointing to next elt of array
    cout<<"value of second elt of array:"<<*(arr+1)<<endl;
    cout<<"value of third elt of array:"<<*(arr+2)<<endl;

    //arr[i]=*(arr+i) is same as i[arr]=*(i+arr).
    int i=3;
    cout<<"value of third elt of array:"<<arr[i]<<endl;
    cout<<"value of third elt of array:"<<i[arr]<<endl;
    */

   /*int temp[10]{};
   //size of array 4*10=40
   cout<<"size of temp:"<<sizeof(temp)<<endl;
   int *p=&temp[0];
   //size of p i.e address of each elt of array
   cout<<"size of pointer:"<<sizeof(p)<<endl;
   //size of each elt of array pointed by pointer p
   cout<<"size of elt of array:"<<sizeof(*p)<<endl;

    //?
   cout<<endl;
   cout<<&temp[0]<<endl;
   cout<<&temp<<endl;
   cout<<temp<<endl;
   //above three statements prints same
   cout<<endl<<p<<endl;
   cout<<*p<<endl;
   cout<<&p<<endl;//prints address of pointer
   cout<<&(*p)<<endl;//prints address of first elt of array 
   */


  //Character array
  /*int arr[6]{};
  char ch[4]{'a','b','c'};

  cout<<"'arr' will print:"<<arr<<endl;//print address of first elt
  cout<<"'ch' will print:"<<ch<<endl;//prints full content of array

  char *p=&ch[0];
  cout<<p<<endl;//prints whole string

  char a='s';
  char *p1=&a;
  cout<<p1<<endl;//go on printing untill it finds '\0'
   */

// }

//************************************************************************************
//Pointes and Functions

/*#include<iostream>
using namespace std;

void update(int *p)//pass by reference
{
    p=p+1;
    *p=*p+1;
    cout<<"value of p in update:"<<p<<endl;
    cout<<"value of *p in update:"<<*p<<endl;
}

int main()
{
    int val=6;
    int *p=&val;

    cout<<"before passing to update, p:"<<p<<endl;
    cout<<"before passing to update, val:"<<val<<endl;
    update(p);//address of val i.e p is passed
    //it will not change becoz in update function a copy of address is made
    //so any updation to p then it'll reflect outside of that function
    cout<<"after passing to update, p:"<<p<<endl;
    //val will change becoz address of val i.e p is passed so any updation
    //in *p then it will reflect everywhere
    cout<<"after passing to update, val:"<<val<<endl;
}*/

/*#include<iostream>
using namespace std;
int sumArr(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main()
{
    int arr[]{10,20,30,40,50};
    int sum=sumArr(arr,sizeof(arr)/sizeof(arr[0]));//arr means address of first elt is passed
    int sum1=sumArr(arr+2,sizeof(arr)/sizeof(arr[0])-2);//address of 3rd elt is passed
    cout<<"sum:"<<sum<<endl;
    cout<<"sum1:"<<sum1<<endl;
}*/

//*********************************************************************************
//Double Pointers

/*#include<iostream>
using namespace std;
int main(){
int i=5;
int *p=&i;
int **dp=&p;

cout<<"address of i:"<<p<<endl;
cout<<"address of i:"<<*dp<<endl;

cout<<"address of pointer p:"<<&p<<endl;
cout<<"address of pointer p:"<<dp<<" or "<<&(*dp)<<endl;

cout<<"value of i:"<<*p<<endl;
cout<<"value of i:"<<**dp<<endl;

return 0;
}*/

//*************************************************************************************
//MCQ's

// #include<iostream>
// using namespace std;

// int main()
// {
    /*int first=8;
    int second=18;
    int *ptr=&second;
    *ptr=9;
    cout<<first<<" "<<second<<endl;
    */

   /*int first=6;
   int *p=&first;
   int *q=p;
   (*q)++;
   cout<<first<<endl;
   */

  /*int first=8;
  int *p=&first;
  cout<<(*p)++<<" ";
  cout<<first<<endl;
  */

   /*int first=8;
   int second=11;
   int *third=&second;
   first=*third;
   *third=*third+1;
   cout<<first<<" "<<second<<endl;
   */

   /*float f=12.5;
   float p=21.5;
   float* ptr=&f;

   (*ptr)++;
   *ptr=p;
   cout<<*ptr<<" "<<f<<" "<<p<<endl;
   */

   /*int arr[4]{11,22,33};
   int *p=arr;
   cout<<p[2]<<endl; //p[2]=*(p+2).
   */
  
   /*char arr[]="abcde";
   char *p=&arr[0];
   p++;
   cout<<p<<endl;//prints from second char
   */

   /*int first=10;
   int *p=&first;
   int **q=&p;
   int second=(**q)++ +9;
   cout<<first<<" "<<second<<endl;
   */

   /*int first=100;
   int *p=&first;
   int **q=&p;
   int second=++(**q);
   int *r=*q;
   ++(*r);
   cout<<first<<" "<<second<<endl;
   */

// }

//**********************************************************************************
//Reference Variables,Static vs Dynamic 
/*#include<iostream>
using namespace std;

void update(int& n){//pass by reference
    n++;
}
//returning reference varible in a function is a bad practice..becoz 
//variable used in a function are dead after completion of function
int main()
{
    int i=3;
    //create a reference variable
    int& j=i;
    //same mem.location having different names i,j

    cout<<"i:"<<i<<endl;
    i++;
    cout<<"j:"<<j<<endl;
    cout<<"i:"<<i<<endl;
    j++;
    cout<<"i: "<<i<<endl;

    cout<<endl<<endl;
    cout<<"before passing i:"<<i<<endl;
    update(i);
    cout<<"after passing i:"<<i<<endl;
}*/

//in arrays considering size of array at runtime is bad practice..
//int n; cin>>n; int arr[n]; X
//we should give size at compiletime only..
//int arr[100];
//if you want to create array of variable size then..
//int n; cin>>n; int* arr=new int[n];(rhs part will be created in heap memory
// and lhs part created in stack memory)
//to deleter memory of array in heap :delete []arr;

//to create 2d array dont use int arr[n][m] instead use:
//int n; cin>>n; int** arr=new int*[n];

#include<iostream>
using namespace std;

int main()
{
    int row,col;
    cout<<"enter no. of rows and cols:";
    cin>>row>>col;

    //creating 2d array dynamically
    int** arr=new int*[row];
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }

    //taking input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
            cin>>arr[i][j];
    }

    //printing
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //becoz it's heap memory we should free memory manually
    for(int i=0;i<row;i++)
        delete []arr[i];

    delete []arr;

}