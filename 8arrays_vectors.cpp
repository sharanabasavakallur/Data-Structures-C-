//Questiens..

//1.reverse an array
/*#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){
    int start=0,end=v.size()-1;
    while(start<=end){
        swap(v[start],v[end]);
        start++,end--;
    }
    return v;
}

void show(vector<int> v){
    for(int i=0;i<=v.size()-1;i++)
        cout<<v[i]<<" ";
    cout<<endl;
}

int main()
{
    vector<int> v;
    int n,temp;
    cout<<"enter the no. of elements:";
    cin>>n;
    cout<<"enter "<<n<<" elements :";
    for(int i=0;i<n;i++){
        cin>>temp;
        v.push_back(temp);
    }

    cout<<"before reversing:";
    show(v);

    vector<int> ans=reverse(v);
    cout<<"\nafter reversing:";
    show(ans);
}*/

//******************************************************************************
//2.reverse after a given position m
//same but change is start=m+1.

//*****************************************************************************
//3.merge two sorted arrays and make a new array

/*#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int arr1[]{1,3,5,8};
    int arr2[]{2,4,9,10};

    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);

    int ans[n1+n2]{};//initialization of new array 

    //two pointer approach
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j])
            ans[k++]=arr1[i++];
        else
            ans[k++]=arr2[j++];
    }

    //just copy the arr1 elts if left
    while(i<n1)
        ans[k++]=arr1[i++];

    //just copy the arr2 elts if left
    while(j<n2)
        ans[k++]=arr2[j++];

    cout<<"the new merged array will be:";
    for(int l=0;l<(n1+n2);l++)
        cout<<l<<" "<<ans[l]<<endl;
    cout<<endl;
}*/

//withoud using the new array

/*#include<iostream>
#include<vector>
using namespace std;

void show(int *arr,int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int nums1[]{1,2,3,0,0,0};
    int nums2[]{2,5,6};

    int m=sizeof(nums1)/sizeof(nums1[0]);
    int n=sizeof(nums2)/sizeof(nums2[0]);

    int i=0,j=0;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                i++;
            }
            else{
                nums1[i+1]=nums1[i]; //shifting current elt to next pos.
                nums1[i++]=nums2[j++];//and copying nums2[j] to nums1[i]
            }
            cout<<"nums1: ";
            show(nums1,m);
            cout<<"nums2: ";
            show(nums2,n);
            cout<<"i="<<i<<" and j="<<j<<endl<<endl;
        }

        //n-j are the remaining elts of nums2
        //so decrese i (n-j) positions bcz i would have reached m back ans start copying
        i=i-(n-j);
        while(j<n)
            nums1[i++]=nums2[j++];

        show(nums1,m);

}*/

//*************************************************************************************************
//3.move zeroes
//Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.

// Example 1:
// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]
// Example 2:
// Input: nums = [0]
// Output: [0]
/*#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int>& nums)
{
    //shift all nonzeroes to left
    int i=0; //i as nonzero index(leftmost)
    for(int j=0;j<nums.size();j++){
        if(nums[j]!=0){
            swap(nums[j],nums[i]);
            i++;
        }
        cout<<"round "<<j+1<<endl;
        for(int k=0;k<nums.size();k++)
        cout<<nums[k]<<" ";
        cout<<endl;
    }
} 

int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(3);
    v.push_back(12);

    moveZeroes(v);

    cout<<"after moving zeroes:";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}*/

//*******************************************************************************
//4.Rotate array
//rotate given array to the right by k steps,where k is non-negative

/*#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int>& v,int k)
{
    //make a empty temp. vector of same size to prevent over writing
    vector<int> temp(v.size());

    for(int i=0;i<=temp.size()-1;i++){
        temp[(i+k)%temp.size()]=v[i]; //using % to preserve size
    }

    //copy back
    v=temp;
}

int main()
{
    vector<int> v;
    for(int i=0;i<5;i++)
        v.push_back(i);

    cout<<"before rotating:"<<endl;
    for(int i=0;i<=v.size()-1;i++)
        cout<<v[i]<<endl;
    cout<<endl;
    
    int k;
    cout<<"enter value of k:";
    cin>>k;
    rotate(v,k);

    cout<<"after rotating "<<k<<" positions to right:"<<endl;
    for(int i=0;i<=v.size()-1;i++)
        cout<<v[i]<<endl;
    cout<<endl;
}*/

//*************************************************************************************
//5.Check if array is sorted and rotated(pg 22)

/*#include<iostream>
#include<vector>
using namespace std;

// bool isrotatedsorted(vector<int>& v)
// {
//     int n=v.size(),count=0;
//     for(int i=0;i<n;i++){
//         if(v[i]>v[(i+1)%n]) //there'll atmost one pair where v[i]>v[i+1] 
//         count++;
//     }
//     //if count=1(sorted and rotated) 
//     //if count=0(all elts are equal)
//     //if count>1(not sorted and rotated)
//     return count<=1;
// }

//optimized(0ms the above one's 6ms)
bool isrotatedsorted(vector<int>& v)
{
    int n=v.size(),count=0;
    for(int i=1;i<n;i++){
        if(v[i-1]>v[i]) //there'll atmost one pair where v[i]>v[i+1] 
        count++;
    }
    if(v[n-1]>v[0])
    count++;
    //if count=1(sorted and rotated) 
    //if count=0(all elts are equal)
    //if count>1(not sorted and rotated)
    return count<=1;
}

int main()
{
    vector<int> v;
    int temp,n;
    cout<<"enter the no. of elts:";
    cin>>n;

    cout<<"enter those "<<n<<" elts:";
    for(int i=0;i<n;i++){
        cin>>temp;
        v.push_back(temp);
    }

    isrotatedsorted(v)?cout<<"sorted and rotated\n":cout<<"not sorted and rotated\n";
}*/

//**********************************************************************************
//6.sum of two arrays(pg23)

#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>& v)
{
    //two ptr approach
    int i=0,j=v.size()-1;

    while(i<=j){
        swap(v[i++],v[j--]);
    }
}

vector<int> sum(vector<int>& a,int n,vector<int>& b,int m)
{
    vector<int> ans;
    int i=n-1,j=m-1,carry=0;

    while(i>=0 && j>=0){
        int sum=a[i--]+b[j--]+carry;
        carry=sum/10;
        sum=sum%10;

        ans.push_back(sum);
    }

    //case 1(if vector a is bigger than b then some elts of a will be left)
    while(i>=0){
        int sum=a[i--]+carry;
        carry=sum/10;
        sum=sum%10;

        ans.push_back(sum);
    }   

    //case 2(reverse of case 1)
    while(j>=0){
        int sum=b[j--]+carry;
        carry=sum/10;
        sum=sum%10;

        ans.push_back(sum);
    }

    //when carry is non-zero just push to the ans
    if(carry>0){
        ans.push_back(carry);
    }

    //since we were pushing from right end so we want to return (left to right) so reverse ans vector
    reverse(ans);
    return ans;
}

int main()
{
    vector<int> v1,v2,ans;
    int temp,n,m;
    cout<<"enter the no. of elts of v1:";
    cin>>n;

    cout<<"enter those "<<n<<" elts:";
    for(int i=0;i<n;i++){
        cin>>temp;
        v1.push_back(temp);
    }

    cout<<"enter the no. of elts of v2:";
    cin>>m;

    cout<<"enter those "<<m<<" elts:";
    for(int i=0;i<m;i++){
        cin>>temp;
        v2.push_back(temp);
    }

    ans=sum(v1,n,v2,m);
    cout<<"the sum vector is:"<<endl;
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    cout<<endl;
}