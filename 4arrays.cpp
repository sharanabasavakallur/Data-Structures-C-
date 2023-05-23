#include<iostream>
using namespace std;
#include<vector>
#include<limits.h>

/*void swapAlternate(int arr[],int n)
{
    int i=0;
    while(i+1<n){ //i<n-1 (we have to reach last second elt)
        swap(arr[i],arr[i+1]); //inbuilt fun.
        i=i+2; //i+=2;
    }
}

void display(int arr[],int size)
{
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    //Problem-1
    //swap pair of alternate elements in an array

    int even[8]{5,2,9,6,4,9,0,1};
    int odd[5]{1,9,3,8,4};
    
    swapAlternate(even,8);
    swapAlternate(odd,5);
    
    display(even,8);
    display(odd,5);
   

    return 0;
}*/

//******************************************************

//Problem-2
//you have been given an integer array of size N, where N is equal to [2M+1].
//Now in the given array,'M' numbers are present twice and one number is present only once
//you need to find and return  that number which is unique in the array
//ex:2 3 1 6 3 6 2
//output:1

//Hint:wkt two same elts will cancel out each other and remaining one is unique (while adding)
//we use the XOR propery (if we XOR two same elts then result will be 0) and then XORing 0 with remaining unique elt will give us output
//a^a=0 and 0^b=b.

/*int findUinque(int *arr,int size){
    int ans=0;

    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int a[20],size;
    cout<<"enter the size of array:";
    cin>>size;
    cout<<"enter "<<size<<" elts of array:";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    
    cout<<"unique elt in the array is :"<<findUinque(a,size)<<endl;

    return 0;
}
*/

//***************************************************************

//Problem-3
//Unique Number of Occurrences
//Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

//Input: arr = [1,2,2,1,1,3]
//Output: true
//Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.

//Input: arr = [1,2]
//Output: false

/*
bool uniqueOccurrences(vector<int>& arr) {
        int i = 0;
        sort(arr.begin(),arr.end());
        vector<int> ans;
        while (i < arr.size()){
            int count = 1;
            for (int j = i+1; j< arr.size(); j++){
                if (arr[i] == arr[j])
                    count++;
            }
            ans.push_back(count);
            i = i + count;
        }
        sort(ans.begin(),ans.end());
        for (int i = 0; i < ans.size() - 1; i++){
            if (ans[i] == ans [i+1])
                return false;
        }
        return true;
}
int main(){
    int a[20],size;
    cout<<"enter the size of array:";
    cin>>size;
    cout<<"enter "<<size<<" elts of array:";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }

return 0;
}
*/


//Problem-4
//Duplicate in array
//You are given an array of integers containing N elements.each integer is in the
//range[1,N-1] ,with exactly one element repeated in the array
//your task is to find  the duplicate element.the duplicate element may be repeated more than twice
//in the error,but there will be exactly one element that is repeated in the array

//input:5
//      1 3 4 2 2
//ouput:2

/*
//bruteforce approach
int duplicate(int arr[],int n){
    int count[n]{},i=0;
    while(i<n)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            continue;
            if(arr[i]==arr[j]){
                return arr[i]; //becz it's repeatted
            }
        }
        i++;
    }
  
}*/

/*
//optimized:firstly XORing all array elts and then XORing the result with 1 to N-1 (so that all same elts cancelout each other)
//and the one that is repeated will be remained
int duplicate(int arr[],int n){
    int ans=0;

    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }

    for(int i=1;i<n;i++){
        ans=ans^i;
    }

    return ans;

}

int main(){
    int a[20],size;
    cout<<"enter the size of array:";
    cin>>size;
    cout<<"enter "<<size<<" elts of array:";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }

    cout<<"duplicate in the array is :"<<duplicate(a,size)<<endl;
return 0;
}
*/

//*************************************************************
//Problem-5
//find all duplicates in an array
//Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.
//You must write an algorithm that runs in O(n) time and uses only constant extra space.

// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [2,3]

// Input: nums = [1]
// Output: []

/*
//Bruteforce
void allduplicates(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]!=arr[j])
            continue;
            else
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}
*/
//???????
/*
int main(){
    int a[20],size;
    cout<<"enter the size of array:";
    cin>>size;
    cout<<"enter "<<size<<" elts of array:";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }

    allduplicates(a,size);
return 0;
}
*/

//*************************************************************************
//Problem-6
//Intersection of 2-arrays
//you are given two arrays A and B of size N and M respectively.Both these arrays are sorted in non-decresing order.
//you have to find  the intersection of these two arrays 
//intersection of two arrays is an array that consist of all the common elts occuring in both arrays

//input:
// 2
// 6 4
// 1 2 2 2 3 4
// 2 2 3 3
// 3 2
// 1 2 3
// 3 4 
//output:
// 2 2 3
// 3  

