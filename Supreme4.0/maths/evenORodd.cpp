#include<iostream>
#include<string>
using namespace std;

string checkEvenOdd(int num){
  // Approach 1:

  // if(num %2 == 0){
  //   return "Even";
  // }
  // else{
  //   return "Odd";
  // }

  if(num & 1 ){
    return "Odd";
  }else{
    return "Even";
  }
}

int main(){
  int n;
  cout<<"Enter Number:"<<endl;
  cin>>n;

  string result = checkEvenOdd(n);
  cout<<result;
}