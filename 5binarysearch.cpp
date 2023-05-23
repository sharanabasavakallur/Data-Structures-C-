#include<iostream>
using namespace std;
#include<limits.h>

/*int binarySearch(int *arr,int size,int key)
{
    int start=0;
    int end=size-1;

    int mid=(start+end)/2;
    //if both start and end are equla to INT_MAX then (start+end) would go beyond integer range.
    //so to avoud that we use 
    //mid=start+(end-start)/2;

    while(start<=end){
        if(key==arr[mid])
        return mid;

        else if(key>arr[mid])
        start=mid+1;

        else
        end=mid-1;

        mid=(start+end)/2;
    }

    //if key not found
    return -1;
}

int main()
{
    int n,arr[20];
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"enter "<<n<<" array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key element to be searched:";
    cin>>key;

    key=binarySearch(arr,n,key);
    (key==-1)?cout<<"key not found!\n":cout<<"key found at index "<<key<<endl;
    return 0;
}*/


//Problem-1
//First and Last Position of an Element In Sorted Array
//You have been given a sorted array ARR consisting of 'N' elements.You are also given an integer 'K'.
//Now,your task is to find the first and last occurrence of 'K' in ARR
//if not found return -1

/*int firstOccur(int *arr,int size,int key)
{
    int start=0;
    int end=size-1;

    int mid=(start+end)/2;
    //if both start and end are equla to INT_MAX then (start+end) would go beyond integer range.
    //so to avoud that we use 
    //mid=start+(end-start)/2;

    int ans=-1; //bydefault ans=-1
    while(start<=end){
        if(key==arr[mid]){
        ans=mid; //store and move left
        end=mid-1; //becoz we have to find first occurrence so move to left..
        }

        else if(key>arr[mid])
        start=mid+1;

        else
        end=mid-1;

        mid=(start+end)/2;
    }

    return ans;
}

int lastOccur(int *arr,int size,int key)
{
    int start=0;
    int end=size-1;

    int mid=(start+end)/2;
    //if both start and end are equla to INT_MAX then (start+end) would go beyond integer range.
    //so to avoud that we use 
    //mid=start+(end-start)/2;

    int ans=-1;

    while(start<=end){
        if(key==arr[mid]){
        ans=mid;
        start=mid+1; //becoz we have to find last occurrence so move to right..
        }

        else if(key>arr[mid])
        start=mid+1;

        else
        end=mid-1;

        mid=(start+end)/2;
    }

    return ans;
}
int main()
{
    int n,arr[20];
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"enter "<<n<<" array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key element to be searched:";
    cin>>key;

    cout<<"first occurrence of "<<key<<" is at index:"<<firstOccur(arr,n,key)<<endl<<endl;
    cout<<"last occurrence of "<<key<<" is at index:"<<lastOccur(arr,n,key)<<endl<<endl;

    cout<<"total no. of occurrences of "<<key<<" are:"<<(lastOccur(arr,n,key)-firstOccur(arr,n,key))+1<<endl;
    return 0;
}*/

//*************************************************************

//Problem-2
//Peak Index in a Mountain Array
//An array arr a mountain if the following properties hold:
// arr.length >= 3
// There exists some i with 0 < i < arr.length - 1 such that:
// arr[0] < arr[1] < ... < arr[i - 1] < arr[i] 
// arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
// Given a mountain array arr, return the index i such that arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

// You must solve it in O(log(arr.length)) time complexity.

//Input: arr = [0,10,5,2]
//Output: 1

/*int peakIndex(int *arr,int n)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;

    while(start<end) //condition must start<end not start<=end(as in binarysearch) becoz when start==end then peak elt is found
    {
        if(arr[mid]<arr[mid+1])//then peak elt is rightside
        {
            start=mid+1;
        }
        else//arr[mid]>=arr[mid+1]
        end=mid;//if we do end=mid-1 then peak elt might go behind mid

        mid=start+(end-start)/2;
    }

    return end;//or start
}

int main()
{
    int arr[20],n;
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"enter the array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"peak element index:"<<peakIndex(arr,n)<<endl;
    return 0;
}*/


// int main()
// {
//     int arr[] = { 0, 1, 0 };
//     cout<<sizeof(arr)<<endl;//3*4=12
//     cout<<sizeof(arr[0])<<endl;//4
//     int N = sizeof(arr) / sizeof(arr[0]);//12/4=3
//     cout<<endl<<N<<endl;

//     cout<<sizeof(int)<<endl;//4
 
//     return 0;
// }

