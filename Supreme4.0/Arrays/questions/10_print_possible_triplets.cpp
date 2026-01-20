// this question is same like Q9 which is print possible values here only key difference is you print 3 values instead of 2 values 

// Also the code is almost same 

#include<iostream>
#include<vector>
using namespace std;

void printAllTriplets(vector<int> arr){
  int n= arr.size();
// to make it unique use j = i+1 and k = j+1

  for(int i = 0 ;i<n ;i++){
    for(int j = 0;j<n;j++){ 
      for(int k = 0;k<n;k++){
         cout<<"("<<arr[i]<<" ,"<<arr[j]<<" ,"<<arr[k]<<")";
      }
    }
    cout<<endl;
  }
}

int main(){
  vector<int> arr;

  arr.push_back(10);
  arr.push_back(20);
  arr.push_back(30);
  arr.push_back(40);
  printAllTriplets(arr);

}