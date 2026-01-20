#include<iostream>
using namespace std;

int reverseNumber(int num){
  int ans = 0;
   while(num != 0){
    int digit = num % 10;
    ans = ans * 10 + digit;
    num = num /10;
   }
   return ans;
}

string isPlaindrome(int num){
   int original = num;
   int reversed = reverseNumber(num);

   if(original == reversed){
    return "Yes";
   }
   else{
    return "No";
   }
}


int main(){
  int number;
  cout << "Enter a number: ";
  cin >> number;

  cout << "Is Palindrome? " << isPlaindrome(number) << endl;

  return 0;
}
