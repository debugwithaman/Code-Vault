#include<iostream>
#include<string>
using namespace std;

string isPowerofTwo(int num){
  if(num == 0){
    return "No";
  }
  // below code is based on assumption that input would be >0
  if((num & (num-1)) == 0){
    return "Yes";
  }
  else{
    return "No";
  }
}

int main(){
  string ans = isPowerofTwo(2);
  cout<<ans;
}