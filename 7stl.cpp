// C++ Program to demonstrate
// Use of template
/*#include <iostream>
using namespace std;
 
// One function works for all data types.  This would work
// even for user defined types if operator '>' is overloaded
template <typename T> T myMax(T x, T y)
{
    return (x > y) ? x : y;
}
 
int main()
{
    // Call myMax for int
    cout << myMax<int>(3, 7) << endl;
    // call myMax for double
    cout << myMax<double>(3.0, 7.0) << endl;
    // call myMax for char
    cout << myMax<char>('g', 'e') << endl;
 
    return 0;
}*/

//***********************************************************************

// Bubble sort
// using template function
/*#include <iostream>
using namespace std;
 
// A template function to implement bubble sort.
// We can use this for any data type that supports
// comparison operator < and swap works for it.
template <class T> void bubbleSort(T a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (a[j] < a[j - 1])
                swap(a[j], a[j - 1]);
}
 
// Driver Code
int main()
{
    int a[5] = { 10, 50, 30, 40, 20 };
    int n = sizeof(a) / sizeof(a[0]);
 
    // calls template function
    bubbleSort<int>(a, n);
 
    cout << " Sorted array : ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
 
    return 0;
}*/

//**************************************************************************
//Sorting
/*#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]{5,6,3,2,0,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    //sort array in ascending order
    //sort(begin(arr),end(arr));
    sort(arr,arr+size);

    //print sorted array
    for(int i:arr)
        cout<<i<<" ";

    cout<<endl;
}*/

//*****************************************************************************
//Searching

// CPP program to implement
// Binary Search in
// Standard Template Library (STL)
/*#include <algorithm>
#include <iostream>
  
using namespace std;
  
void show(int a[], int arraysize)
{
    for (int i = 0; i < arraysize; ++i)
        cout << a[i] << ",";
}
  
int main()
{
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int asize = sizeof(a) / sizeof(a[0]);
    cout << "\nThe array is : \n";
    show(a, asize);
  
    cout << "\n\nLet's say we want to search for ";
    cout << "\n2 in the array So, we first sort the array";
    sort(a, a + asize);
    cout << "\n\nThe array after sorting is : \n";
    show(a, asize);
    cout << "\n\nNow, we do the binary search";
    if (binary_search(a, a + 10, 2))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";
  
    cout << "\n\nNow, say we want to search for 10";
    if (binary_search(a, a + 10, 10))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";
  
    return 0;
}*/

/*Output
The array is : 
1,5,8,9,6,7,3,4,2,0,

Let's say we want to search for 
2 in the array So, we first sort the array

The array after sorting is : 
0,1,2,3,4,5,6,7,8,9,

Now, we do the binary search
Element found in the array

Now, say we want to search for 10
Element not found in the array

Time Complexity: sort – O(nlogn), binary_search – O(logn)
Auxiliary Space: O(1)*/

//*****************************************************************************************
//some important algo

// A C++ program to demonstrate working of sort(),
// reverse()
/*#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric> //For accumulate operation
using namespace std;
 
int main()
{
    // Initializing vector with array values
    int arr[] = {10, 20, 5, 23 ,42 , 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr, arr+n);
 
    cout << "Vector is: ";
    for (int i=0; i<n; i++)
        cout << vect[i] << " ";
 
    // Sorting the Vector in Ascending order
    sort(vect.begin(), vect.end());
 
   
    cout << "\nVector after sorting is: ";
    for (int i=0; i<n; i++)
       cout << vect[i] << " ";
 
   
      // Sorting the Vector in Descending order
      sort(vect.begin(),vect.end(), greater<int>());
   
    cout << "\nVector after sorting in Descending order is: ";
        for (int i=0; i<n; i++)
       cout << vect[i] << " ";
   
   
    // Reversing the Vector (descending to ascending , ascending to descending)
    reverse(vect.begin(), vect.end());
 
    cout << "\nVector after reversing is: ";
    for (int i=0; i<n; i++)
        cout << vect[i] << " ";
 
    cout << "\nMaximum element of vector is: ";
    cout << *max_element(vect.begin(), vect.end());
 
    cout << "\nMinimum element of vector is: ";
    cout << *min_element(vect.begin(), vect.end());
 
    // Starting the summation from 0
    cout << "\nThe summation of vector elements is: ";
    cout << accumulate(vect.begin(), vect.end(), 0);
 
    return 0;
}*/

// Output
// Vector is: 10 20 5 23 42 15 
// Vector after sorting is: 5 10 15 20 23 42 
// Vector after sorting in Descending order is: 42 23 20 15 10 5 
// Vector after reversing is: 5 10 15 20 23 42 
// Maximum element of vector is: 42
// Minimum element of vector is: 5
// The summation of vector elements is: 115

// C++ program to demonstrate working of count()
// and find()
/*#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    // Initializing vector with array values
    int arr[] = {10, 20, 5, 23 ,42, 20, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr, arr+n);
 
    cout << "Occurrences of 20 in vector : ";
 
    // Counts the occurrences of 20 from 1st to
    // last element
    cout << count(vect.begin(), vect.end(), 20);
 
    // find() returns iterator to last address if
    // element not present
    find(vect.begin(), vect.end(),5) != vect.end()?
                         cout << "\nElement found":
                     cout << "\nElement not found";
 
    return 0;
}*/
// Output
// Occurrences of 20 in vector : 2
// Element found


// C++ program to demonstrate working of lower_bound()
// and upper_bound().
/*#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    // Initializing vector with array values
    int arr[] = {5, 10, 15, 20, 20, 23, 42, 45};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr, arr+n);
 
    // Sort the array to make sure that lower_bound()
    // and upper_bound() work.
    sort(vect.begin(), vect.end());
 
    // Returns the first occurrence of 20
    auto q = lower_bound(vect.begin(), vect.end(), 20);
 
    // Returns the last occurrence of 20
    auto p = upper_bound(vect.begin(), vect.end(), 20);
 
    cout << "The lower bound is at position: ";
    cout << q-vect.begin() << endl;
 
    cout << "The upper bound is at position: ";
    cout << p-vect.begin() << endl;
 
    return 0;
}*/
// Output
// The lower bound is at position: 3
// The upper bound is at position: 5

// C++ program to demonstrate working
// of erase
/*#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    // Initializing vector with array values
    int arr[] = { 5, 10, 15, 20, 20, 23, 42, 45 };
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vect(arr, arr + n);
 
    cout << "Given Vector is:\n";
    for (int i = 0; i < n; i++)
        cout << vect[i] << " ";
 
    vect.erase(find(vect.begin(),vect.end(),10));
    cout << "\nVector after erasing element:\n";
    for (int i = 0; i < vect.size(); i++)
        cout << vect[i] << " ";
 
    vect.erase(unique(vect.begin(), vect.end()),
               vect.end());
    cout << "\nVector after removing duplicates:\n";
    for (int i = 0; i < vect.size(); i++)
        cout << vect[i] << " ";
 
    return 0;
}*/
// Output
// Given Vector is:
// 5 10 15 20 20 23 42 45 
// Vector after erasing element:
// 5 15 20 20 23 42 45 
// Vector after removing duplicates:
// 5 15 20 23 42 45 

