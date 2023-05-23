/*#include<iostream>
#include<limits.h>
using namespace std;

void rowcolsum(int arr[][10],int rows,int cols)
{
    //row sum
    int row_index;
    int maxi=INT_MIN; //worst case
    for(int i=0;i<rows;i++){
        int sum=0;
        for(int j=0;j<cols;j++){
            sum=sum+arr[i][j];
        }

        if(sum > maxi){
            maxi=sum;
            row_index=i+1; //storing max row index
        }
        cout<<"row "<<i+1<<" sum is->"<<sum<<endl;
    }
    cout<<"maximum row sum is "<<maxi<<" at row->"<<row_index<<endl;

    //col sum
    cout<<endl;
    int col_index;
    int mini=INT_MAX; //worst case
    for(int i=0;i<cols;i++){ //col
        int sum=0;
        int j=0;
        for(;j<rows;j++){
            sum=sum+arr[j][i];//in array's first squ.bracket the var.in the outer loop should be there for 
                              //for considering col wise elts and second squ.bracket for var. in the outer loop and 
                              //vice-versa for considering row wise elts
        }
        if(sum < mini){
            mini=sum;
            col_index=i+1; //storing min col index
        }
        cout<<"col "<<i+1<<" sum is->"<<sum<<endl;
    }
    cout<<"minimum col sum is "<<mini<<" at col->"<<col_index<<endl;

}

void readandisplay(int arr[][10],int rows,int cols)
{
    cout<<"enter "<<rows*cols<<" elts:";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"\nthe entered array is :\n";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int arr[10][10],rows,cols;
    cout<<"enter the no. of rows:";
    cin>>rows;
    cout<<"enter the no. of cols:";
    cin>>cols;

    //reading array elts and displaying
    readandisplay(arr,rows,cols);

    //rowwise and colwise sum
    rowcolsum(arr,rows,cols);
}
*/

//******************************************************************************
//1.print like a wave
//ex:
//if array is:1 2
//            3 4
//o/p will be {1,3,4,2}

//approach : for even cols print top to bottum and for odd cols print bottum up

/*#include<iostream>
using namespace std; 

void printwave(int arr[][10],int nrows,int ncols)
{
    //for each column
    for(int col=0;col<ncols;col++){

        //for odd cols bottum to top(from last row to first row)
        if(col&1){//codition for odd col

            for(int row=nrows-1;row>=0;row--)
            cout<<arr[row][col]<<" ";
        }

        //for even cols top to down(from first row to last row)
        else{

            for(int row=0;row<nrows;row++)
            cout<<arr[row][col]<<" ";
        }
    }
}

void readandisplay(int arr[][10],int rows,int cols)
{
    cout<<"enter "<<rows*cols<<" elts:";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"\nthe entered array is :\n";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main()
{
    int arr[10][10],rows,cols;
    cout<<"enter the no. of rows and cols:";
    cin>>rows>>cols;

    //reading array elts and displaying
    readandisplay(arr,rows,cols);

    //wave like printing
    printwave(arr,rows,cols);
}*/

//*****************************************************************************************************
//2.print spiral matrix
//ex:1 2 3
//   4 5 6
//   7 8 9
//o/p:{1,2,3,6,9,8,7,4,5}

//approach:print first row(left to right)
//         print last col(top to bottum)
//         print last row (right to left)
//         print first col(bottum to top) ..

/*#include<iostream>
#include<vector>
#include<time.h>
using namespace std;

void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;
 
    // Storing start time
    clock_t start_time = clock();
 
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}

vector<int> spiralOrder(vector<vector<int>>& matrix)
{
    vector<int> ans;

    int row=matrix.size();
    int col=matrix[0].size();

    int count=0;
    int total=row*col;
    

    //indices initialization
    int startingRow=0;
    int startingCol=0;
    int endingRow=row-1;
    int endingCol=col-1;

    while(count < total){//this conditon has to be checked in all for loops inside
        delay(3);

        //printing starting row
        for(int index=startingCol; count<total && index<=endingCol; index++){ //(note!!! index <'=' endCol)
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++; //to avoid traversing same row next round
    
        //printing ending column
        for(int index=startingRow; count<total && index<=endingRow; index++){
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--; //to avoid traversing same col next round
          

        //printing ending row
        for(int index=endingCol; count<total && index>=startingCol; index--){
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--; //..
        
        //printing starting column
        for(int index=endingRow; count<total && index>=startingRow; index--){
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++; //to avoid to tranverse next col in next round
          
    }

    return ans;

}

int main()
{
    vector<vector<int>> vect;

    //static initialization
    vect={{1,2,3},
          {4,5,6},
          {7,8,9}};

    cout<<"\nentered vector is:\n";
    for(int i=0;i<vect.size();i++){
        for(int j=0;j<vect[i].size();j++)
            cout<<vect[i][j]<<" ";
        
        cout<<endl;
    }

    vector<int> v=spiralOrder(vect);
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;
}*/