//***********************************************************************

//Problem-3(refer pg-15)
//find pivot element in array(the smallest)

/*int getPivotIndex(int *arr,int n)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    //we have to find smallest no. if we do using loop then t.c will be O(n) so we go for O(log n)
    while(start<end) //condition must start<end not start<=end(as in binarysearch)
    {
        if(arr[mid]>arr[0])//then mid lies on first line(but we want pivot in second line)
        {
            start=mid+1;
        }
        else//arr[mid]<=arr[0]..then mid lies in second line (where pivot might present)
        end=mid;//if we do end=mid-1 then pivot elt might go behind mid

        mid=start+(end-start)/2;
    }

    return end;//or start
}

int main()
{
    int arr[20],n;
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"enter the array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"pivot element of array is:"<<arr[getPivotIndex(arr,n)]<<endl;
    return 0;
}*/

//********************************************************************
//Problem-4
//Search in rotated sorted array
//you have given a sorted array consisting of n elts.you are also given an integer k
//now this array is rotated at some point unknown to you.for ex. if arr=[1,3,5,7]
//then after rotating arr at index 3.the array will be arr=[7,8,1,3,5]
//now your task is to find the index at which 'k' is present in arr

//approach:wkt pivot elt exist in 2nd line and arr[n-1](last elt) also in 2nd line 
//and arr[0](first elt) exist in 1st line
//both lines are sorted in order independently
//so first check k lies in which line then binary search on that line
//for line (refer pg-15)


/*int getPivotIndex(int *arr,int n)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    //we have to find smallest no. if we do using loop then t.c will be O(n) so we go for O(log n)
    while(start<end) //condition must start<end not start<=end(as in binarysearch)
    {
        if(arr[mid]>arr[0])//then mid lies on first line(but we want pivot in second line)
        {
            start=mid+1;
        }
        else//arr[mid]<=arr[0]..then mid lies in second line (where pivot might present)
        end=mid;//if we do end=mid-1 then pivot elt might go behind mid

        mid=start+(end-start)/2;
    }

    return end;//or start ..when loop ends start==end
}

int binarySearch(int *arr,int start,int end,int key)
{
    // int start=0;
    // int end=size-1;

    int mid=(start+end)/2;
    //if both start and end are equla to INT_MAX then (start+end) would go beyond integer range.
    //so to avoud that we use 
    //mid=start+(end-start)/2;

    while(start<=end){
        if(key==arr[mid])
        return mid;

        else if(key>arr[mid])
        start=mid+1;

        else
        end=mid-1;

        mid=(start+end)/2;
    }

    //if key not found
    return -1;
}

int findPos(int *arr,int n,int k)
{
    int pivot=getPivotIndex(arr,n);

    if(k>=arr[pivot] && k<=arr[n-1]) //k lies on the second line
    {
        return binarySearch(arr,pivot,n-1,k);
    }
    else //k lies on first line
    return binarySearch(arr,0,pivot-1,k);

}

int main()
{
    int arr[20],n;
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"enter the array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"pivot element of array is:"<<arr[getPivotIndex(arr,n)-1]<<endl;
    int k;
    cout<<"enter the key element to be searched:";
    cin>>k;
    if(findPos(arr,n,k)!=-1)
    cout<<k<<" is present at index:"<<findPos(arr,n,k)<<endl;
    else
    cout<<k<<" is not present in the array"<<endl;
    return 0;
}*/

//****************************************************************************************

//Problem-5
//finding int part of square root of a number using binary search

/*int getRoot(int n){
    int start=0;
    int end=n;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        long long int square=mid*mid;//if mid is very large then square will go out of range of INT so use long long

        if(square==n)
        return mid;

        else if(square<n){
            ans=mid;
            start=mid+1;
        }

        else
        end=mid-1;

        mid=start+(end-start)/2;
    }
    return ans;
}

int main()
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    cout<<"integer part of root of "<<n<<" is "<<getRoot(n)<<endl;
    return 0;
}
*/

//*****************************************************************************
//Problem--6
//find perfect root of a number 

/*int getRoot(int n){
    int start=0;
    int end=n;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        long long int square=mid*mid;//if mid is very large then square will go out of range of INT so use long long

        if(square==n)
        return mid;

        else if(square<n){
            ans=mid;
            start=mid+1;
        }

        else
        end=mid-1;

        mid=start+(end-start)/2;
    }
    return ans;
}

double morePrecision(int n,int precision,int tempSol)
{
    double factor=1;
    double ans=tempSol;
    for(int i=0;i<precision;i++){
        factor=factor/10; //0.1,0.01....

        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    int temp=getRoot(n);
    cout<<"integer part of root of "<<n<<" is "<<temp<<endl;

    cout<<"square root with more precision:"<<morePrecision(n,2,temp)<<endl;
    return 0;
}*/

