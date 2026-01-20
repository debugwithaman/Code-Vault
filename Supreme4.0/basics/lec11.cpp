// Type-Casting:

#include<iostream>
using namespace std;

int main(){
  // int to float
  // int num1=10;
  // float num2 = 3.3;
  // float result = num1 + num2;
  // cout<<result;

  // char to int:
// Here A is stored in ascci value like A = 65
  // char ch = 'A';
  // int a = ch + 1;
  // cout<<a<<endl;
  // char b = ch + 1;
  // cout<<b;

  // Explicit type casting:
// uses ()

int num1=10;
float num2=5.5;

float result = num1 + (int)num2;
cout<<result;


}