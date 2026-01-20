#include<iostream>
#include<vector>
using namespace std;

void printRowWiseSum(int arr[][2],int n,int m){
  // outer loop -> for rows
  // inner loop -> for columns

  for(int row = 0;row<n;row++){
    // har ek row k liye start me sum = 0 hoga
    int sum = 0;
    for(int col = 0;col<m;col++){
      sum = sum + arr[row][col];
    }
    // now you have row sum ready -> print it
    cout<<sum<<endl;
  }
} 

int main()
{
int arr[3][2];
for(int i = 0;i<3;i++){
  for(int j =0;j<2;j++){
    // cout<<"Enter the value for rowIndex:"<<i<<" and colIndex"<<j<<endl;
    cin>>arr[i][j];
  }
}
  printRowWiseSum(arr,3,2);
    return 0;
}