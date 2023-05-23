#include<iostream>
using namespace std;

int main(){
    /*int a;
    cout<<"enter value of a:"<<endl;
    //cin>>a; //cin will ignore whitespace(space,tabspace,newline)
            //so to avoid it use cin.get() function
    a=cin.get();        //in this case will get ascii value of white spaces
    cout<<"entered value is:"<<a;*/

    //if else
    /*char ch;
    cout<<"enter a character:";
    cin>>ch;
    if(ch>='a' && ch<='z')
    cout<<"lower case"<<endl;
    else if (ch>='A' && ch<='Z')
    cout<<"upper case"<<endl;
    else if(ch<='9' && ch>'0')
    cout<<"digit"<<endl;*/

    //LOOPING
    //printing first n natural numbers and their sum
    /*int n;
    cout<<"enter the value of n:";
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n){
        cout<<i<<" ";
        sum=sum+i;
        i++;
    }
    cout<<endl<<"sum of first "<<n<<" natural numbers is:"<<sum<<endl;*/

    //prime or not 
    /*int n;
    cout<<"enter the value of n:";
    cin>>n;
    
    int i=2;
    while(i<n)
    {
        if(n%i==0){
        cout<<"not prime"<<endl;
        break;
        }
        i++;
    }
    if(i==n)
    cout<<"prime"<<endl;*/

    //PATTERNS
    int n;
    cout<<"enter the value of n:";
    cin>>n;

    //pattern-1  (for n=5)
    /*
    * * * * *
    * * * * *
    * * * * * 
    * * * * * 
    * * * * *
    */

   /*
   int i=1;
   while(i<=n)
   {
    int j=1;
    while(j<=n)
    {
        cout<<"* ";
        j++;
    }
    cout<<endl;
    i++;
   }*/

   //************************************************************************
   //pattern-2
   /*
   1 1 1 1
   2 2 2 2
   3 3 3 3
   4 4 4 4
   */

  /*int i=1;
  while(i<=n){
    int j=1;
    while(j<=n)
    {
        cout<<i<<" ";
        j++;
    }
    cout<<endl;
    i++;
  }*/

  //******************************************************
  //pattern-3
  /*
   1 2 3 4
   1 2 3 4
   1 2 3 4
   1 2 3 4
  */
/*int i=1;
while(i<=n)
{
    int j=1;
    while(j<=n)
    {
        cout<<j<<" ";
        j++;
    }
    cout<<endl;
    i++;
}*/

//********************************************************************
//pattern-4
/*
4 3 2 1
4 3 2 1
4 3 2 1
4 3 2 1
*/
/*int i=1;
while(i<=n){
    int j=1;
    while(j<=n){//condition for square shaped pattern
        cout<<n-j+1<<" ";
        j++;
    }
    cout<<endl;
    i++;
}*/

//***************************************************************************
//pattern-5
  /*
   1 2 3 4
   5 6 7 8
   9 10 11 12
   13 14 15 16
  */
/*int i=1;
int count=1;
while(i<=n)
{
    int j=1;
    while(j<=n)
    {
        cout<<count<<" ";
        j++;
        count++;
    }
    cout<<endl;
    i++;
}*/

//*******************************************************************
//pattern-6
/*
*
* *
* * * 
* * * *
*/

/*int i=1;
while(i<=n){
    int j=1;
    while(j<=i)//condition for triangle shaped pattern
    {
        cout<<"* ";
        j++;
    }
    cout<<endl;
    i++;
}*/

//***************************************************************************
//pattern-7
/*
1
2 2 
3 3 3 
4 4 4 4
*/

/*int i=1;
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<i<<" ";
        j++;
    }
    cout<<endl;
    i++;
}*/

//********************************************************************
//pattern-8
/*
1
2 3 
4 5 6
7 8 9 10
*/

/*int i=1,count=1;
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<count<<" ";
        count++;
        j++;
    }
    cout<<endl;
    i++;
}*/

//*********************************************************************'
//pattern-9
/*
1
2 3
3 4 5
4 5 6 7
*/

/*int i=1;
while(i<=n){
    int j=1;
    int count=i;//every row starts with row number.
    while(j<=i){
        cout<<count<<" ";
        count++;
        j++;
    }
    cout<<endl;
    i++;
}*/

//without using count var.
/*int i=1;
while(i<=n){
    int j=1;
    
    while(j<=i){
        cout<<j+i-1<<" ";
        j++;
    }
    cout<<endl;
    i++;
}*/

//******************************************************************
//pattern-10
/*
1
2 1
3 2 1 
4 3 2 1
*/

/*int i=1;
while(i<=n){
    int j=1;
    int count=i;
    while(j<=i){
        cout<<count<<" ";
        j++;
        count--;
    }
    cout<<endl;
    i++;
}*/

//without using count variable

/*int i=1;
while(i<=n){
    int j=i;
    while(j>0){
        cout<<j<<" ";//if j=1,condition j<=i then print i-j+1
        j--;
    }
    cout<<endl;
    i++;
}*/

//*********************************************************************
//pattern-11
/*
A A A A
B B B B
C C C C
D D D D
*/

/*int i=1;
while(i<=n){
    int j=1;
    while(j<=n)
    {
        cout<<(char)('A'+i-1)<<" "; //type casting
        j++;
    }
    cout<<endl;
    i++;
}*/


//*********************************************************************
//pattern-12
/*
A B C D
A B C D
A B C D
A B C D
*/

/*int i=1;
while(i<=n){
    int j=1;
    while(j<=n)
    {
        cout<<(char)('A'+j-1)<<" "; //type casting
        j++;
    }
    cout<<endl;
    i++;
}*/



//*********************************************************************
//pattern-13
/*
A B C D
E F G H 
I J K L
M N O P
*/

/*int i=1;
int c=1;
while(i<=n){
    int j=1;
    while(j<=n)
    {
        cout<<(char)('A'+c-1)<<" "; //type casting
        j++;
        c++;
    }
    cout<<endl;
    i++;
}*/


//*********************************************************************
//pattern-14
/*
A B C D
B C D E
C D E F 
D E F G
*/

/*int i=1;
while(i<=n){
    int j=1;
    while(j<=n)
    {
        cout<<(char)('A'+(i+j-1)-1)<<" "; //type casting
        j++;
    }
    cout<<endl;
    i++;
}*/



//****************************************************************
//pattern-15
/*
A
B B
C C C
*/

/*int i=1;
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<char('A'+i-1)<<" ";
        j++;
    }
    cout<<endl;
    i++;
}*/



//****************************************************************
//pattern-16
/*
A
B C
D E F
*/

/*int i=1;
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<char('A'+i+j-2)<<" ";
        j++;
    }
    cout<<endl;
    i++;
}*/


//****************************************************************
//pattern-17
/*
D
C D
B C D
A B C D
*/

/*int i=1;
while(i<=n){
    int j=1;
    char ch='A'+n-i;
    while(j<=i){
        cout<<ch<<" ";
        j++;
        ch++;
    }
    cout<<endl;
    i++;
}*/



//***********************************************************************
//pattern-18
/*
      *
    * *
  * * *
* * * *
*/

/*int i=1;
while(i<=n){
    //print the spaces
    int space=n-i;
    while(space){
        cout<<" "<<" ";
        space--;
    }

    //print stars
    int j=1;
    while(j<=i){
        cout<<"*"<<" ";
        j++;
    }
    cout<<endl;
    i++;
}*/


//********************************************************************
//pattern-19
/*
* * * *
* * *
* *
*
*/

/*int i=1;
while(i<=n){
   int stars=n-i+1;
   while(stars){
    cout<<"*"<<" ";
    stars--;
   }
   cout<<endl;
   i++;
}*/


//*******************************************************************
//pattern-20
/*
* * * *
  * * *
    * *
      * 
*/

/*int i=1;
while(i<=n){
    //print spaces
    int spaces=i-1;
    while(spaces){
        cout<<" "<<" ";
        spaces--;
    }

    //print stars
    int stars=n-i+1;
    while(stars){
        cout<<"*"<<" ";
        stars--;
    }
    cout<<endl;
    i++;
}*/


//*********************************************************************
//pattern-21
/*
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
*/

/*int i=1;
while(i<=n){
    //part-1(triangle of spaces)
    int spaces=n-i;
    while(spaces){
        cout<<" "<<" ";
        spaces--;
    }

    //part-2(triangle of no's)
    int j=1;
    while(j<=i){
        cout<<j<<" ";
        j++;
    }

    //part-3(tringle of no's)
    int k=i-1;
    while(k){
        cout<<k<<" ";
        k--;
    }

    cout<<endl;
    i++;
}*/



//*******************************************************************
//pattern-22(Dabangg pattern)
/*
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
*/

/*int i=1;
while(i<=n){

    //part-1(no's in ascending)
    int j=1;
    while(j<=n-i+1){
        cout<<j<<" ";
        j++;
    }

    //part-2(print even stars)
    int stars=2*(i-1);
    while(stars){
        cout<<"*"<<" ";
        stars--;
    }

    //part-3(no's in descending)
    int k=n-i+1;
    while(k){
        cout<<k<<" ";
        k--;
    }

    cout<<endl;
    i++;
}*/

//********************************************************************
//Pattern-23
/*
* * * * *
*       *
*       *
*       *
* * * * *
*/

//stars are at positions i=1 or j=1 or i=n or j=m

/*int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        //cell -> (i,j)
        if(i==1 || j==1 || i==n || j==n){
            cout<<"*"<<" ";
        }
        else{
            cout<<"  ";
        }
        j++;
    }
    cout<<endl;
    i++;
}*/

//*************************************************************************
//Pattern-24
/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
//if we analyse the pattern in matrix form for the cell -> (i,j)=>1 if [i+j] is even
//cell -> (i,j)=>0 if [i+j] is odd

/*int i=1;
while(i<=n){
    int j=1;
    while(j<=i){
        //for cell -> (i,j)
        if((i+j)%2==0)//even
        cout<<"1 ";
        else//odd
        cout<<"0 ";

        j++;
    }
    cout<<endl;
    i++;
}*/

//**********************************************************************************
//Pattern-25(butterfly pattern)
/*

*             *
* *         * *
* * *     * * *
* * * * * * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *

*/

/*
//upper half(i->1 to n)
int i=1;
while(i<=n){
    //print stars(first triangle)
    int j=1;
    while(j<=i){
        cout<<"* ";
        j++;
    }

    //print spaces(second triangle)
    int spaces=2*(n-i);
    while(spaces){
        cout<<"  ";
        spaces--;
    }

    //print stars (third triangle..same as first triangle)
    int k=1;
    while(k<=i){
        cout<<"* ";
        k++;
    }
    i++;
    cout<<endl;
}

//lower half(i->n to 1)
i=n; //i alreaky declared
while(i>=1){
    //print stars(first triangle)
    int j=1;
    while(j<=i){
        cout<<"* ";
        j++;
    }

    //print spaces(second triangle)
    int spaces=2*(n-i);
    while(spaces){
        cout<<"  ";
        spaces--;
    }

    //print stars (third triangle..same as first triangle)
    int k=1;
    while(k<=i){
        cout<<"* ";
        k++;
    }
    i--;
    cout<<endl;
}*/

//****************************************************************************
//Pattern-26(solid rhombus)
/*
        * * * * *
      * * * * *
    * * * * *
  * * * * * 
* * * * * 
*/
//print spaces(triangle) and square_star pattern
/*int i=1;
while(i<=n){
    //print spaces(triangle)
    int spaces=n-i;
    while(spaces){
        cout<<"  ";
        spaces--;
    }

    //print stars(square)
    int j=1;
    while(j<=n){
        cout<<"* ";
        j++;
    }

    i++;
    cout<<endl;
}*/

//*******************************************************************************
//Pattern-27(number pyramid)
/*
    1
   2 2
  3 3 3
 4 4 4 4 
5 5 5 5 5
*/

/*int i=1;
while(i<=n){
    //print spaces(first triangle)
    int spaces=n-i;
    while(spaces){
        cout<<" ";
        spaces--;
    }

    //print numbers(row numbers)(second triangle)
    int j=1;
    while(j<=i){
        cout<<i<<" ";
        j++;
    }

    i++;
    cout<<endl;
}*/

//****************************************************************************
//Pattern-28(Palindromic pattern)
/*
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4 
5 4 3 2 1 2 3 4 5
*/

/*int i=1;
while(i<=n){
    //print spaces(first trinagle)
    int spaces=n-i;
    while(spaces){
        cout<<"  ";
        spaces--; 
    }

    //print numbers(second triangle)(from 5 to 1)
    int k=1;
    while(k<=i){
        cout<<i-k+1<<" ";
        k++;
    }
    
    //print numbers(third triangle)(from 2 to 5)
    int j=2;
    while(j<=i){
        cout<<j<<" ";
        j++;
    }

    i++;
    cout<<endl;
}*/

//***************************************************************************
//Pattern-29(diamond pattern)
/*
      *
    * * *
  * * * * *
* * * * * * *
  * * * * *
    * * *
      *
*/

//upper half(same as palindromic pattern)
int i=1;
while(i<=n){
    //print spaces(first triangle)
    int spaces=n-i;
    while(spaces){
        cout<<"  ";
        spaces--;
    }

    //print stars(second triangle)
    int j=1;
    while(j<=i){
        cout<<"* ";
        j++;
    }

    //print stars(third triangle)
    int k=2;
    while(k<=i){
        cout<<"* ";
        k++;
    }

    i++;
    cout<<endl;
}

//second half(reverse of first half i.e i->n-1 to 1)
i=n-1;
while(i>=0){
    //print spaces(first triangle)
    int spaces=n-i;
    while(spaces){
        cout<<"  ";
        spaces--;
    }

    //print stars(second triangle)
    int j=1;
    while(j<=i){
        cout<<"* ";
        j++;
    }

    //print stars(third triangle)
    int k=2;
    while(k<=i){
        cout<<"* ";
        k++;
    }

    i--;
    cout<<endl;
}

}