// C++ program to demonstrate working
// of next_permutation()
// and prev_permutation()
/*#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    // Initializing vector with array values
    int arr[] = {5, 10, 15, 20, 20, 23, 42, 45};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr, arr+n);
 
    cout << "Given Vector is:\n";
    for (int i=0; i<n; i++)
        cout << vect[i] << " ";
 
    // modifies vector to its next permutation order
    next_permutation(vect.begin(), vect.end());
    cout << "\nVector after performing next permutation:\n";
    for (int i=0; i<n; i++)
        cout << vect[i] << " ";
 
    prev_permutation(vect.begin(), vect.end());
    cout << "\nVector after performing prev permutation:\n";
    for (int i=0; i<n; i++)
        cout << vect[i] << " ";
 
    return 0;
}*/
// Output
// Given Vector is:
// 5 10 15 20 20 23 42 45 
// Vector after performing next permutation:
// 5 10 15 20 20 23 45 42 
// Vector after performing prev permutation:
// 5 10 15 20 20 23 42 45 

// C++ program to demonstrate working of distance()
/*#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    // Initializing vector with array values
    int arr[] = {5, 10, 15, 20, 20, 23, 42, 45};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr, arr+n);
 
    // Return distance of first to maximum element
    cout << "Distance between first to max element: ";
    cout << distance(vect.begin(),
                     max_element(vect.begin(), vect.end()));
    return 0;
}*/
// Output
// Distance between first to max element: 7

//****************************************************************************
//array algorithms

// C++ code to demonstrate working of all_of()
/*#include<iostream>
#include<algorithm> // for all_of()
using namespace std;
int main()
{
    // Initializing array
    int ar[6] =  {1, 2, 3, 4, 5, -6};
 
    // Checking if all elements are positive
    all_of(ar, ar+6, [](int x) { return x>0; })?
          cout << "All are positive elements" :
          cout << "All are not positive elements";
 
    return 0;
 
}
// Output:

// All are not positive elements
// Time Complexity: O(n)
// Auxiliary Space: O(1)
// In the above code, -6 being a negative element negates the condition and returns false. 

// C++ code to demonstrate working of any_of()
#include<iostream>
#include<algorithm> // for any_of()
using namespace std;
int main()
{
    // Initializing array
    int ar[6] =  {1, 2, 3, 4, 5, -6};
 
    // Checking if any element is negative
    any_of(ar, ar+6, [](int x){ return x<0; })?
          cout << "There exists a negative element" :
          cout << "All are positive elements";
 
    return 0;
 
}*/
// Output:

// There exists a negative element
// Time Complexity: O(n)
// Auxiliary Space: O(1)

// In above code, -6 makes the condition positive. 

// C++ code to demonstrate working of none_of()
/*#include<iostream>
#include<algorithm> // for none_of()
using namespace std;
int main()
{
    // Initializing array
    int ar[6] =  {1, 2, 3, 4, 5, 6};
 
    // Checking if no element is negative
    none_of(ar, ar+6, [](int x){ return x<0; })?
          cout << "No negative elements" :
          cout << "There are negative elements";
 
    return 0;
}*/
// Output:

// No negative elements
// Time Complexity: O(n)
// Auxiliary Space: O(1)

// Since all elements are positive, the function returns true. 

// C++ code to demonstrate working of copy_n()
/*#include<iostream>
#include<algorithm> // for copy_n()
using namespace std;
int main()
{
    // Initializing array
    int ar[6] =  {1, 2, 3, 4, 5, 6};
 
    // Declaring second array
    int ar1[6];
 
    // Using copy_n() to copy contents
    copy_n(ar, 6, ar1);
 
    // Displaying the copied array
    cout << "The new array after copying is : ";
    for (int i=0; i<6 ; i++)
       cout << ar1[i] << " ";
 
    return 0;
 
}*/
// Output:

// The new array after copying is : 1 2 3 4 5 6
// Time Complexity: O(n)
// Auxiliary Space: O(n)

// In the above code, the elements of ar are copied in ar1 using copy_n() 

// C++ code to demonstrate working of iota()
/*#include<iostream>
#include<numeric> // for iota()
using namespace std;
int main()
{
    // Initializing array with 0 values
    int ar[6] =  {0};
 
    // Using iota() to assign values
    iota(ar, ar+6, 20);
 
    // Displaying the new array
    cout << "The new array after assigning values is : ";
    for (int i=0; i<6 ; i++)
       cout << ar[i] << " ";
 
    return 0;
 
}*/
// Output:

// The new array after assigning values is : 20 21 22 23 24 25
// Time Complexity: O(n)
// Auxiliary Space: O(1)

// In the above code, continuous values are assigned to array using iota(). 

//***************************************************************************************
//partition algo

// C++ code to demonstrate the working of
// partition() and is_partitioned()
/*#include<iostream>
#include<algorithm> // for partition algorithm
#include<vector> // for vector
using namespace std;
int main()
{
    // Initializing vector
    vector<int> vect = { 2, 1, 5, 6, 8, 7 };
     
    // Checking if vector is partitioned
    // using is_partitioned()
    is_partitioned(vect.begin(), vect.end(), [](int x)
    {
        return x%2==0;
         
    })?
     
    cout << "Vector is partitioned":
    cout << "Vector is not partitioned";
    cout << endl;
     
    // partitioning vector using partition()
    partition(vect.begin(), vect.end(), [](int x)
    {
        return x%2==0;
         
    });
     
    // Checking if vector is partitioned
    // using is_partitioned()
    is_partitioned(vect.begin(), vect.end(), [](int x)
    {
        return x%2==0;
         
    })?
     
    cout << "Now, vector is partitioned after partition operation":
    cout << "Vector is still not partitioned after partition operation";
    cout << endl;
     
    // Displaying partitioned Vector
    cout << "The partitioned vector is : ";
    for (int &x : vect) cout << x << " ";
     
    return 0;
     
}*/
// Output: 

// Vector is not partitioned
// Now, vector is partitioned after partition operation
// The partitioned vector is : 2 8 6 5 1 7
// In the above code, partition function partitions the vector depending on whether an element is even or odd, 
// even elements are partitioned from odd elements in no particular order. 


// C++ code to demonstrate the working of
// stable_partition() and partition_point()
/*#include<iostream>
#include<algorithm> // for partition algorithm
#include<vector> // for vector
using namespace std;
int main()
{
    // Initializing vector
    vector<int> vect = { 2, 1, 5, 6, 8, 7 };
     
    // partitioning vector using stable_partition()
    // in sorted order
    stable_partition(vect.begin(), vect.end(), [](int x)
    {
        return x%2 == 0;       
    });
     
    // Displaying partitioned Vector
    cout << "The partitioned vector is : ";
    for (int &x : vect) cout << x << " ";
    cout << endl;
     
    // Declaring iterator
    vector<int>::iterator it1;
     
    // using partition_point() to get ending position of partition
    auto it = partition_point(vect.begin(), vect.end(), [](int x)
    {
        return x%2==0;
         });
     
    // Displaying partitioned Vector
    cout << "The vector elements returning true for condition are : ";
    for ( it1= vect.begin(); it1!=it; it1++)
    cout << *it1 << " ";
    cout << endl;
     
    return 0;
     
}*/
// Output: 

