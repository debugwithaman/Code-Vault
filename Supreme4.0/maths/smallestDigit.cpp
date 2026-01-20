#include<iostream>
#include <climits> //for INT_MAX
using namespace std;
 
int smallestDigit(int num){
  int smallest = INT_MAX;

  while(num !=0){
    int digit = num % 10;

    // check digit is smallest or not.
    // if jo digit mere pass aya hai . agar vo chotta n ab tak k smallest valuse se then store this in new digit 

    // Use this if u dont want to use min(a,b) inbuild function :
    if(digit<smallest){
       smallest = digit;
    }

    // if you want to use inbuild function use :

    // min(digit,smallest);

    // num update 
    num = num/10;
  }
  return smallest;
}

int main(){
  int n;
  cout<<"Enter the value"<<endl;
  cin>>n;
  int result = smallestDigit(n);
  cout<<result;
}