//or only using one funtion

/*double getRoot(int n){
    int start=0;
    int end=n;
    double mid=start+(end-start)/2;
    double ans=-1;
    while(start<=end){
        long double square=mid*mid;//if mid is very large then square will go out of range of INT so use long long

        if(square==n)
        return mid;

        else if(square<n){
            ans=mid;
            start=mid+1;
        }

        else
        end=mid-1;

        mid=start+(end-start)/2;
    }

    int precison;
    cout<<"enter the precision:";
    cin>>precison;
    double factor=1;

    for(int i=0;i<precison;i++)factor=factor/10;for(double j=ans;j*j<n;j=j+factor)ans=j;
    
    return ans;
}

int main()
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    cout<<"square root of "<<n<<" is "<<getRoot(n)<<endl;
    return 0;
}
*/

//*****************************************************************************
//Problem-7(refer pg-17)
//Problem Statement

// Given an array 'arr' of integer numbers. where 'arr[]' represents the number of pages in
// the i-th' book. There are 'm' number of students and the task is to allocate all the books
// to their students. Allocate books in such a way that:
// 1. Each student gets at least one book.
// 2. Each book should be allocated to a student.
// 3. Book allocation should be in a contiguous manner
// You have to allocate the book to 'm' students such that the maximum number of pages
// assigned to a student is minimum.
// Example:
// Let's consider 'n=4' (number of books ) and 'm=2 (number of students).
// 'arr = {10, 20, 30, 40 }.

//Approach:
// All possible way to allocate the 4' books in 2' number of students is	
// 10 | 20, 30, 40 - sum of all the pages of books which allocated to student-1 is '10, and	
// student-2 is '20+ 30+ 40 = 90' so maximum is 'max(10, 90)= 90.	
// 10, 20 |30, 40 sum of all the pages of books which allocated to student-1 is "10+ 20 =	
// 30, and student-2 is 30+ 40 70' so maximum is 'max(30, 70)= 70'.	
// 10, 20, 30 |40 - sum of all the pages of books which allocated to student-1 is '10+ 20	
// +30 = 60, and student-2 is 40' so maximum is 'max(60, 40)= 60'.	
// So possible maximum number of pages which allocated to a single student is { 90, 70,	
// 60).	
// But you have to return a minimum of this so return 'min(90,70,60) =60.

// 1. Do not print anything, just return the maximum number of pages that	
// are assigned to a student is minimum.	
// 2. If it is not possible to assign the n' books to m' students then	
// return -1'.	


// Sample Input 1:
// 4 2
// 12 34 67 90
// Sample Output 1:
// 113
// Explanation Of Sample Input 1:
// Let’s consider ‘n=4’ (number of books ) and ‘m=2’ (number of students)
// ‘arr = { 12, 34, 67, 90 }’. And ‘m= 2’.
// All possible way to allocate the ‘4’ books in ‘2’ number of students is-

// 12 | 34, 67, 90 - sum of all the pages of books which allocated to student 1 is ‘12’, and student two is ‘34+ 67+ 90 = 191’ so maximum is ‘max(12, 191)= 191’.
// 12, 34 | 67, 90 - sum of all the pages of books which allocated to student 1 is ‘12+ 34 = 46’, and student two is ‘67+ 90 = 157’ so maximum is ‘max(46, 157)= 157’.
// 12, 34, 67 | 90 - sum of all the pages of books which allocated to student 1 is ‘12+ 34 +67 = 113’, and student two is ‘90’ so maximum is ‘max(113, 90)= 113’.

// So possible maximum number of pages which allocated to a single student is { 191, 157, 113 } 
// But you have to return a minimum of this so return ‘min(191,157, 113) =113’.

// Hence answer is ‘113’.

//approach:gfg
// Case 1: When no valid answer exists.

// If the number of students is greater than the number of books (i.e, M > N), 
// In this case at least 1 student will be left to which no book has been assigned.

// Case 2: When a valid answer exists.

// The maximum possible answer could be when there is only one student. So, 
// all the book will be assigned to him and the result would be the sum of pages of all the books.

// The minimum possible answer could be when number of student is equal to the number of book (i.e, M == N) , 
// In this case all the students will get at most one book. So, 
// the result would be the maximum number of pages among them (i.e, maximum(pages[])).