// The partitioned vector is : 2 6 8 1 5 7 
// The vector elements returning true for condition are : 2 6 8
// In the above code, even and odd elements are partitioned and in the increasing order (sorted). 
// Not always in increasing order though, here the elements (even and odd) appeared in increased order so is the result after partition. 
// if vect would have been { 2,1,7,8,6,5 } after stable_partition() it would be  { 2,8,6,1,7,5 }. The order of appearance is maintained.


// C++ code to demonstrate the working of
// partition_copy()
/*#include<iostream>
#include<algorithm> // for partition algorithm
#include<vector> // for vector
using namespace std;
int main()
{
    // Initializing vector
    vector<int> vect = { 2, 1, 5, 6, 8, 7 };
     
    // Declaring vector1
    vector<int> vect1;
     
    // Declaring vector1
    vector<int> vect2;
     
    // Resizing vectors to suitable size using count_if() and resize()
    int n = count_if (vect.begin(), vect.end(), [](int x)
    {
        return x%2==0;
         
    } );
    vect1.resize(n);
    vect2.resize(vect.size()-n);
     
    // Using partition_copy() to copy partitions
    partition_copy(vect.begin(), vect.end(), vect1.begin(),
                                     vect2.begin(), [](int x)
    {
        return x%2==0;
    });

    // Displaying partitioned Vector
    cout << "The elements that return true for condition are : ";
    for (int &x : vect1)
            cout << x << " ";
    cout << endl;
     
    // Displaying partitioned Vector
    cout << "The elements that return false for condition are : ";
    for (int &x : vect2)
            cout << x << " ";
    cout << endl;
     
    return 0;   
}*/

// Output: 
// The elements that return true for condition are : 2 6 8 
// The elements that return false for condition are : 1 5 7

//****************************************************************************************
//valarray class

// C++ code to demonstrate the working of
// apply() and sum()
/*#include<iostream>
#include<valarray> // for valarray functions
using namespace std;
int main()
{
    // Initializing valarray
    valarray<int> varr = { 10, 2, 20, 1, 30 };
     
    // Declaring new valarray
    valarray<int> varr1 ;
     
    // Using apply() to increment all elements by 5
    varr1 = varr.apply([](int x){return x=x+5;});
     
    // Displaying new elements value
    cout << "The new valarray with manipulated values is : ";
    for (int &x: varr1) cout << x << " ";
    cout << endl;
     
    // Displaying sum of both old and new valarray
    cout << "The sum of old valarray is : ";
    cout << varr.sum() << endl;
    cout << "The sum of new valarray is : ";
    cout << varr1.sum() << endl;
 
    return 0;
     
}*/
// Output:

// The new valarray with manipulated values is : 15 7 25 6 35 
// The sum of old valarray is : 63
// The sum of new valarray is : 88
// Time Complexity: O(n)

// Space Complexity: O(n)

// C++ code to demonstrate the working of
// max() and min()
/*#include<iostream>
#include<valarray> // for valarray functions
using namespace std;
int main()
{
    // Initializing valarray
    valarray<int> varr = { 10, 2, 20, 1, 30 };
     
    // Displaying largest element of valarray
    cout << "The largest element of valarray is : ";
    cout << varr.max() << endl;
     
    // Displaying smallest element of valarray
    cout << "The smallest element of valarray is : ";
    cout << varr.min() << endl;
 
    return 0;
     
}*/
// Output:
// The largest element of valarray is : 30
// The smallest element of valarray is : 1
// Time Complexity: O(n)
// Space Complexity: O(n)


// C++ code to demonstrate the working of
// shift() and cshift()
/*#include<iostream>
#include<valarray> // for valarray functions
using namespace std;
int main()
{
    // Initializing valarray
    valarray<int> varr = { 10, 2, 20, 1, 30 };
     
    // Declaring new valarray
    valarray<int> varr1;
     
    // using shift() to shift elements to left
    // shifts valarray by 2 position
    varr1 = varr.shift(2);
     
    // Displaying elements of valarray after shifting
    cout << "The new valarray after shifting is : ";
    for ( int&x : varr1) cout << x << " ";
    cout << endl;
     
    // using cshift() to circularly shift elements to right
    // rotates valarray by 3 position
    varr1 = varr.cshift(-3);
     
    // Displaying elements of valarray after circular shifting
    cout << "The new valarray after circular shifting is : ";
    for ( int&x : varr1) cout << x << " ";
    cout << endl;
    return 0;
     
}*/
// Output:
// The new valarray after shifting is : 20 1 30 0 0 
// The new valarray after circular shifting is : 20 1 30 10 2 
// Time Complexity: O(n)
// Space Complexity: O(n)



// C++ code to demonstrate the working of
// swap()
/*#include<iostream>
#include<valarray> // for valarray functions
using namespace std;
int main()
{
// Initializing 1st valarray
    valarray<int> varr1 = {1, 2, 3, 4};
     
    // Initializing 2nd valarray
    valarray<int> varr2 = {2, 4, 6, 8};
     
    // Displaying valarrays before swapping
    cout << "The contents of 1st valarray "
            "before swapping are : ";
    for (int &x : varr1)
        cout << x << " ";
    cout << endl;
    cout << "The contents of 2nd valarray "
            "before swapping are : ";
    for (int &x : varr2)
        cout << x << " ";
    cout << endl;
 
    // Use of swap() to swap the valarrays
    varr1.swap(varr2);
 
    // Displaying valarrays after swapping
    cout << "The contents of 1st valarray "
            "after swapping are : ";
    for (int &x : varr1)
        cout << x << " ";
    cout << endl;
 
    cout << "The contents of 2nd valarray "
            "after swapping are : ";
    for (int &x : varr2)
        cout << x << " ";
    cout << endl;
 
    return 0;
     
}*/
// Output:
// The contents of 1st valarray before swapping are : 1 2 3 4 
// The contents of 2nd valarray before swapping are : 2 4 6 8 
// The contents of 1st valarray after swapping are : 2 4 6 8 
// The contents of 2nd valarray after swapping are : 1 2 3 4 
// Time Complexity: O(n)
// Space Complexity: O(n)


//************************************************************************************
//Containers in C++ STL

/*A container is a holder object that stores a collection of other objects (its elements). 
They are implemented as class templates, which allows great flexibility in the types supported as elements. 
The container manages the storage space for its elements and provides member functions to access them, 
either directly or through iterators (reference objects with similar properties to pointers). 
Sequence containers
Sequence containers implement data structures that can be accessed sequentially.*/

//1. Array class in C++

/*Operations on array :- 
1. at() :- This function is used to access the elements of array. 
2. get() :- This function is also used to access the elements of array. 
This function is not the member of array class but overloaded function from class tuple. 
3. operator[] :- This is similar to C-style arrays. This method is also used to access array elements.*/