/*
//bruteforce
void intersection(int *arr1,int *arr2,int n1,int n2){
    for(int i=0;i<n1;i++)
    {
        int elt=arr1[i];
        for(int j=0;j<n2;j++)
        {
            if(elt==arr2[j]){
                cout<<elt<<" ";
                arr2[j]=INT_MIN; //mark the matched elt so that it shouldnt be compared next time
                break;            
            }
        }
    }
    cout<<endl;
}
*/

/*
void intersection(int *arr1,int *arr2,int n1,int n2)
{
    //two-pointer approach..
    int i=0,j=0;

    while(i<n1 && j<n2){//we make use of non-decreasing order of both arrays

        if(arr1[i]==arr2[j]){ //elements matched..
        cout<<arr1[i]<<" ";
        i++;
        j++;
        }

        else if(arr1[i]<arr2[j])
        i++; 

        else
        j++;
    }
    cout<<endl;
}
int main(){
    int a[20],b[20],size_a,size_b;
    cout<<"enter the size of array a:";
    cin>>size_a;
    cout<<"enter "<<size_a<<" elts of array a in non-decreasing order:";
    for(int i=0;i<size_a;i++)
    {
        cin>>a[i];
    }

    cout<<"enter the size of array b:";
    cin>>size_b;
    cout<<"enter "<<size_b<<" elts of array b in non-decreasing order:";
    for(int i=0;i<size_b;i++)
    {
        cin>>b[i];
    }

    intersection(a,b,size_a,size_b);
return 0;
}*/

//******************************************************************************
//Problem-7
//Pair Sum
//You are given an array on N size and integer S.Your task is to return the list of pairs of elts
//such that each sum of elements of each pair equals 'S'
//all pairs should be in sorted order

/*void pairSum(int arr[],int n,int S)
{
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==S){
                cout<<min(arr[i],arr[j])<<","<<max(arr[i],arr[j])<<endl;
            }
        }
    }
}
int main(){
    int a[20],size;
    cout<<"enter the size of array:";
    cin>>size;
    cout<<"enter "<<size<<" elts of array:";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    int s;
    cout<<"enter the sum:";
    cin>>s;
    pairSum(a,size,s);
 
return 0;
}
*/

//***********************************************************************
//Problem-8
//Triplet Sum
//same as Pair Sum but three loops

//********************************************************************
//Sort 0s and 1s

/*
//bruteforce
void sort01(int *arr,int n)
{
    int cnt0=0,cnt1=0;
    for(int i=0;i<n;i++)
    if(arr[i]==0)
    cnt0++;
    else
    cnt1++;

    cout<<"sorted array is\n";
    for(int i=0;i<cnt0;i++){
        cout<<"0 ";
    }
    for(int i=0;i<cnt1;i++){
        cout<<"1 ";
    }
    cout<<endl;
}*/

/*
//two pointer approach
void sort01(int *arr,int n)
{
    int left=0,right=n-1;
    while(left<right){

        while(arr[left]==0 && left<right) //both conditions are must in every loop
        left++;

        while(arr[right]==1 && left<right)
        right--;

        //we reached here ==> arr[i]=1 and arr[j]=1
        if(arr[left]==1 && arr[right]==0 && left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
        }
        
    }
}
int main(){
    int a[20],size;
    cout<<"enter the size of array:";
    cin>>size;
    cout<<"enter "<<size<<" elts of array:";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    sort01(a,size);
    //displaying
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}*/

//************************************************************************
//Problem-9
//Sort 0s 1s and 2s

/*This problem is also the same as the famous “Dutch National Flag problem”. The problem was proposed by Edsger Dijkstra. The problem is as follows:

Given N balls of colour red, white or blue arranged in a line in random order. 
You have to arrange all the balls such that the balls with the same colours are adjacent with the order of the balls, 
with the order of the colours being red, white and blue (i.e., all red coloured balls come first then the white coloured balls and then the blue coloured balls). 

(ref-gfg)
If the ith element is 0 then swap the element to the low range.
Similarly, if the element is 1 then keep it as it is.
If the element is 2 then swap it with an element in high range.*/

/*void sort012(int a[], int arr_size)
{
    int lo = 0;
    int hi = arr_size - 1;
    int mid = 0;
  
    // Iterate till all the elements
    // are sorted
    while (mid <= hi) {
        switch (a[mid]) {
  
        // If the element is 0
        case 0:
            swap(a[lo++], a[mid++]); //incrementing mid becoz mid was initialized to 0
            break;
  
        // If the element is 1 .
        case 1:
            mid++;
            break;
  
        // If the element is 2
        case 2:
            swap(a[mid], a[hi--]); //mid is not increamenting bcz mid was taken as 0(index)
            break;
        }
    }
}

int main(){
    int a[20],size;
    cout<<"enter the size of array:";
    cin>>size;
    cout<<"enter "<<size<<" elts of array:";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    sort012(a,size);
    //displaying
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}*/


