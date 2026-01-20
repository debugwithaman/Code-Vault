#include<iostream>
#include<vector>
using namespace std;

void printColumWiseSum(int arr[][2],int n , int m){
  // outer loop -> col
  // inner loop -> row
  for(int col=0;col<m;col++){

    //har row ke liye sum = 0 se start karna hai 
    int sum = 0;
    for(int row =0 ;row<n;row++){
      sum = sum + arr[row][col];
    }
    // now u have the col sum ready -> print it
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
     printColumWiseSum(arr,3,2);
  return 0;
}