// C++ code to demonstrate working of array,
// at() and get()
/*#include<iostream>
#include<array> // for array, at()
#include<tuple> // for get()
using namespace std;
int main()
{
    // Initializing the array elements
    array<int,6> ar = {1, 2, 3, 4, 5, 6};
 
    // Printing array elements using at()
    cout << "The array elements are (using at()) : ";
    for ( int i=0; i<6; i++)
    cout << ar.at(i) << " ";
    cout << endl;
 
    // Printing array elements using get()
    cout << "The array elements are (using get()) : ";
    cout << get<0>(ar) << " " << get<1>(ar) << " ";
    cout << get<2>(ar) << " " << get<3>(ar) << " ";
    cout << get<4>(ar) << " " << get<5>(ar) << " ";
    cout << endl;
 
    // Printing array elements using operator[]
    cout << "The array elements are (using operator[]) : ";
    for ( int i=0; i<6; i++)
    cout << ar[i] << " ";
    cout << endl;
 
    return 0;
 
}*/


// 4. front() :- This returns reference to  the first element of array. 
// 5. back() :- This returns reference to the last element of array.

// C++ code to demonstrate working of
// front() and back()
/*#include<iostream>
#include<array> // including header file to use stl array and there function
using namespace std;
int main()
{
    // Initializing the array elements
    array<int,6> ar = {1, 2, 3, 4, 5, 6};
 
    // Printing first element of array
    cout << "First element of array is : ";
    int &a=ar.front();
    cout <<a<< endl;
 
    // Printing last element of array
    cout << "Last element of array is : ";
    int &b=ar.back();
    cout << b << endl;
      
    //change first and last element of array using these references
    a=10; //now 1 change to 10
    b=60; //now 6 change to 60
     
    //lets print array now
    cout<<"array after updating first and last element \n";
    for (auto x: ar)
    {
      cout<<x<<" ";
    }
    cout<<endl;
        
    return 0;
}*/

// 6. size() :- It returns the number of elements in array. This is a property that C-style arrays lack. 
// 7. max_size() :- It returns the maximum number of elements array can hold i.e, the size with which array 
// is declared. The size() and max_size() return the same value.

// C++ code to demonstrate working of
// size() and max_size()
/*#include<iostream>
#include<array> // for size() and max_size()
using namespace std;
int main()
{
    // Initializing the array elements
    array<int,6> ar = {1, 2, 3, 4, 5, 6};
 
    // Printing number of array elements
    cout << "The number of array elements is : ";
    cout << ar.size() << endl;
 
    // Printing maximum elements array can hold
    cout << "Maximum elements array can hold is : ";
    cout << ar.max_size() << endl;
 
    return 0;
 
}*/


//8. swap() :- The swap() swaps all elements of one array with other.

// C++ code to demonstrate working of swap()
/*#include<iostream>
#include<array> // for swap() and array
using namespace std;
int main()
{
 
    // Initializing 1st array
    array<int,6> ar = {1, 2, 3, 4, 5, 6};
 
    // Initializing 2nd array
    array<int,6> ar1 = {7, 8, 9, 10, 11, 12};
 
    // Printing 1st and 2nd array before swapping
    cout << "The first array elements before swapping are : ";
    for (int i=0; i<6; i++)
    cout << ar[i] << " ";
    cout << endl;
    cout << "The second array elements before swapping are : ";
    for (int i=0; i<6; i++)
    cout << ar1[i] << " ";
    cout << endl;
 
    // Swapping ar1 values with ar
    ar.swap(ar1);
 
    // Printing 1st and 2nd array after swapping
    cout << "The first array elements after swapping are : ";
    for (int i=0; i<6; i++)
    cout << ar[i] << " ";
    cout << endl;
    cout << "The second array elements after swapping are : ";
    for (int i=0; i<6; i++)
    cout << ar1[i] << " ";
    cout << endl;
 
    return 0;
 
}*/


//  9. empty() :- This function returns true when the array size is zero else returns false. 
// 10. fill() :- This function is used to fill the entire array with a particular value.

// C++ code to demonstrate working of empty()
// and fill()
/*#include<iostream>
#include<array> // for fill() and empty()
using namespace std;
int main()
{
 
    // Declaring 1st array
    array<int,6> ar;
 
    // Declaring 2nd array
    array<int,0> ar1;
 
    // Checking size of array if it is empty
    ar1.empty()? cout << "Array empty":
        cout << "Array not empty";
    cout << endl;
 
    // Filling array with 0
    ar.fill(0);
 
    // Displaying array after filling
    cout << "Array after filling operation is : ";
    for ( int i=0; i<6; i++)
        cout << ar[i] << " ";
 
    return 0;
 
}*/

//__________________________________________________________________________________________
//2.Vectors in C++ STL

/*Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, 
with their storage being handled automatically by the container. Vector elements are placed in contiguous storage so that they can be accessed 
and traversed using iterators. In vectors, data is inserted at the end. Inserting at the end takes differential time, 
as sometimes the array may need to be extended. Removing the last element takes only constant time because no resizing happens. 
Inserting and erasing at the beginning or in the middle is linear in time.*/

/*Iterators
begin() – Returns an iterator pointing to the first element in the vector
end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
cbegin() – Returns a constant iterator pointing to the first element in the vector.
cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)*/

// C++ program to illustrate the
// iterators in vector
/*#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    vector<int> g1;
 
    for (int i = 1; i <= 5; i++)
        g1.push_back(i);
 
    cout << "Output of begin and end: ";
    for (auto i = g1.begin(); i != g1.end(); ++i)
        cout << *i << " ";
 
    cout << "\nOutput of cbegin and cend: ";
    for (auto i = g1.cbegin(); i != g1.cend(); ++i)
        cout << *i << " ";
 
    cout << "\nOutput of rbegin and rend: ";
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
        cout << *ir << " ";
 
    cout << "\nOutput of crbegin and crend : ";
    for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
        cout << *ir << " ";
 
    return 0;
}*/
// Output:
// Output of begin and end: 1 2 3 4 5 
// Output of cbegin and cend: 1 2 3 4 5 
// Output of rbegin and rend: 5 4 3 2 1 
// Output of crbegin and crend : 5 4 3 2 1


/*Capacity
size() – Returns the number of elements in the vector.
max_size() – Returns the maximum number of elements that the vector can hold.
capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
resize(n) – Resizes the container so that it contains ‘n’ elements.
empty() – Returns whether the container is empty.
shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
reserve() – Requests that the vector capacity be at least enough to contain n elements.*/

// C++ program to illustrate the
// capacity function in vector
/*#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    vector<int> g1;
 
    for (int i = 1; i <= 5; i++)
        g1.push_back(i);
 
    cout << "Size : " << g1.size();
    cout << "\nCapacity : " << g1.capacity();
    cout << "\nMax_Size : " << g1.max_size();
 
    // resizes the vector size to 4
    g1.resize(4);
 
    // prints the vector size after resize()
    cout << "\nSize : " << g1.size();
 
    // checks if the vector is empty or not
    if (g1.empty() == false)
        cout << "\nVector is not empty";
    else
        cout << "\nVector is empty";
 
    // Shrinks the vector
    g1.shrink_to_fit();
    cout << "\nVector elements are: ";
    for (auto it = g1.begin(); it != g1.end(); it++)
        cout << *it << " ";
 
    return 0;
}*/
// Output:
// Size : 5
// Capacity : 8
// Max_Size : 4611686018427387903
// Size : 4
// Vector is not empty
// Vector elements are: 1 2 3 4


/*Element access
reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
at(g) – Returns a reference to the element at position ‘g’ in the vector
front() – Returns a reference to the first element in the vector
back() – Returns a reference to the last element in the vector
data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.*/

