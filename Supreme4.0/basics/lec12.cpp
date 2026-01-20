// Function:

#include<iostream>
using namespace std;

// in void you cant return any value in return function 


// void printCounting(){
//   for(int i=1;i<=5;i++){
//     cout<<i<<endl;
//   }

// }
// int sum(int a , int b){
//   int totalSum =a+b;
//   return totalSum;
// }
// int getMultiplication(int x ,int y, int z ){
//   // int multi = x*y*z;
//   return x*y*z;
// }

// char convertIntoUpperCase(char ch){
//   char answer = ch - 'a' + 'A';
//   return answer;
// }

void voting(int age){
  if(age>=18){
    cout<<"You Can Vote"<<endl;
  }
  else{
    cout<<"You Cant Vote -> Nabalik"<<endl;
    
  }
  
}

int main(){
  // printCounting();
  // int ans = sum(3,4);
  // cout<<ans<<endl;

  // int ans2 = getMultiplication(3,4,5);
  // cout<<ans2<<endl;

  // char ans3 = convertIntoUpperCase('c');
  // cout<<ans3<<endl;

    voting(45);
  

}