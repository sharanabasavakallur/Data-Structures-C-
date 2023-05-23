//stable and unstable sorting algorithms
/*A sorting algorithm is said to be stable if two objects with equal keys appear in the same order 
in sorted output as they appear in the input data set
Formally stability may be defined as, how the algorithm treats equal elements
Informally, stability means that equivalent elements retain their relative positions, after sorting.

Let A[] be an array, and let ‘<‘ be a strict weak ordering on the elements of A[].  
A sorting algorithm is stable if: i < j\:\:and\:\:A[i]\equiv A[j]\:\:implies\:\:\pi (i) < \pi (j)     
where \pi      is the sorting permutation ( sorting moves A[i]      to position \pi(i)      ) .

Do we care for simple arrays like the array of integers? 
When equal elements are indistinguishable, such as with integers, or more generally, any data where the entire element is the key, 
stability is not an issue. Stability is also not an issue if all keys are different.

Where stable sorting algorithms are useful?
 Consider the following dataset of Student Names and their respective class sections.

 \\ (Dave, A)\\ (Alice, B)\\ (Ken, A)\\ (Eric, B)\\ (Carol, A) 

If we sort this data according to name only, then it is highly unlikely that the resulting 
dataset will be grouped according to sections as well. 

\\ (Alice, B)\\ (Carol, A)\\ (Dave, A)\\ (Eric, B)\\ (Ken, A) 

So we might have to sort again to obtain the list of students section-wise too. But in doing so, 
if the sorting algorithm is not stable, we might get a result like this:

\\ (Carol, A)\\ (Dave, A)\\ (Ken, A)\\ (Eric, B)\\ (Alice, B) 

The dataset is now sorted according to sections, but not according to names. In the name-sorted dataset, 
the tuple (Alice, B) was before (Eric, B) , but since the sorting algorithm is not stable, the relative order is lost. 
If on the other hand, we used a stable sorting algorithm, the result would be:

\\ (Carol, A)\\ (Dave, A)\\ (Ken, A)\\ (ALice, B)\\ (Eric, B) 

Here the relative order between different tuples is maintained. It may be the case that the relative order is 
maintained in an Unstable Sort but that is highly unlikely.


Which sorting algorithms are stable? 
Some Sorting Algorithms are stable by nature, such as Bubble Sort, Insertion Sort, Merge Sort, Count Sort, etc. 
Comparison-based stable sorts such as Merge Sort and Insertion Sort maintain stability by ensuring that- Element A[j]      
comes before A[i]   if and only if A[j] < A[i]      , here i, j are indices, and i < j  . The relative order is preserved
*/




//SELECTION SORT

/*Selection sort is a simple and efficient sorting algorithm that works by repeatedly selecting the smallest (or largest) 
element from the unsorted portion of the list and moving it to the sorted portion of the list. 
The algorithm repeatedly selects the smallest (or largest) element from the unsorted portion of the list 
and swaps it with the first element of the unsorted portion. 
This process is repeated for the remaining unsorted portion of the list until the entire list is sorted. 
One variation of selection sort is called “Bidirectional selection sort” which goes through the list of 
elements by alternating between the smallest and largest element, this way the algorithm can be faster in some cases.
The algorithm maintains two subarrays in a given array.
The subarray which already sorted. 
The remaining subarray was unsorted.
In every iteration of the selection sort, the minimum element (considering ascending order) from the unsorted subarray 
is picked and moved to the beginning of the sorted subarray. 
After every iteration sorted subarray size increase by one and the unsorted subarray size decrease by one.
After the N (size of the array) iteration, we will get a sorted array.


How does selection sort work?
Lets consider the following array as an example: arr[] = {64, 25, 12, 22, 11}

First pass:
For the first position in the sorted array, the whole array is traversed from index 0 to 4 sequentially. 
The first position where 64 is stored presently, after traversing whole array it is clear that 11 is the lowest value.
   64   	   25   	   12   	   22   	   11   
Thus, replace 64 with 11. After one iteration 11, which happens to be the least value in the array, 
tends to appear in the first position of the sorted list.
   11   	   25   	   12   	   22   	   64  

Second Pass:
For the second position, where 25 is present, again traverse the rest of the array in a sequential manner.
   11   	   25   	   12   	   22   	   64   
After traversing, we found that 12 is the second lowest value in the array and it should appear 
at the second place in the array, thus swap these values.
   11   	   12   	   25   	   22   	   64   

Third Pass:
Now, for third place, where 25 is present again traverse the rest of the array and find the 
third least value present in the array.
   11   	   12   	   25   	   22   	   64   
While traversing, 22 came out to be the third least value and it should appear at the third place in the array, 
thus swap 22 with element present at third position.
   11   	   12   	   22   	   25   	   64   

Fourth pass:
Similarly, for fourth position traverse the rest of the array and find the fourth least element in the array 
As 25 is the 4th lowest value hence, it will place at the fourth position.
   11   	   12   	   22   	   25   	   64   

Fifth Pass:
At last the largest value present in the array automatically get placed at the last position in the array
The resulted array is the sorted array.
   11   	   12   	   22   	   25   	   64   


Follow the below steps to solve the problem:

Initialize minimum value(min_idx) to location 0.
Traverse the array to find the minimum element in the array.
While traversing if any element smaller than min_idx is found then swap both values.
Then, increment min_idx to point to the next element.
Repeat until the array is sorted.
*/