// C++ program to illustrate the
// element access in vector
/*#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    vector<int> g1;
 
    for (int i = 1; i <= 10; i++)
        g1.push_back(i * 10);
 
    cout << "\nReference operator [g] : g1[2] = " << g1[2];
 
    cout << "\nat : g1.at(4) = " << g1.at(4);
 
    cout << "\nfront() : g1.front() = " << g1.front();
 
    cout << "\nback() : g1.back() = " << g1.back();
 
    // pointer to the first element
    int* pos = g1.data();
 
    cout << "\nThe first element is " << *pos;
    return 0;
}*/
// Output:
// Reference operator [g] : g1[2] = 30
// at : g1.at(4) = 50
// front() : g1.front() = 10
// back() : g1.back() = 100
// The first element is 10


/*Modifiers
assign() – It assigns new value to the vector elements by replacing old ones
push_back() – It push the elements into a vector from the back
pop_back() – It is used to pop or remove elements from a vector from the back.
insert() – It inserts new elements before the element at the specified position
erase() – It is used to remove elements from a container from the specified position or range.
swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
clear() – It is used to remove all the elements of the vector container
emplace() – It extends the container by inserting new element at position
emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector*/

// C++ program to illustrate the
// Modifiers in vector
/*#include <bits/stdc++.h>
#include <vector>
using namespace std;
 
int main()
{
    // Assign vector
    vector<int> v;
 
    // fill the vector with 10 five times
    v.assign(5, 10);
 
    cout << "The vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
 
    // inserts 15 to the last position
    v.push_back(15);
    int n = v.size();
    cout << "\nThe last element is: " << v[n - 1];
 
    // removes last element
    v.pop_back();
 
    // prints the vector
    cout << "\nThe vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
 
    // inserts 5 at the beginning
    v.insert(v.begin(), 5);
 
    cout << "\nThe first element is: " << v[0];
 
    // removes the first element
    v.erase(v.begin());
 
    cout << "\nThe first element is: " << v[0];
 
    // inserts at the beginning
    v.emplace(v.begin(), 5);
    cout << "\nThe first element is: " << v[0];
 
    // Inserts 20 at the end
    v.emplace_back(20);
    n = v.size();
    cout << "\nThe last element is: " << v[n - 1];
 
    // erases the vector
    v.clear();
    cout << "\nVector size after erase(): " << v.size();
 
    // two vector to perform swap
    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
 
    cout << "\n\nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
 
    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
 
    // Swaps v1 and v2
    v1.swap(v2);
 
    cout << "\nAfter Swap \nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
 
    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
}*/
// Output:
// The vector elements are: 10 10 10 10 10 
// The last element is: 15
// The vector elements are: 10 10 10 10 10 
// The first element is: 5
// The first element is: 10
// The first element is: 5
// The last element is: 20
// Vector size after erase(): 0

// Vector 1: 1 2 
// Vector 2: 3 4 
// After Swap 
// Vector 1: 3 4 
// Vector 2: 1 2
// The time complexity for doing various operations on vectors is-

// Random access – constant O(1)
// Insertion or removal of elements at the end – constant O(1)
// Insertion or removal of elements – linear in the distance to the end of the vector O(N)
// Knowing the size – constant O(1)
// Resizing the vector- Linear O(N)

//___________________________________________________________________________________________________
//3.Deque in C++ STL

/*Double-ended queues are sequence containers with the feature of expansion and contraction on both ends. 
They are similar to vectors, but are more efficient in case of insertion and deletion of elements. 
Unlike vectors, contiguous storage allocation may not be guaranteed. 
Double Ended Queues are basically an implementation of the data structure double-ended queue. 
A queue data structure allows insertion only at the end and deletion from the front. 
This is like a queue in real life, wherein people are removed from the front and added at the back. 
Double-ended queues are a special case of queues where insertion and deletion operations are possible at both the ends.
The functions for deque are same as vector, with an addition of push and pop operations for both front and back.  

The time complexities for doing various operations on deques are-
Accessing Elements- O(1)
Insertion or removal of elements- O(N)
Insertion or removal of elements at start or end- O(1)*/

// CPP Program to implement Deque in STL
/*#include <deque>
#include <iostream>
 
using namespace std;
 
void showdq(deque<int> g)
{
    deque<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}
 
int main()
{
    deque<int> gquiz;
    gquiz.push_back(10);
    gquiz.push_front(20);
    gquiz.push_back(30);
    gquiz.push_front(15);
    cout << "The deque gquiz is : ";
    showdq(gquiz);
 
    cout << "\ngquiz.size() : " << gquiz.size();
    cout << "\ngquiz.max_size() : " << gquiz.max_size();
 
    cout << "\ngquiz.at(2) : " << gquiz.at(2);
    cout << "\ngquiz.front() : " << gquiz.front();
    cout << "\ngquiz.back() : " << gquiz.back();
 
    cout << "\ngquiz.pop_front() : ";
    gquiz.pop_front();
    showdq(gquiz);
 
    cout << "\ngquiz.pop_back() : ";
    gquiz.pop_back();
    showdq(gquiz);
 
    return 0;
}*/
// Output
// The deque gquiz is :     15    20    10    30

// gquiz.size() : 4
// gquiz.max_size() : 4611686018427387903
// gquiz.at(2) : 10
// gquiz.front() : 15
// gquiz.back() : 30
// gquiz.pop_front() :     20    10    30
// gquiz.pop_back() :     20    10
// Time complexity: O(1).
// Space complexity: O(1).


//________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________
//4.list in C++ STL

/*Lists are sequence containers that allow non-contiguous memory allocation. As compared to the vector, the list has slow traversal, but once a position has been found, insertion and deletion are quick (constant time). Normally, when we say a List, we talk about a doubly linked list. 
For implementing a singly linked list, we use a forward_list.
std::list is the class of the List container. It is the part of C++ Standard Template Library (STL) and is defined inside <list> header file.
Syntax:
std::list <data-type> name_of_list;*/

// C++ program to demonstrate the use of list containers
/*#include <iostream>
#include <list>
using namespace std;
 
int main()
{
    // defining list
    list<int> gqlist{12,45,8,6};
 
    for (auto i : gqlist) {
        cout << i << ' ';
    }
    return 0;
}*/
// Output
// 12 45 8 6 

/*Some Basic Operations on std::list
front() – Returns the value of the first element in the list.
back() – Returns the value of the last element in the list.
push_front() – Adds a new element ‘g’ at the beginning of the list.
push_back() – Adds a new element ‘g’ at the end of the list.
pop_front() – Removes the first element of the list, and reduces the size of the list by 1.
pop_back() – Removes the last element of the list, and reduces the size of the list by 1.
insert() – Inserts new elements in the list before the element at a specified position.
size() – Returns the number of elements in the list.
begin() – begin() function returns an iterator pointing to the first element of the list.
end() – end() function returns an iterator pointing to the theoretical last element which follows the last element.*/

