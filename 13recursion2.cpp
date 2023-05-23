//1.reverse the string
/*#include<iostream>
using namespace std;

void reverse(string& s,int i,int j){//pass by reference to reflect everywhere
    //base case
    if(i>j)
    return;

    swap(s[i],s[j]);
    i++;
    j--;

    //recursive condition
    reverse(s,i,j);

}
int main()
{
    string str="hello";

    reverse(str,0,str.length()-1);

    cout<<"reversed:"<<str<<endl;
}*/

//avoiding j
/*#include<iostream>
using namespace std;
void reverse(string& s,int i,int n){//pass by reference to reflect everywhere
    //base case
    if(i>n/2)
    return;

    swap(s[i],s[n-i-1]);
    i++;

    //recursive condition
    reverse(s,i,n);

}
int main()
{
    string str="hello";

    reverse(str,0,str.length());

    cout<<"reversed:"<<str<<endl;
}*/

//***************************************************************************************
//2.check palindrome
/*#include<iostream>
using namespace std;
bool checkPalindrome(string str,int i,int j)
{
    //base case
    if(i>j)
    return true;

    //recursive relation
    if(str[i]!=str[j])
    return false;
    else
    return checkPalindrome(str,++i,--j);

}
int main()
{
    string s="SHARANABASAVA";
    string s1="GADAG";
    bool isPalindrome=checkPalindrome(s1,0,s1.length()-1);
    if(isPalindrome)
    cout<<"Yes.."<<endl;
    else
    cout<<"No.."<<endl;
}*/

//***************************************************************************
//3.print a power b (when stack size is available of size n)
/*#include<iostream>
using namespace std;

int apowerb(int a,int b)
{
    //base cases
    if(b==0)
    return 1;
    if(b==1)
    return a;
    if(a==0)
    return 0;

    //recursive condition
    return(a * apowerb(a,b-1));
}

int main()
{
    int a,b;
    cout<<"enter values of a and b:";
    cin>>a>>b;
    
    int ans=apowerb(a,b);
    cout<<"power("<<a<<","<<b<<") : "<<ans<<endl;
    return 0;
}*/

//???????????????????????????????????????????
//3.print a power b (when stack size available of size log(n))
//by fast exponentiation
//if b is even then return a^(b/2)*a^(b/2)
//if b is odd then return a*a^(b/2)*a^(b/2)
//notes pg:129
/*#include<iostream>
using namespace std;
int apowerb(int a,int b)
{
    //base cases
    if(a==0)
    return 0;//0 power anything is 0
    if(b==0)
    return 1;//anything power 0 is 1
    if(b==1)
    return a;//anything power 1 is anything

    //recursive condition
    int ans=apowerb(a,b/2);

    //check condition
    if(b%2==0)//if b is even
    return ans*ans;
    else //if b is odd
    return a*ans*ans;
}
int main()
{
    int a,b;
    cout<<"enter value of a and b:";
    cin>>a>>b;
    cout<<a<<" raised to power "<<b<<" : "<<apowerb(a,b)<<endl;
}
*/
//*************************************************************************************
//4.bubble sort
/*#include<iostream>
using namespace std;

void bubbleSort(int* arr,int n)
{
    //base case
    if(n==0 || n==1)
    return;

    for(int i=0;i<n-1;i++){//to sort largest elt
        if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
    }

    //recursive condition
    bubbleSort(arr,n-1);
}
int main()
{
    int arr[5]{1,2,4,1,0};
    bubbleSort(arr,5);
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
    cout<<endl<<"sorted!"<<endl;
}*/

//***********************************************************************************
//Divide and Conquer

