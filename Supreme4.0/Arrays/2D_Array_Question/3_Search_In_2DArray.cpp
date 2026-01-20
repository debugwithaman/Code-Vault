#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// In question we need to return pair so we are using pair in function

pair<int,int> searchIn_2D_Array(int arr[][2] ,int n , int m , int target){
  for(int row=0;row<n;row++){
    for(int col=0;col<n;col++){
      if(arr[row][col] == target){
         return {row,col}; //This return a pair like pair<row,col>
      }
      
    }
  }
  // agar main yaha tk pohch gaya ,iska matlab
  // poore 2D array me target kahin nahi mila
  // iska matlab return pair -1,-1
  return {-1,-1};
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

pair<int,int> ans = searchIn_2D_Array(arr,3,2,5);
cout<<ans.first<<" "<<ans.second<<" "<<endl;
}