// C++ program to demonstrate the implementation of List
/*#include <iostream>
#include <iterator>
#include <list>
using namespace std;
 
// function for printing the elements in a list
void showlist(list<int> g)
{
    list<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}
 
// Driver Code
int main()
{
 
    list<int> gqlist1, gqlist2;
 
    for (int i = 0; i < 10; ++i) {
        gqlist1.push_back(i * 2);
        gqlist2.push_front(i * 3);
    }
    cout << "\nList 1 (gqlist1) is : ";
    showlist(gqlist1);
 
    cout << "\nList 2 (gqlist2) is : ";
    showlist(gqlist2);
 
    cout << "\ngqlist1.front() : " << gqlist1.front();
    cout << "\ngqlist1.back() : " << gqlist1.back();
 
    cout << "\ngqlist1.pop_front() : ";
    gqlist1.pop_front();
    showlist(gqlist1);
 
    cout << "\ngqlist2.pop_back() : ";
    gqlist2.pop_back();
    showlist(gqlist2);
 
    cout << "\ngqlist1.reverse() : ";
    gqlist1.reverse();
    showlist(gqlist1);
 
    cout << "\ngqlist2.sort(): ";
    gqlist2.sort();
    showlist(gqlist2);
 
    return 0;
}*/
// Output
// List 1 (gqlist1) is :     0    2    4    6    8    10    12    14    16    18
// List 2 (gqlist2) is :     27    24    21    18    15    12    9    6    3    0
// gqlist1.front() : 0
// gqlist1.back() : 18
// gqlist1.pop_front() :     2    4    6    8    10    12    14    16    18
// gqlist2.pop_back() :     27    24    21    18    15    12    9    6    3
// gqlist1.reverse() :     18    16    14    12    10    8    6    4    2
// gqlist2.sort():     3    6    9    12    15    18    21    24    27



//=========================================================================================================
//Container Adaptors: provide a different interface for sequential containers.

//1.queue

/*Queues are a type of container adaptors that operate in a first in first out (FIFO) type of arrangement. 
Elements are inserted at the back (end) and are deleted from the front. 
Queues use an encapsulated object of deque or list (sequential container class) as its underlying container, 
providing a specific set of member functions to access its elements.*/

// CPP code to illustrate Queue in 
// Standard Template Library (STL)
/*#include <iostream>
#include <queue>
  
using namespace std;
  
// Print the queue
void showq(queue<int> gq)
{
    queue<int> g = gq;
    while (!g.empty()) {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}
  
// Driver Code
int main()
{
    queue<int> gquiz;
    gquiz.push(10);
    gquiz.push(20);
    gquiz.push(30);
  
    cout << "The queue gquiz is : ";
    showq(gquiz);
  
    cout << "\ngquiz.size() : " << gquiz.size();
    cout << "\ngquiz.front() : " << gquiz.front();
    cout << "\ngquiz.back() : " << gquiz.back();
  
    cout << "\ngquiz.pop() : ";
    gquiz.pop();
    showq(gquiz);
  
    return 0;
}*/
// Output
// The queue gquiz is :     10    20    30
// gquiz.size() : 3
// gquiz.front() : 10
// gquiz.back() : 30
// gquiz.pop() :     20    30

// CPP code to illustrate Queue operations in  STL
/*#include <iostream>
#include <queue>
  
using namespace std;
  
// Print the queue
void print_queue(queue<int> q)
{
    queue<int> temp = q;
    while (!temp.empty()) {
        cout << temp.front()<<" ";
        temp.pop();
    }
    cout << '\n';
}
  
// Driver Code
int main()
{
    queue<int> q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
  
    cout << "The first queue is : ";
    print_queue(q1);
    
     queue<int> q2;
    q2.push(4);
    q2.push(5);
    q2.push(6);
  
    cout << "The second queue is : ";
    print_queue(q2);
    
    
      q1.swap(q2);
        
      cout << "After swapping, the first queue is : ";
    print_queue(q1);
      cout << "After swapping the second queue is : ";
    print_queue(q2);
    
      cout<<q1.empty();  //returns false since q1 is not empty
  
    return 0;
}*/
// Output
// The first queue is : 1 2 3 
// The second queue is : 4 5 6 
// After swapping, the first queue is : 4 5 6 
// After swapping the second queue is : 1 2 3 0

//__________________________________________________________________________________
//2.Priority Queue in C++ STL

/*A C++ priority queue is a type of container adapter, specifically designed such that the first element 
of the queue is either the greatest or the smallest of all elements in the queue, and elements are in non-increasing or 
non-decreasing order (hence we can see that each element of the queue has a priority {fixed order}).*/

// C++ program to demonstrate the use of priority_queue
/*#include <iostream>
#include <queue>
using namespace std;
 
// driver code
int main()
{
    int arr[6] = { 10, 2, 4, 8, 6, 9 };
 
    // defining priority queue
    priority_queue<int> pq;
 
    // printing array
    cout << "Array: ";
    for (auto i : arr) {
        cout << i << ' ';
    }
    cout << endl;
    // pushing array sequentially one by one
    for (int i = 0; i < 6; i++) {
        pq.push(arr[i]);
    }
 
    // printing priority queue
    cout << "Priority Queue: ";
    while (!pq.empty()) {
        cout << pq.top() << ' ';
        pq.pop();
    }
 
    return 0;
}*/
// Output
// Array: 10 2 4 8 6 9 
// Priority Queue: 10 9 8 6 4 2 


// C++ Program to demonstrate various
//  method/function in Priority Queue
/*#include <iostream>
#include <queue>
using namespace std;
 
// Implementation of priority queue
void showpq(priority_queue<int> gq)
{
    priority_queue<int> g = gq;
    while (!g.empty()) {
        cout << ' ' << g.top();
        g.pop();
    }
    cout << '\n';
}
 
// Driver Code
int main()
{
    priority_queue<int> gquiz;
    // used in inserting the element
    gquiz.push(10);
    gquiz.push(30);
    gquiz.push(20);
    gquiz.push(5);
    gquiz.push(1);
 
    cout << "The priority queue gquiz is : ";
     
    // used for highlighting the element
    showpq(gquiz);
 
    // used for identifying the size
    // of the priority queue
    cout << "\ngquiz.size() : " <<
             gquiz.size();
    // used for telling the top element
    // in priority queue
    cout << "\ngquiz.top() : " <<
             gquiz.top();
 
    // used for popping the element
    // from a priority queue
    cout << "\ngquiz.pop() : ";
    gquiz.pop();
    showpq(gquiz);
 
    return 0;
}*/
// Output
// The priority queue gquiz is :  30 20 10 5 1

// gquiz.size() : 5
// gquiz.top() : 30
// gquiz.pop() :  20 10 5 1


//_____________________________________________________________________________________________________
//3.Stack in C++ STL

/*Stacks are a type of container adaptors with LIFO(Last In First Out) type of working, where a 
new element is added at one end (top) and an element is removed from that end only.  Stack uses an encapsulated 
object of either vector or deque (by default) or list (sequential container class) as its underlying container, 
providing a specific set of member functions to access its elements. 
If there is confusion in remembering the basic difference between stack and queue, then just have a real life 
example for this differentiation, for stack, stacking of books we can take the top book easily and for queue remember 
when you have to stand in queue front of ATM for taking out the cash, then first person near to ATM has the first 
chance to take out the money from ATM. So, queue is the FIFO (First In First Out) type working.*/