//5.Merge Sort
/*Merge sort is defined as a sorting algorithm that works by dividing an array into smaller subarrays, 
sorting each subarray, and then merging the sorted subarrays back together to form the final sorted array.

Illustation:
To know the functioning of merge sort lets consider an array arr[] = {38, 27, 43, 3, 9, 82, 10}

-At first, check if the left index of array is less than the right index, 
if yes then calculate its mid point
        m=l+(r-l)/2

-Now, as we already know that merge sort first divides the whole array 
iteratively into equal halves, unless the atomic values are achieved. 

-Here, we see that an array of 7 items is divided into two arrays 
of size 4 and 3 respectively.
-Now, again find that is left index is less than the right index for both arrays, 
if found yes, then again calculate mid points for both the arrays.

        38 27 43 3 | 9 82 10
               /   |   \
              /         \
        38 27 43 3      9 82 10

-Now, further divide these two arrays into further halves, 
until the atomic units of the array is reached and further division is not possible.
       
        /  \     /  \     /  \     10
       /    \   /    \   /    \
      38    27 43     3  9     82

-After dividing the array into smallest units, start merging the elements 
again based on comparison of size of elements

-Firstly, compare the element for each list and then combine them into another list in a sorted manner.
     
     38    27    43   3   9   82        |
      \    /     \    /   \    /        |
       38 27       43 3     9 82        10

-After the final merging, the list looks like this:

    27 38      3  43       9  82      10
      \          /           \         /
       \        /             \       /
        \      /               \     /
       3 27 38 43              9 10 82
           \                     /
            \                   /
             \                 /
              \               /
              3 9 10 27 38 43 82
 

refer 13mergesort.png

*/

/*#include<iostream>
using namespace std;

//merge 2 subarrays of arr[]
//first subarray is arr[l..m]
//second subarray is arr[m+1..r]
void merge(int arr[],int l,int m,int r){
    int i,j,k;
    int n1=m-l+1;//size for left array
    int n2=r-m;//size for right array

    //create temp arrays
    int L[n1],R[n2];

    //copy data to temp array L[] and R[]
    for(i=0;i<n1;i++)
        L[i]=arr[l+i];
    for(j=0;j<n2;j++)
        R[j]=arr[m+1+j];

    //merge temp arrays back into arr[l..r]
    i=0;//initial index of first subarray
    j=0;//initial index of second subarray
    k=l; //initial index of merged subarray
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }

    //copy the remaining elts of L[],if there are any
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }

    //copy the remaining elts of R[],if there are any
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }

}

void mergeSort(int arr[],int l,int r)
{//l is for left index and r is right index of the subarrya of arr to be sorted
    //base case is if(l>=r) then return 
    if(l<r){
        //same as (l+r)/2,but avoids overflow fro large l and r
        int m=l+(r-l)/2;

        //sort first and second halves
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);

        merge(arr,l,m,r);
    }
}

void printArray(int a[],int size)
{
    int i;
    for(i=0;i<size;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[]{12,11,13,5,6,7};
    int arr_size=sizeof(arr)/sizeof(arr[0]);

    cout<<"given array is:"<<endl;
    printArray(arr,arr_size);

    mergeSort(arr,0,arr_size-1);

    cout<<"\nSorted array is:"<<endl;
    printArray(arr,arr_size);

    return 0;
}
*/
/*Is Merge sort In Place?
No, In merge sort the merging step requires extra space to store the 
elements.

Is Merge sort Stable?
Yes, merge sort is stable. 
*/

//**********************************************************************************************
//6.Quick Sort