// Hence, we can apply binary search in this given range and each time 
// we can consider the mid value as the maximum limit of pages one can get. 
// And check for the limit if answer is valid then update the limit accordingly.


// Below is the implementation of the above idea:

// -Initialise the start to maximum(pages[]) and end = sum of pages[],
// -Do while start <= end
//     -Calculate the mid and check if mid number of pages can assign any student by satisfying the given condition such that all students will get at least one book. Follow the steps to check for validity.
//         -Initialise the studentsRequired = 1 and curr_sum = 0 for sum of consecutive pages of book
//         -Iterate over all books or say pages[]
//             -Add the pages to curr_sum and check curr_sum > curr_min then increment the count of studentRequired by 1.
//             -Check if the studentRequired > M, return false.
//         -Return true.
//     -If mid is valid then, update the result and move the end = mid – 1
//     -Otherwise, move the start = mid + 1
// -Finally, return the result.

//utility funtions to check if current minimum value is feasible or not
/*bool isPossible(int arr[],int n,int m,int curr_min){
    int studentcount=1;
    int page_sum=0;

    //iterate over all books
    for(int i=0;i<n;i++){
        //check if current no. of pages are greater than curr_min
        //that means we will get the result after mid no. of pages
        if(arr[i]>curr_min)
        return false;

        //count how many students are required to distrubute curr_min pages
        if(page_sum+arr[i] > curr_min){
            //increment student count
            studentcount++;

            //update page_sum
            page_sum=arr[i];

            //if students required becomes greater than given no. of students,
            //return false
            if(studentcount>m)
            return false;
        }

        //else update page_sum
        else
        page_sum+=arr[i];
    }
    //if we reached here then return true
    return true;
}

int findPages(int arr[],int n,int m)
{
    long long sum=0;

    //return -1 if no. of books is less than no. of students
    if(n<m)
    return -1;

    int mx=INT_MIN;

    //count the total no. of pages
    for(int i=0;i<n;i++){
        sum+=arr[i];
        mx=max(mx,arr[i]);
    }

    //intialise start as max(pages[]) pages and end as total pages
    int start=mx,end=sum;
    int result=INT_MIN;

    //traverse until start<=end
    while(start<=end){
        //check if it is possible to distrubute books by using mid as current minimum
        int mid=start+(end-start)/2;

        if(isPossible(arr,n,m,mid)){
            //update result to current distrubution as it's the best we have found till now
            result=mid;

            //as we are finding minimum and books are sorted so reduce end=mid-1
            //that means
            end=mid-1;
        }

        else
        //if not possible means pages should be increased so 
        //update start=mid+1
        start=mid+1;
    }

    //at-last return minimum no. of pages
    return result;

}

//drivers code
int main()
{
    //no.of pages in books
    int arr[]={12,34,67,90};
    int n=sizeof arr/sizeof arr[0];

    int m=2;//no. of students

    cout<<"minimum no. of pages="<<findPages(arr,n,m)<<endl;
    return 0;
}
*/

//***********************************************************************************************
//Problem-8
// Given an array/list of length 'N, where the array/list represents the boards and each	
// element of the given array/list represents the length of each board. Some 'K' numbers of	
// painters are available to paint these boards. Consider that each unit of a board takes 1	
// unit of time to paint.	
// You are supposed to return the area of the minimum time to get this job done of	
// painting all the 'N' boards under a constraint that any painter will only paint the	
// continuous sections of boards.	


// Sample Input 1 :
// 2
// 4 2
// 5 5 5 5
// 4 2
// 10 20 30 40
// Sample Output 1 :
// 10
// 60
// Explanation For Sample Input 1 :
// In the first test case, we can divide the boards into 2 equal-sized partitions, 
// so each painter gets 10 units of the board and the total time taken is 10.


// In the second test case, we can divide the first 3 boards for one painter and the last board for the second painter.

//from gfg

// CPP program for The painter's partition problem
/*#include <climits>
#include <iostream>
using namespace std;
 
// function to calculate sum between two indices
// in array
int sum(int arr[], int from, int to)
{
    int total = 0;
    for (int i = from; i <= to; i++)
        total += arr[i];
    return total;
}
 
// for n boards and k partitions
int partition(int arr[], int n, int k)
{
    // base cases   
    if (k == 1) // one partition
        return sum(arr, 0, n - 1);   
    if (n == 1)  // one board
        return arr[0];
 
    int best = INT_MAX;

     // find minimum of all possible maximum
    // k-1 partitions to the left of arr[i],
    // with i elements, put k-1 th divider
    // between arr[i-1] & arr[i] to get k-th
    // partition
    for (int i = 1; i <= n; i++)
        best = min(best, max(partition(arr, i, k - 1),
                                sum(arr, i, n - 1)));
 
    return best;
}
 
int main()
{
    int arr[] = { 10, 20, 60, 50, 30, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << partition(arr, n, k) << endl;
 
    return 0;
}*/

