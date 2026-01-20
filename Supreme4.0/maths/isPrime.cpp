#include<iostream>
using namespace std;

string isPrime(int num){
  if(num == 1){
    return "No";
  }
  if(num == 2 || num == 3){
    return "Yes";
  }

  int start = 2;
  int end = num -1;

  // logic -> 2 to n-1 tak
  // agar kisi ne bhi remainder 0 dediya ->not a prime number
  // agar kisine bhi 0 nahi dia -> a prime

  for(int i = start;i<=end;i++){
    if(num%i ==0){
      return "No";
    }
  }
  // agar ye yaha tak agaya means ye kisi se kisi se bhi perfectly divide nahi kar paya
  return "Yes";
}

int main(){
  string result = isPrime(17);
  cout<<result;
}