/*#include<iostream>
using namespace std;

//swap function
void swap(int* xptr,int* yptr)//pass by reference
{
    int tmp=*xptr;
    *xptr=*yptr;
    *yptr=tmp;
}

void selectionSort(int arr[],int n)
{
    int i,j,min_index;

    //one by one move boundary of unsorted subarray
    for(i=0;i<n-1;i++){ //upto n-1 bcz in last second round only largest elt is sorted

        //find minimum element in unsorted array
        min_index=i;

        for(j=i+1;j<n;j++){ //traverse through unsorted part

            if(arr[j]<arr[min_index])
            min_index=j;
        }

        //swap the found minimum element with the first element
        if(min_index!=i) //if min_index doesn't change then keep as it is
        swap(&arr[min_index],&arr[i]);

    }

}

//printing array
void printArray(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

//driver program
int main()
{
    int arr[]{64,25,12,22,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    cout<<"sorted array:\n";
    printArray(arr,n);
    return 0;
}*/


/*Complexity Analysis of Selection Sort:
Time Complexity: The time complexity of Selection Sort is O(N2) as there are two nested loops:

One loop to select an element of Array one by one = O(N)
Another loop to compare that element with every other Array element = O(N)
Therefore overall complexity = O(N) * O(N) = O(N*N) = O(N2)

Auxiliary Space: O(1) as the only extra memory used is for temporary variables while swapping two values in Array. 
The selection sort never makes more than O(N) swaps and can be useful when the memory write is a costly operation. 

Is Selection Sort Algorithm stable?
Stability: The default implementation is not stable. However, it can be made stable. Please see the stable selection sort for details.

Is Selection Sort Algorithm in place?
Yes, it does not require extra space.

selection sort can be used when array size is small
*/


//***********************************************************************************************************************************************

//BUBBLE SORT

/*Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements 
if they are in the wrong order. This algorithm is not suitable for large data sets as its 
average and worst-case time complexity is quite high.

Input: arr[] = {6, 3, 0, 5}

First Pass: 
Bubble sort starts with very first two elements, comparing them to check which one is greater.
( 6 3 0 5 ) –> ( 3 6 0 5 ), Here, algorithm compares the first two elements, and swaps since 6 > 3. 
( 3 6 0 5 ) –>  ( 3 0 6 5 ), Swap since 6 > 0 
( 3 0 6 5 ) –>  ( 3 0 5 6 ), Swap since 6 > 5

Second Pass: 
Now, during second iteration it should look like this:
( 3 0 5 6 ) –>  ( 0 3 5 6 ), Swap since 3 > 0 
( 0 3 5 6 ) –>  ( 0 3 5 6 ), No change as 5 > 3 

Third Pass: 
Now, the array is already sorted, but our algorithm does not know if it is completed.
The algorithm needs one whole pass without any swap to know it is sorted.
( 0 3 5 6 ) –>  ( 0 3 5 6 ), No change as 3 > 0 
Array is now sorted and no more pass will happen.


Follow the below steps to solve the problem:
Run a nested for loop to traverse the input array using 
two variables i and j, such that 0 ≤ i < n-1 and 0 ≤ j < n-i-1
If arr[j] is greater than arr[j+1] then swap these adjacent elements, else move on
Print the sorted array
*/

/*#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n)
{
   int i,j;
   for(int i=0;i<n-1;i++) //or i=1 to i<n
   {

      //last i elements are already in place(sorted)
      for(int j=0;j<n-i-1;j++)
      {
         if(arr[j]>arr[j+1])
         swap(arr[j],arr[j+1]);
      }
   }
}

// The above function always runs O(N2) time even if the array is sorted. 
// It can be optimized by stopping the algorithm if the inner loop didn’t 
// cause any swap. 
// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{
   int i, j;
   bool swapped;
   for (i = 0; i < n-1; i++)
   {
     swapped = false;
     for (j = 0; j < n-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           swap(arr[j], arr[j+1]);
           swapped = true;
        }
     }
 
     // IF no two elements were swapped
     // by inner loop, then break 
     if (swapped == false)
        break;
   }
}

//printing array
void printArray(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

//driver program
int main()
{
    int arr[]{9,0,12,5,24,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    cout<<"sorted array:\n";
    printArray(arr,n);
    return 0;
}*/

