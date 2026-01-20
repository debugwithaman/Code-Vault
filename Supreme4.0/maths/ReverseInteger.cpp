#include<iostream>
#include<climits>
using namespace std;
long long int reverseNumber(int num){
  long long int ans = 0;

  while(num !=0){
    int digit = num %10;
  //  ab digit se reverse number create karo
    ans = ans * 10 + digit;

    num = num / 10;
  }
   return ans;
}

int reverse(int num){
  
  // 0 wala case handle karo
  if(num == 0){
    return 0;
  }
  // sign info store karo boolean flag me
  bool flag = 0;
  // rule -> flag = 0 -> negative
  //  rule -> flag = 1 -> positive
  if(num > 0){
    flag = 1;
  }
  else{
    // <0 wala case
    flag = 0;
  }
  // sign remove karo
  // here abs means absolute value it removes the negative sign
  num = abs(num);
  // num reverse karo 
  long long int ans = reverseNumber(num);
  // sign lagao reverse number par
  // sign sirf negative wale case me lagana padega
  if(flag == 0){
    ans = 0 - ans;
  }
  // range check :
  if(ans >INT_MAX){
     return 0;
  }
  if(ans<INT_MIN){
    return 0;
  }

  // return kardo
  return ans;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int reversed = reverse(num);
    cout << "Reversed number: " << reversed << endl;

    return 0;
}