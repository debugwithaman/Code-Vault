// lec by coder army

// user input : use cin 

// #include<iostream>
// using namespace std;
// int main (){
//     // int a,b;
//     // cin>>a;
//     // cin>>b;
//     // cout<<a+b;

//     int c,d;
//     cout<<"Enter your first number : ";
//     cin>>c;
//     cout<<"Enter your second number : ";
//     cin>>d;
//     cout<<"The sum of the number is : "<<c+d;
// };

// Typecasting :

// #include<iostream>

// using namespace std;
 
// int main(){
//     int a = 10;
//     char c = 'b';
//     a=c;
//     // on above code it gives 98 remember c++ stores the ascii values so this happens
//     cout<<a;
//     int b = 45;
//     char e = 'f';
//     b=e;
//     cout<<b;
// };

// If-else :  

// pacakage que:


// #include<iostream>

// using namespace std;

// int main(){
//     int pacakage ;
//     cin>>pacakage ;
//     if(pacakage > 10)
//     {
//         cout<<"Accepted";
//     }
//     else
//     {
//         cout<<"Rejected";
//     }
// };

// Marks grading que:

// #include<iostream>
// using namespace std;

// int main(){
//     int marks;
//     cout<<"Enter your marks : ";
//     cin>>marks;
//     if(marks > 33){
//         cout<<"You are pass";
//     }
//     else{
//         cout<<"You are fail";
//     };
// };

// Compare two  variable

// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     int b;
//     cout<<"Enter A value :";
//     cin>>a;
//     cout<<"Enter B value :";
//     cin>>b;
//     if( a>b){
//         cout<<"True";
//     }else{
//         cout<<"False";
//     }

// };

// Even or odd
// #include<iostream>
// using namespace std;

// int main() {
//     int a;
//     cout<<"Enter the number : ";
//     cin>>a;
//     if( a % 2 == 0){
//         cout<<"Its an even number";
//     }else{
//         cout<<"Its an odd number";
//     }
// };

// Postive , Negative , Zero
// #include<iostream>
// using namespace std;

// int main(){
//     int a;
//     cout<<"Enter the variable :";
//     cin>>a;
     
//     if( a == 0){
//         cout<<"Its zero";
//     }
//     else if( a > 0){
//         cout<<"Positive";
//     }
//     else{
//         cout<<"Negative";
//     }
// };

// Find character is vowel or consonent
// #include<iostream>
// using namespace std;

// int main(){
//     char c;
//     cout<<"Enter the alphabet :";
//     cin>>c;
    
//     if ( c == 'a'){
//         cout<<"Vowel";
//     }
//     else if( c == 'e'){
//         cout<<"Vowel";
//     }
//     else if( c == 'i'){
//         cout<<"Vowel";
//     }
//     else if( c == 'o'){
//         cout<<"Vowel";
//     }
//     else if( c == 'u'){
//         cout<<"Vowel";
//     }
//     else{
//         cout<<"Consonent";
//     }

// }

// Loop Concept :

// For loop :

// #include<iostream>
// using namespace std;

// int main(){
//     int count;
//     for(count = 1; count<=5 ;count = count +1){
//         cout<<"hello aman"<<endl;
//     } 
// }

// Print 1 to 5:

// #include<iostream>
// using namespace std;

// int main(){
//     int i;
//     for(i = 1; i<=5 ; i =i+1){
//         cout<<i <<endl;
//     }
// };

// Print squares from 1 to n:

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter a number :";
//     cin>>n;
//     int i;
//     for(i =n ; i<=n ; i = i+1){
//         cout<<i*i<<endl;
//     }
// };

// Print even numbers:

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int i;
    for( i = 2; i<=n ; i = i+2){
        cout<<i<<endl;
    }
};