//Using binary Search

//return maximum element from the array
/*int getMax(int arr[],int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++) if(arr[i]>max) max=arr[i]; return max;
}

//return the sum of the element in the array
int getSum(int arr[],int n)
{
    int total=0;
    for(int i=0;i<n;i++) total+=arr[i]; return total;
}

//find minimum required painters for given maxlen which is the maximum
//length  a painter can paint
int numberOfPainters(int arr[],int n,int maxLen)
{
    int total=0,numPainters=1;

    for(int i=0;i<n;i++){
        total=total+arr[i];

        if(total>maxLen){
            //for next count
            total=arr[i];
            numPainters++;
        }
    }

    return numPainters;
}

int partition(int arr[],int n,int k)
{
    int lo=getMax(arr,n);
    int hi=getSum(arr,n);

    while(lo<hi)
    {
        int mid=lo+(hi-lo)/2;
        int requiredPainters=numberOfPainters(arr,n,mid);

        //find better optimum in lower half here mid is included becoz
        //we may not get anything better
        if(requiredPainters<=k){
            hi=mid;
        }

        //find better optimum in upper half here mid is excluded becoz
        //it gives required painters>k,which is ivalid
        else
            lo=mid+1;
    }

    //required
    return lo; //or hi
}

//driver funtion
int main()
{
    int arr[]={10,20,30,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    cout<<partition(arr,n,k)<<endl;
    return 0;
}*/

//******************************************************************************
//Problem-9(Aggressive Cows)

// PROBLEM STATEMENT
// You are given an array consisting of 'N' integers which denote the position of a stall. 
// You are also given an integer 'K' which denotes the number of aggressive cows. 
// You are given the task of assigning stalls to 'K' cows such that the minimum distance between any two of them is the maximum possible.

// APPROACH 1
// What we are looking for is that we need to place all the K cows in the N stalls such that the minimum distance between any two of them is as large as possible.

// We need to define a check() function that checks if a distance x is possible between each of the cows. 
// We can use a greedy approach here by placing cows at the leftmost possible stalls such that they are at least x distance away from the last-placed cow.

// We need to sort the given array/list so once we have our sorted array, we can apply the whole array of the sorted input, 
// and use our function check(x) to find the largest distance possible. And as soon as you reach a position from where it’s not possible to 
// find a distance from which cows could be safe so we basically break the loop.

// Sample Input 1 :
// 3 2
// 1 2 3
// Sample Output 1 :
// 2
// Explanation To Sample Input 1 :
// The largest minimum distance will 
// be 2 when 2 cows are placed at positions {1, 3}.

#include<algorithm>

bool isPossible(int arr[],int k,int mid,int len)
{
    int cowCount=1;
    int initPosition=arr[0];

    for(int i=0;i<len;i++){
        if(arr[i]-initPosition >= mid){
            cowCount++;

            if(cowCount==k)
            return true;

            initPosition=arr[i];
        }
    }
    return false;
}

int aggressiveCows(int *arr,int k,int len)
{
   
    sort(arr,arr+len);//inbuilt fuction
    int mx=arr[len-1];//after sorting last elt would be maximum

//if array was not sorted..
    // int mn=INT_MAX,mx=INT_MIN;
    // for(int i=0;i<len;i++){
    //     if(arr[i]<=mn)
    //     mn=arr[i];

    //     if(arr[i]>=mx)
    //     mx=arr[i];
    // }

    int start=0,end=mx,ans=-1,mid=start+(end-start)/2;

    while(start<=end){

        if(isPossible(arr,k,mid,len)){
            ans=mid;
            start=mid+1;//go for larger distance
        }
        else
        end=end-1;

        mid=start+(end-start)/2;
    } 
    return ans;
}

int main()
{
    int arr[]{4,2,1,3,6};
    int k=2;
    int len=sizeof(arr)/sizeof(arr[0]);
    cout<<len<<endl;
    cout<<"largest distance :"<<aggressiveCows(arr,k,len)<<endl;

}