/*The functions associated with stack are: 
empty() – Returns whether the stack is empty – Time Complexity : O(1) 
size() – Returns the size of the stack – Time Complexity : O(1) 
top() – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 
pop() – Deletes the most recent entered element of the stack – Time Complexity : O(1) */

/*#include <iostream> 
#include <stack>
using namespace std;
int main() {
    stack<int> stack;
    stack.push(21);// The values pushed in the 
                   //stack should be of the same data which is written during declaration of stack
    stack.push(22);
    stack.push(24);
    stack.push(25);
    int num=0;
      stack.push(num);
    stack.pop();
    stack.pop();
      stack.pop();
    
    while (!stack.empty()) {
        cout << stack.top() <<" ";
        stack.pop();
    }
}*/
// Output
// 22 21 


//===========================================================================================================================
//Associative Containers: implement sorted data structures that can be quickly searched (O(log n) complexity).

//1.Set in C++ STL

/*Sets are a type of associative container in which each element has to be unique because the value of the element identifies it. 
The values are stored in a specific sorted order i.e. either ascending or descending.*/

// C++ Program to Demonstrate
// the basic working of STL
/*#include <iostream>
#include <set>
 
int main()
{
    std::set<char> a;
    a.insert('G');
    a.insert('F');
    a.insert('G');
    for (auto& str : a) {
        std::cout << str << ' ';
    }
    std::cout << '\n';
    return 0;
}*/
// Output
// F G 
// Time complexity: O(N) // N is the size of the set.
// Auxiliary Space: O(N)
// The reason it printed only F and G is that set does not take multiple same values it only accepts a unique value. 
// We can use Multiset if we want to store multiple same values.


/*Set Sorted in Descending Order
By default, the std::set is sorted in ascending order. However, 
we have the option to change the sorting order by using the following syntax.

std::set <data_type, greater<data_type>> set_name;*/

// C++ program to demonstrate the creation of descending
// order set container
/*#include <iostream>
#include <set>
using namespace std;
 
int main()
{
 
    set<int, greater<int> > s1;
    s1.insert(10);
    s1.insert(5);
    s1.insert(12);
    s1.insert(4);
 
    for (auto i : s1) {
        cout << i << ' ';
    }
    return 0;
}*?
// Output
// 12 10 5 4 
// Time complexity: O(N) // N is the size of the set.
// Auxiliary Space: O(N)
// Note: We can use any comparator in place of greater<data_type> to give set a custom order sorting.


/*Some Basic Functions Associated with Set
begin() – Returns an iterator to the first element in the set.
end() – Returns an iterator to the theoretical element that follows the last element in the set.
size() – Returns the number of elements in the set.
max_size() – Returns the maximum number of elements that the set can hold.
empty() – Returns whether the set is empty.
The time complexities for doing various operations on sets are:

Insertion of Elements – O(log N)
Deletion of Elements – O(log N)*/

// C++ program to demonstrate various functions of
// STL
/*#include <iostream>
#include <iterator>
#include <set>
using namespace std;
 
int main()
{
    // empty set container
    set<int, greater<int> > s1;
 
    // insert elements in random order
    s1.insert(40);
    s1.insert(30);
    s1.insert(60);
    s1.insert(20);
    s1.insert(50);
 
    // only one 50 will be added to the set
    s1.insert(50);
    s1.insert(10);
 
    // printing set s1
    set<int, greater<int> >::iterator itr;
    cout << "\nThe set s1 is : \n";
    for (itr = s1.begin(); itr != s1.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;
 
    // assigning the elements from s1 to s2
    set<int> s2(s1.begin(), s1.end());
 
    // print all elements of the set s2
    cout << "\nThe set s2 after assign from s1 is : \n";
    for (itr = s2.begin(); itr != s2.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;
 
    // remove all elements up to 30 in s2
    cout << "\ns2 after removal of elements less than 30 "
            ":\n";
    s2.erase(s2.begin(), s2.find(30));
    for (itr = s2.begin(); itr != s2.end(); itr++) {
        cout << *itr << " ";
    }
 
    // remove element with value 50 in s2
    int num;
    num = s2.erase(50);
    cout << "\ns2.erase(50) : ";
    cout << num << " removed\n";
    for (itr = s2.begin(); itr != s2.end(); itr++) {
        cout << *itr << " ";
    }
 
    cout << endl;
 
    // lower bound and upper bound for set s1
    cout << "s1.lower_bound(40) : "
         << *s1.lower_bound(40) << endl;
    cout << "s1.upper_bound(40) : "
         << *s1.upper_bound(40) << endl;
 
    // lower bound and upper bound for set s2
    cout << "s2.lower_bound(40) : "
         << *s2.lower_bound(40) << endl;
    cout << "s2.upper_bound(40) : "
         << *s2.upper_bound(40) << endl;
 
    return 0;
}*/
// Output
// The set s1 is : 
// 60 50 40 30 20 10 

// The set s2 after assign from s1 is : 
// 10 20 30 40 50 60 

// s2 after removal of elements less than 30 :
// 30 40 50 60 
// s2.erase(50) : 1 removed
// 30 40 60 
// s1.lower_bound(40) : 40
// s1.upper_bound(40) : 30
// s2.lower_bound(40) : 40
// s2.upper_bound(40) : 60

//_______________________________________________________________________________________
//2.Multiset in C++ STL

/*Multisets are a type of associative containers similar to the set, with the exception that multiple elements can have the same values. Some Basic Functions associated with multiset: 

begin() – Returns an iterator to the first element in the multiset –>  O(1)
end() – Returns an iterator to the theoretical element that follows the last element in the multiset –> O(1)
size() – Returns the number of elements in the multiset –> O(1)
max_size() – Returns the maximum number of elements that the multiset can hold –> O(1)
empty() – Returns whether the multiset is empty –> O(1)
insert (x) – Inserts the element x in the multiset –> O(log n)
clear () – Removes all the elements from the multiset –> O(n)
erase(x) – Removes all the occurrences of x –> O(log n)*/

// CPP Program to demonstrate the
// implementation of multiset
/*#include <iostream>
#include <iterator>
#include <set>
 
using namespace std;
 
int main()
{
    // empty multiset container
    multiset<int, greater<int> > gquiz1;
 
    // insert elements in random order
    gquiz1.insert(40);
    gquiz1.insert(30);
    gquiz1.insert(60);
    gquiz1.insert(20);
    gquiz1.insert(50);
 
    // 50 will be added again to
    // the multiset unlike set
    gquiz1.insert(50);
    gquiz1.insert(10);
 
    // printing multiset gquiz1
    multiset<int, greater<int> >::iterator itr;
    cout << "\nThe multiset gquiz1 is : \n";
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
        cout << *itr << " ";
    }
    cout << endl;
 
    // assigning the elements from gquiz1 to gquiz2
    multiset<int> gquiz2(gquiz1.begin(), gquiz1.end());
 
    // print all elements of the multiset gquiz2
    cout << "\nThe multiset gquiz2 \n"
            "after assign from gquiz1 is : \n";
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << *itr << " ";
    }
    cout << endl;
 
    // remove all elements up to element
    // with value 30 in gquiz2
    cout << "\ngquiz2 after removal \n"
            "of elements less than 30 : \n";
    gquiz2.erase(gquiz2.begin(), gquiz2.find(30));
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << *itr << " ";
    }
 
    // remove all elements with value 50 in gquiz2
    int num;
    num = gquiz2.erase(50);
    cout << "\ngquiz2.erase(50) : \n";
    cout << num << " removed \n";
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << *itr << " ";
    }
 
    cout << endl;
 
    // lower bound and upper bound for multiset gquiz1
    cout << "\ngquiz1.lower_bound(40) : \n"
         << *gquiz1.lower_bound(40) << endl;
    cout << "gquiz1.upper_bound(40) : \n"
         << *gquiz1.upper_bound(40) << endl;
 
    // lower bound and upper bound for multiset gquiz2
    cout << "gquiz2.lower_bound(40) : \n"
         << *gquiz2.lower_bound(40) << endl;
    cout << "gquiz2.upper_bound(40) : \n"
         << *gquiz2.upper_bound(40) << endl;
 
    return 0;
}*/
// Output
// The multiset gquiz1 is : 
// 60 50 50 40 30 20 10 