/*Time Complexity: O(N2)
Auxiliary Space: O(1)

Worst Case Analysis for Bubble Sort:(optimized version)
The worst-case condition for bubble sort occurs when elements of the array are arranged in decreasing order.
In the worst case, the total number of iterations or passes required to sort a given array is (n-1). 
where ‘n’ is a number of elements present in the array.

Worst and Average Case Time Complexity: O(N2). The worst case occurs when an array is reverse sorted.
Best Case Time Complexity: O(N). The best case occurs when an array is already sorted.
Auxiliary Space: O(1)
*/

/*Does sorting happen in place in Bubble sort?
Yes, Bubble sort performs the swapping of adjacent pairs without the use of any major data structure. 
Hence Bubble sort algorithm is an in-place algorithm.

Is the Bubble sort algorithm stable?
Yes, the bubble sort algorithm is stable.*/

//***************************************************************************************************************************

//INSERTION SORT

/*Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. 
The array is virtually split into a sorted and an unsorted part. 
Values from the unsorted part are picked and placed at the correct position in the sorted part.

Characteristics of Insertion Sort:
This algorithm is one of the simplest algorithm with simple implementation
Basically, Insertion sort is efficient for small data values
Insertion sort is adaptive in nature, i.e. it is appropriate for data sets which are already partially sorted.


Working of Insertion Sort algorithm:
Consider an example: arr[]: {12, 11, 13, 5, 6}
   12   	   11   	   13   	   5   	   6 

First Pass:
Initially, the first two elements of the array are compared in insertion sort.
   12   	   11   	   13   	   5   	   6   
Here, 12 is greater than 11 hence they are not in the ascending order and 12 is not at its correct position. 
Thus, swap 11 and 12.So, for now 11 is stored in a sorted sub-array.
   11   	   12   	   13   	   5   	   6   

Second Pass:
Now, move to the next two elements and compare them
   11   	   12   	   13   	   5   	   6   
Here, 13 is greater than 12, thus both elements seems to be in ascending order, 
hence, no swapping will occur. 12 also stored in a sorted sub-array along with 11

Third Pass:
Now, two elements are present in the sorted sub-array which are 11 and 12
Moving forward to the next two elements which are 13 and 5
   11   	   12   	   13   	   5   	   6   
Both 5 and 13 are not present at their correct place so swap them
   11   	   12   	   5   	   13   	   6   
After swapping, elements 12 and 5 are not sorted, thus swap again
   11   	   5   	   12   	   13   	   6   
Here, again 11 and 5 are not sorted, hence swap again
   5   	   11   	   12   	   13   	   6   
Here, 5 is at its correct position

Fourth Pass:
Now, the elements which are present in the sorted sub-array are 5, 11 and 12
Moving to the next two elements 13 and 6
   5   	   11   	   12   	   13   	   6   
Clearly, they are not sorted, thus perform swap between both
   5   	   11   	   12   	   6   	   13   
Now, 6 is smaller than 12, hence, swap again
   5   	   11   	   6   	   12   	   13   
Here, also swapping makes 11 and 6 unsorted hence, swap again
   5   	   6   	   11   	   12   	   13   
Finally, the array is completely sorted.


Insertion Sort Algorithm 
To sort an array of size N in ascending order: 

Iterate from arr[1] to arr[N] over the array. 
Compare the current element (key) to its predecessor. 
If the key element is smaller than its predecessor, compare it to the elements before. 
Move the greater elements one position up to make space for the swapped element.
*/


#include<iostream>
using namespace std;

/*void insertionSort(int arr[],int n)
{
   int i,key,j;
   for(int i=1;i<n;i++)
   {
      key=arr[i];
      j=i-1;

      //move elements of arr[0..i-1] that are greater than key,to one 
      //position ahead of their current position(shifting by one position)
      while(j>=0 && arr[j]>key){
         arr[j+1]=arr[j]; //shifting arr[j]
         j=j-1;
      }

      arr[j+1]=key; //key gets its correct position..
      //j+1 bcz at end of while loop j=j-1..

   }
}*/

void insertionSort(int arr[],int n)
{
   for(int i=1;i<n;i++)
   {
      int key=arr[i];

      int j=i-1;
      for(;j>=0;j--){
         if(arr[j]>key){
            //shift arr[j] by one position
            arr[j+1]=arr[j];
         }
         else
         //already sorted
         break;
      }
      
      arr[j+1]=key; //key gets its position
   }
} 

//printing array
void printArray(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

//driver program
int main()
{
    int arr[]{8,2,4,1,32,21,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    cout<<"sorted array:\n";
    printArray(arr,n);
    return 0;
}

/*Time Complexity: O(N^2) 
Auxiliary Space: O(1)

Selection sort is inPlace , stable algorithm
When is the Insertion Sort algorithm used?
Insertion sort is used when number of elements is small. It can also be useful when input array is almost sorted, 
only few elements are misplaced in complete big array.*/