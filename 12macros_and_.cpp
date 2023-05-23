//Macros:it's is piece of code that is replaced by macro value
//wherever PI is used in program it's replaced by 3.14
//it's unmodifyiable i.e cant be modified inside program

/*#include<iostream>
using namespace std;
#define PI 3.14
int main()
{
    int r=5;
    double area=PI*r*r;
    cout<<"area:"<<area<<endl;
    return 0;
}
*/
/*
// C program to illustrate macros
#include <stdio.h>
// Macro definition
#define AREA(l, b) (l * b)
// Driver Code
int main()
{
    // Given lengths l1 and l2
    int l1 = 10, l2 = 5, area;
    // Find the area using macros
    area = AREA(l1, l2);
    // Print the area
    printf("Area of rectangle"
           " is: %d",
           area);
    return 0;
}
*/

//macros and its types:
//1.Object-like Macros: An object-like macro is a simple identifier that will be replaced by a code fragment. 
//It is called object-like because it looks like an object in code that uses it. 
//It is popularly used to replace a symbolic name with numerical/variable represented as constant.
//example:
// C program to illustrate macros
/*
#include <stdio.h>
// Macro definition
#define DATE 31
// Driver Code
int main()
{
    // Print the message
    printf("Lockdown will be extended"
           " upto %d-MAY-2020",
           DATE);
    return 0;
}
*/

//2. Chain Macros: Macros inside macros are termed as chain macros. In chain macros first of 
//all parent macro is expanded then the child macro is expanded. 
//example:
/*
// C program to illustrate macros
#include <stdio.h>
// Macro definition
#define INSTAGRAM FOLLOWERS
#define FOLLOWERS 138
// Driver Code
int main()
{
    // Print the message
    printf("Geeks for Geeks have %dK"
           " followers on Instagram",
           INSTAGRAM);
    return 0;
}
*/

//3.Multi-line Macros: An object-like macro could have a multi-line. 
//So to create a multi-line macro you have to use backslash-newline. 
//example:
/*
// C program to illustrate macros
#include <stdio.h>
// Multi-line Macro definition
#define ELE 1, \
            2, \
            3 
// Driver Code
int main()
{
    // Array arr[] with elements
    // defined in macros
    int arr[] = { ELE };
    // Print elements
    printf("Elements of Array are:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d  ", arr[i]);
    }
    return 0;
}
*///o/p:Elements of Array are:
// 1  2  3  

//4.Function-like Macro: These macros are the same as a function call. 
//It replaces the entire code instead of a function name. 
//Pair of parentheses immediately after the macro name is necessary. 
//If we put a space between the macro name and the parentheses in the macro definition, 
//then the macro will not work. A function-like macro is only lengthened if and only if 
//its name appears with a pair of parentheses after it. If we don’t do this, 
//the function pointer will get the address of the real function and lead to a syntax error.

/*
// C program to illustrate macros
#include <stdio.h>
// Function-like Macro definition
#define min(a, b) (((a) < (b)) ? (a) : (b))
// Driver Code
int main()
{
    // Given two number a and b
    int a = 18;
    int b = 76;
    printf("Minimum value between"
           " %d and %d is %d\n",
           a, b, min(a, b));
    return 0;
}
*/

//***************************************************************
//Global variables
//any variable declared within a function is local to that function
//after completion of that function that variable also freed
//if we declare a variable outside of all functions then it can be accessed
//by all the functions thought it is bad practice becoz any function can modify
//it

//**********************************************************************
//InLine Functions
//if body of function is single line then make it as inline function
//becoz whenever function call happens then whole body is replaced 
//here no extra memory is utilized  and no function call overhead
//ex:
/*
#include <iostream>
using namespace std;

inline int Max(int x, int y) {
   return (x > y)? x : y;
}
// Main function for the program
int main() {
   cout << "Max (20,10): " << Max(20,10) << endl;
   cout << "Max (0,200): " << Max(0,200) << endl;
   cout << "Max (100,1010): " << Max(100,1010) << endl;
   return 0;
}
*/

//**********************************************************************
//Default arguments
#include<iostream>
using namespace std;

void print(int *arr,int size,int start=0)//if start is not passed then by default it is 0
//i.e start variable is optional to pass 
//and making default arguments is done in right to left manner i.e
//if an argument is default then its right arguments must be default
{
    for(int i=start;i<size;i++){
        cout<<arr[i]<<endl;
    }
}

int main()
{
    int arr[]{1,2,3,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);

    print(arr,size,2);
    cout<<endl;
    print(arr,size);
    return 0;
}