// The multiset gquiz2 
// after assign from gquiz1 is : 
// 10 20 30 40 50 50 60 

// gquiz2 after removal 
// of elements less than 30 : 
// 30 40 50 50 60 
// gquiz2.erase(50) : 
// 2 removed 
// 30 40 60 

// gquiz1.lower_bound(40) : 
// 40
// gquiz1.upper_bound(40) : 
// 30
// gquiz2.lower_bound(40) : 
// 40
// gquiz2.upper_bound(40) : 
// 60


/*Removing Element From Multiset Which Have Same Value:

a.erase() – Remove all instances of element from multiset having the same value
a.erase(a.find()) – Remove only one instance of element from multiset having same value
The time complexities for doing various operations on Multisets are –

Insertion of Elements- O(log N)
Accessing Elements – O(log N)
Deleting Elements- O(log N)*/

// CPP Code to remove an element from multiset which have
// same value
/*#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    multiset<int> a;
    a.insert(10);
    a.insert(10);
    a.insert(10);
 
    // it will give output 3
    cout << a.count(10) << endl;
 
    // removing single instance from multiset
 
    // it will remove only one value of
    // 10 from multiset
    a.erase(a.find(10));
 
    // it will give output 2
    cout << a.count(10) << endl;
 
    // removing all instance of element from multiset
    // it will remove all instance of value 10
    a.erase(10);
 
    // it will give output 0 because all
    // instance of value is removed from
    // multiset
    cout << a.count(10) << endl;
 
    return 0;
}*/
// Output
// 3
// 2
// 0


//________________________________________________________________________________________
//3.Map in C++ STL

/*#include <iostream>
#include <map>
 
int main()
{
  // Create a map of strings to integers
  std::map<std::string, int> map;
 
  // Insert some values into the map
  map["one"] = 1;
  map["two"] = 2;
  map["three"] = 3;
 
  // Get an iterator pointing to the first element in the map
  std::map<std::string, int>::iterator it = map.begin();
 
  // Iterate through the map and print the elements
  while (it != map.end())
  {
    std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
    ++it;
  }

  //print the size of the map
  std::cout<<"size of map: "<< map.size() <<std::endl;
 
  return 0;
}*/
// Output
// Key: one, Value: 1
// Key: three, Value: 3
// Key: two, Value: 2
// size of map: 3


// CPP Program to demonstrate the implementation in Map
// divyansh mishra --> divyanshmishra101010
/*#include <iostream>
#include <iterator>
#include <map>
using namespace std;
 
int main()
{
 
    // empty map container
    map<int, int> gquiz1;
 
    // insert elements in random order
    gquiz1.insert(pair<int, int>(1, 40));
    gquiz1.insert(pair<int, int>(2, 30));
    gquiz1.insert(pair<int, int>(3, 60));
    gquiz1.insert(pair<int, int>(4, 20));
    gquiz1.insert(pair<int, int>(5, 50));
    gquiz1.insert(pair<int, int>(6, 50));
     
      gquiz1[7]=10;     // another way of inserting a value in a map
    
 
    // printing map gquiz1
    map<int, int>::iterator itr;
    cout << "\nThe map gquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
    cout << endl;

    // assigning the elements from gquiz1 to gquiz2
    map<int, int> gquiz2(gquiz1.begin(), gquiz1.end());
 
    // print all elements of the map gquiz2
    cout << "\nThe map gquiz2 after"
         << " assign from gquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
    cout << endl;
 
    // remove all elements up to
    // element with key=3 in gquiz2
    cout << "\ngquiz2 after removal of"
            " elements less than key=3 : \n";
    cout << "\tKEY\tELEMENT\n";
    gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
 
    // remove all elements with key = 4
    int num;
    num = gquiz2.erase(4);
    cout << "\ngquiz2.erase(4) : ";
    cout << num << " removed \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr) {
        cout << '\t' << itr->first << '\t' << itr->second
             << '\n';
    }
 cout << endl;
 
    // lower bound and upper bound for map gquiz1 key = 5
    cout << "gquiz1.lower_bound(5) : "
         << "\tKEY = ";
    cout << gquiz1.lower_bound(5)->first << '\t';
    cout << "\tELEMENT = " << gquiz1.lower_bound(5)->second
         << endl;
    cout << "gquiz1.upper_bound(5) : "
         << "\tKEY = ";
    cout << gquiz1.upper_bound(5)->first << '\t';
    cout << "\tELEMENT = " << gquiz1.upper_bound(5)->second
         << endl;
 
    return 0;
}*/
// Output
// The map gquiz1 is : 
//     KEY    ELEMENT
//     1    40
//     2    30
//     3    60
//     4    20
//     5    50
//     6    50
//     7    10


// The map gquiz2 after assign from gquiz1 is : 
//     KEY    ELEMENT
//     1    40
//     2    30
//     3    60
//     4    20
//     5    50
//     6    50
//     7    10


// gquiz2 after removal of elements less than key=3 : 
//     KEY    ELEMENT
//     3    60
//     4    20
//     5    50
//     6    50
//     7    10

// gquiz2.erase(4) : 1 removed 
//     KEY    ELEMENT
//     3    60
//     5    50
//     6    50
//     7    10

// gquiz1.lower_bound(5) :     KEY = 5        ELEMENT = 50
// gquiz1.upper_bound(5) :     KEY = 6        ELEMENT = 50


//__________________________________________________________________________________
//4.Multimap in C++ STL

/*Multimap is similar to a map with the addition that multiple elements can have the same keys. Also, 
it is NOT required that the key-value and mapped value pair have to be unique in this case. One important thing 
to note about multimap is that multimap keeps all the keys in sorted order always. These properties of multimap 
make it very much useful in competitive programming.

Some Basic Functions associated with multimap: 

begin() – Returns an iterator to the first element in the multimap
end() – Returns an iterator to the theoretical element that follows last element in the multimap
size() – Returns the number of elements in the multimap
max_size() – Returns the maximum number of elements that the multimap can hold
empty() – Returns whether the multimap is empty
pair<int,int> insert(keyvalue,multimapvalue) – Adds a new element to the multimap*/

//******************************************************************************************************
