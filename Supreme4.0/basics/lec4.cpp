#include<iostream>
using namespace std;

int main(){
   
  int budget;
  cout<<"Enter Your Budget :"<<endl;
  cin>>budget;

  if(budget > 2000000){
    cout<<"You can buy scorpio"<<endl;
  }
  else if(budget >100000 && budget<2000000){
    cout<<"See other car options like alto etc"<<endl;
  }
  else{
    cout<<"Garib"<<endl;
  }

  return 0;
}