/*QuickSort is a Divide and Conquer algorithm. It picks an element as a pivot and partitions the given array around the pivot. 
There are many different versions of quickSort that pick the pivot in different ways. 

Always pick the first element as a pivot.
Always pick the last element as a pivot.
Pick a random element as a pivot.
Pick the median as the pivot.
Note: Here we will be implementing quick sort by picking the first element as the pivot.

Quick Sort by picking the first element as the Pivot.
The key function in quick sort is a partition. The target of partitions is to put the pivot in its 
correct position if the array is sorted and the smaller (or equal) to its left and higher elements 
to its right and do all this in linear time.


Illustration:
Consider: arr[] = { 7,   6,   10,   5,   9,   2,   1,   15,   7 }

First Partition: low = 0, high = 8, pivot = arr[low] = 7
Initialize index of right most element k = high = 8.

Traverse from i = high to low:
if arr[i] is greater than pivot:
Swap arr[i] and arr[k].
Decrement k;
At the end swap arr[low] and arr[k].
Now the correct position of pivot is index 5

(7) 6 10 5 9 2 1 15 7
partion around the first elt 7
2 6 1 5 7 (7) 10 9 15
correct position of 7

Second Partition: low = 0, high = 4, pivot = arr[low] = 2
Similarly initialize k = high = 4; 

The correct position of 2 becomes index 1. And the left part is only one element and the right part has {6, 5, 7}.

(2) 6 1 5 7
partition around the first elt 2 
1 (2) 6 5 7
correct position of 2

On the other hand partition happens on the segment [6, 8] i.e., the array {10, 9, 15}.
Here low = 6, high = 8, pivot = 10 and k = 8.

The correct position of 10 becomes index 7 and the right and left part both has only one element.

(10) 9 15
partition around the first elt 10
9 (10) 15
correct position 10

Third partition:  Here partition the segment {6, 5, 7}. The low = 2, high = 4, pivot = 6 and k = 4.
If the same process is applied, we get correct position of 6 as index 3 and the 
left and the right part is having only one element.

(6) 5 7
partion around the first elt 6
5 (6) 7
correct position of 6

The total array becomes sorted in this way. Check the below image for the recursion tree

*/

// #include<iostream>
// using namespace std;

/*int partition(int arr[],int low,int high)
{
    //first elt as pivot
    int pivot=arr[low];

    int k=high;//to get position of pivot

    for(int i=high;i>low;i--){
        if(arr[i]>pivot)
            swap(arr[i],arr[k--]);
    }//k's left elts are smaller than pivot and right elts are greater than pivot
    
    swap(arr[low],arr[k]);
    //k is new position for pivot elt

    return k;
}*/

//babbars function
/*int partition(int arr[],int low,int high)
{
    //let's assume first elt as pivot
    int pivot=arr[low];

    int count=0;//to count no. of elts less then pivot as to find correct_pos. for pivot
    for(int i=low+1;i<=high;i++){
        if(arr[i]<=pivot)
        count++;
    }

    int pivot_index=low+count;
    //place the assumed pivot elt in correct position
    swap(arr[low],arr[pivot_index]);

    //now,we ensure leftpart elts of pivot are smaller nd rightpart elts are greater
    int i=low,j=high;
    while(i<pivot_index && j>pivot_index){
        while(arr[i]<=pivot) //as we want
            i++;
        while(arr[j]>pivot) //as we want
            j--;

        //if neither of above cases then swap both elts
        if(i<pivot_index && j>pivot_index)//rechecking conditon
            swap(arr[i++],arr[j--]);
    }
    
    return pivot_index;

}

void quickSort(int arr[],int low,int high)
{
    //base case if(low>=high) return;
    if(low<high)
    {
        int index=partition(arr,low,high);

        //seperately sort elts before and after partitioned index
        quickSort(arr,low,index-1);
        quickSort(arr,index+1,high);
    }
}

void printArray(int a[],int size)
{
    int i;
    for(i=0;i<size;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[]{12,11,13,5,6,7};
    int arr_size=sizeof(arr)/sizeof(arr[0]);

    cout<<"given array is:"<<endl;
    printArray(arr,arr_size);

    quickSort(arr,0,arr_size-1);

    cout<<"\nSorted array is:"<<endl;
    printArray(arr,arr_size);

    return 0;
}*/

/*
Is QuickSort stable?
The default implementation is not stable. However, any sorting algorithm can be made stable by 
considering indices as a comparison parameter. 

Is QuickSort In-place?
As per the broad definition of in-place algorithm, it qualifies as an in-place sorting algorithm as 
it uses extra space only for storing recursive function calls but not for manipulating the input. 

Complexity Analysis:

Time Complexity:
Average Case: O(N * logN), where N is the length of the array.
Best Case: O(N * logN)
Worst Case: O(N2)
Auxiliary Space: O(1)
*/