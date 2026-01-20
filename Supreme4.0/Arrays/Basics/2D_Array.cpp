#include<iostream>
#include<vector>
using namespace std;


// always in 2D array atleast give the col size so avoid compilaion error in the function : 

void printRowWise(int arr[][2],int rowSize , int colSize){
  for(int row = 0;row<rowSize;row++){
    for(int col = 0;col<colSize;col++){
      cout<<arr[row][col]<<" ,";
    }
    cout<<endl;
  }
}



void printColumnwise(int arr[][2],int rowSize,int colsize){
  for(int col = 0;col<colsize;col++){
    for(int row = 0;row<rowSize;row++){
      cout<<arr[row][col]<<" ,";
    }
  }

}

int main()
{
  // creation
  // declare

  // int arr[3][2]={
  //   {1,2},{10,11},{11,11}
  // };

  // // Access:

  // cout<<arr[0][0]<<endl;
  // cout<<arr[2][0];

// input:

int arr[3][2];
for(int i = 0;i<3;i++){
  for(int j =0;j<2;j++){
    // cout<<"Enter the value for rowIndex:"<<i<<" and colIndex"<<j<<endl;
    cin>>arr[i][j];
  }
}

// cout<<"Input Complete"<<endl;

// // Printing :

// for(int i =0;i<3;i++){
//   for(int j =0;j<2;j++){
//     cout<<arr[i][j]<<" ,";
//   }cout<<endl;
// }

printRowWise(arr,3,2);
cout<<"Printing Colum"<<endl;
printColumnwise(arr,3,2);

return 0;
}