//************************************************************************************
//3.Rotate a matrix clockwise by 90 degrees

//approach:take transpose of matrix(gfg)

/*#include<iostream>
using namespace std;
const int n=4;

void print(int mat[n][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<mat[i][j]<<" ";
        cout<<endl;
    }
}

void rotate(int mat[n][n]){ //to rotate clockwise 90degrees
    //transpose of matrix
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }

    //reverse individual rows
    for(int i=0;i<n;i++){
        int firstcol=0,lastcol=n-1;
        while(firstcol < lastcol){
            swap(mat[i][firstcol],mat[i][lastcol]);
            firstcol++;
            lastcol--;
        }
    }
}

int main()
{
    int mat[n][n]{{1,2,3,4},
                  {5,6,7,8},
                  {9,10,11,12},
                  {13,14,15,16}};

    rotate(mat);
    print(mat);
}*/

//***************************************************************************************
//4.Search a 2D matrix
//given,each row are sorted from left to right
//first integer of each row is greater than the last integer of previous row

/*#include<iostream>
#include<vector>
using namespace std;

int serachmatrix(vector<vector<int>>& matrix,int key)
{
    int rowsize=matrix.size();
    int colsize=matrix[0].size();

    int start=0;
    int end=(rowsize*colsize)-1;

    int mid=start+(end-start)/2;

    while(start<=end){
        //rowindex=mid/colsize
        //colindex=mid%colsize
        if(key==matrix[mid/colsize][mid%colsize])
            return mid;

        else if(key < mid)
            end=mid-1;

        else 
            start=mid+1;

        mid=start+(end-start)/2;
    }
    return -1;
}

int main()
{
    vector<vector<int>> vect;

    //static initialization
    vect={{1,3,5,7},
          {10,11,16,20},
          {22,30,34,60}};

    cout<<"\nentered vector is:\n";
    for(int i=0;i<vect.size();i++){
        for(int j=0;j<vect[i].size();j++)
            cout<<vect[i][j]<<" ";
        
        cout<<endl;
    }
    int key;
    cout<<"enter the key value :";
    cin>>key;

    int pos=serachmatrix(vect,key);
    if(pos==-1)
        cout<<"key not found."<<endl;
    else //colsize=vect[0].size()
        cout<<"key found at pos:("<<pos/vect[0].size()<<","<<pos%vect[0].size()<<")."<<endl;
}*/
//t.c=O(log(rowsize*colsize))

//*****************************************************************************************************
//5.Search a matrix
//given:integers in each row are sorted in ascending from left to right
//integers in each column are sorted in ascending from top to bottum

/*#include<iostream>
#include<vector>
using namespace std;

bool serachmatrix(vector<vector<int>>& matrix,int key)
{
    int rowsize=matrix.size();
    int colsize=matrix[0].size();

    int rowIndex=0;//(first row)
    int colIndex=colsize-1; //(last elt)

    while(rowIndex<rowsize && colIndex>=0){
        //we start from last elt of first row
        int mid=matrix[rowIndex][colIndex];
        
        if(key == mid)
            return 1;

        else if(key < mid)
            colIndex--; //bcz wkt each row is sorted

        else 
            rowIndex++; //bcz wkt each col is sorted

    }
    return 0;
}

int main()
{
    vector<vector<int>> vect;

    //static initialization
    vect={{1,3,5,7},
          {2,4,6,8},
          {4,5,8,10},
          {6,8,12,15}};

    cout<<"\nentered vector is:\n";
    for(int i=0;i<vect.size();i++){
        for(int j=0;j<vect[i].size();j++)
            cout<<vect[i][j]<<" ";
        
        cout<<endl;
    }
    int key;
    cout<<"enter the key value :";
    cin>>key;

    if(serachmatrix(vect,key))
        cout<<"key element found."<<endl;
    else
        cout<<"key element not found."<<endl;
    
}*/

