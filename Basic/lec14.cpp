// Function :

// return_type = int , float , char etc and also can be void

// Void means ans can does not have any specific type

// Syntax : 

// return_type function_name (Para1,Para2)
// {
//     {
//       code part  
//     }
//     return value;
// }

// Check Prime :

// #include<iostream>
// using namespace std;

// bool Prime(int n)
// {
//     if ( n<2)
//     return 0;

//     for(int i = 2 ; i<n ; i++)
//     {
//         if(n%i == 0 )
//         return 0;
//     }
// }

// int Fact(int n )
// {
//     int ans = 1;
//     for( int i = 1 ; i<=n ; i++)
//     ans *=1 ;
//     return ans;

// }

// int main()
// {  
//     int a,b;
    
//     cout<<"Enter the number : "<<endl;
//     cin>>a;
//     cout<<"Enter the number : "<<endl;
//     cin>>b;
    

//     // a is prime or not ;

//     cout<<Prime(a);

//     // a ka factorila 
    
// }
// Factorial : 

// // Summ of two numbers : 

// // Here we had taken m and n in fun dec and a , b in fun def so here m = a and n = b


// #include<iostream>
// using namespace std;

// int Sum(int m , int n ) //Function declare 
// {
//     int ans = m+n; //Function Define
//     return ans;
// }
// int main(){
//     int a,b;
//     cout<<"Enter the number : "<<endl;
//     cin>>a;
//     cout<<"Enter the number : "<<endl;
//     cin>>b;

//     // Function call

//     cout<<Sum(a,b);
// }

// Multiply

// #include<iostream>
// using namespace std;

// int Sum(int m , int n ) //Function declare 
// {
//     int ans = m*n; //Function Define
//     return ans;
// }
// int main(){
//     int a,b;
//     cout<<"Enter the number : "<<endl;
//     cin>>a;
//     cout<<"Enter the number : "<<endl;
//     cin>>b;

//     // Function call

//     cout<<"Mutliplication value :"<<Sum(a,b);
// }

// Print "Hello world"

// #include<iostream>
// using namespace std;

// void fun()
// {
//     cout<<"Hello World ";
// }

// int main()
// {
//     // Code 

//     // Function Declaration :

//     fun();
// }

// Imp:
// Scope of variable : As u know we are creating a variable m,n in function and then a,b in main because its a scope of variable means a block of code cant be access in another block of code

// Pass by value :
// Pass by reference :

// Swap two numbers : 

// #include<iostream>
// using namespace std;

// void Swap(int &a , int &b) //Pass by refernce 
// {
//     int c;
//     a=b;
//     b=c;
// }
// // Function Overloading : In this same name of function is valid but the argument should be different
// void Swap(float &d , float &c )
// {
//     float r = c;
//     c=d;
//     d=r;
// }

// int main(){
//     int a,b;

//     cout<<"Enter the  first number "<<endl;
//     cin>>a;
    
//     cout<<"Enter the  second number "<<endl;
//     cin>>b;
     
//     Swap(a,b);

//     cout<<a<<" "<<b<<" "<<endl;

//     float f1 = 4.8 , f2 = 6.9;
//     swap(f1,f2);

//     cout<<f1<<" "<<f2;
// }


// Function by Apna college lec 5 :

#include<iostream>
using namespace std;

void printHello(){
    cout<<"hello world \n";
}

double sum(double a , double b){
    double s = a + b;
    return s;
}

int main(){
    printHello();
    cout<<sum(4.5,6.9)<<endl;
    return 0;
}