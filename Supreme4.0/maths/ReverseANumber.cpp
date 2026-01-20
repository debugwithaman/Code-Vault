#include<iostream>
using namespace std;

int reverseNumber(int num){
  int ans = 0;

  while(num !=0){
    int digit = num %10;
  //  ab digit se reverse number create karo
    ans = ans * 10 + digit;

    num = num / 10;
  }
   return ans;
}

int main(){
  int n;
  cout<<"Enter a number :"<<endl;
  cin>>n;
  int result = reverseNumber(n);
  cout<<result;
}