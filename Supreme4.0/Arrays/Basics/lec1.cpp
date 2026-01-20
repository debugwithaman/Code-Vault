#include<iostream>
using namespace std;

// void printArray(int arr[],int size){
//    for(int i = 0;i<size;i++){
//     cout<<arr[i]<<" ";
//    }
//    cout<< endl;
// }

// function to print twice of the original value in array :

  // void printTwice(int arr[], int size){
  //   for(int i =0;i<=size-1;i++){
  //     cout<<(2*arr[i])<<endl;
  //   }
  // }

  // function to print even odd in array :
// void printEvenOdd(int arr[],int size){
//   for(int i = 0;i<size;i++){
//     int number = arr[i];
//     if(number % 2 == 0){
//       cout<<"Even"<<endl;
//     }
//     else{
//       cout<<"Odd"<<endl;
//     }
//   }
// }

// function to check 0,1 in an array:

// void countZeroOnes(int arr[], int size){
//   int totalZero = 0;
//   int totalOnes = 0;
//   for(int i = 0;i<size;i++){
//     int number = arr[i];
//     if(number == 0){
//       totalZero++;
//     }
//     else if(number == 1){
//       totalOnes++;
//     }
//     else{
//       cout<<"0 & 1 not present"<<endl;
//     }
//     cout<<"Total Zero:"<<totalZero<<endl;
//     cout<<"Total ones:"<<totalOnes<<endl;

//   }
// }

void  concat(int arr[] , int size){
  for(int i = 0;i<size;i++){
    cout<<arr[i]+arr[i]<<" ";
  }
}

int main(){
  // int arr[10];
  // printArray(arr,10); //The value present here will be garbage value

  // int arr1[5]={1,2,3,4,5};
  // printArray(arr1,5);

  // int arr2[5]={10,20};
  // printArray(arr2,5); // As the array is not completely initialize then remaing space is fill with 0

  // declare :

  // int arr[10];
  // cout<<"Enter the values for n(n= number of values to take input for ):"<<endl;
  // int n;
  // cin>>n;

  // for(int i= 0 ; i<n;i++){
  //   cout<<"Taking input for index :"<<i<<endl;
  //   cin>>arr[i];
  // }

  // cout<<"Printing the array:"<<endl;
  // for(int i =0;i<n;i++){
  //   cout<<arr[i]<<" ";
  // }
  // cout<< endl;
  

  // print twice of the original value in array

  // int arr[10] ={2,3,4,5,6};
  // int size = 5;
  // printTwice(arr,size);
  
  // print even odd in array :
  // int arr[10] ={2,3,4,5,6};
  // int size = 5;
  // printEvenOdd(arr,size);

  // check 0,1 in an array:

   int arr[10] ={1,0,0,1,56};
  int size = 5;
  // countZeroOnes(arr,size);
  concat(arr,size);
  

}