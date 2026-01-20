// While loop :

// Table program : 

// #include<iostream>

// using namespace std;

// int main(){
//     int n = 8 ;
//     int i = 1 ;

//     while(i<=10){
//     cout<<n*i<<endl;
//     i++;
//     }
// }

// Do While loop :

// Sum of N natural numbers : 

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number :";
//     cin>>n;
//     int i;  //Initialize 

//     do{
//         cout<<i<<endl;
//         i++;  // Update
//     }
//     while(i<=n); // break 

// }

// Table
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the number :";
//     cin>>n;
//     int i = 1;  //Initialize 

//     do{
//         cout<<n*i<<endl;
//         i++;  // Update
//     }
//     while(i<=10); // break 

// }

// Break Statement :

// #include<iostream>
// using namespace std;

// int main(){
//     for ( int i =1 ; i<=10 ; i++){
//         if( i == 4)
//         break;
//         //   Here because we had use the break statement so due to this if i == 4 then further statement will not execute
//         cout<<i<<" ";

//     }
// }

// Continue Statement : 

// #include<iostream>
// using namespace std;

// int main(){
//     for ( int i =1 ; i<=10 ; i++){
//         if( i == 4)
//         continue;
//         //   Here because we had use the continue statement so due to this if i == 4 then except 4 further statement will be execute
//         cout<<i<<" ";

//     }
// }

// Switch Statement :  Remember for writing case name it should be int or char only no float and double int 

// #include<iostream>
// using namespace std;

// int main(){
//     int i;
// cout<<"Enter the number : ";
// cin>>i;
// switch (i)
// {
//     case 1 : 
//         cout<<"Aman";
//         break; 
//     case 2 :
//         cout<<"Ayan";
//         break; 
//     default :
//         cout<<"Error 404";
    
// }
// }

// Using char in case : 
// #include<iostream>
// using namespace std;

// int main(){
//     char i;
// cout<<"Enter the char : ";
// cin>>i;
// switch (i)
// {
//     case 'a' : 
//         cout<<"Aman";
//         break; 
//     case 'b' :
//         cout<<"Ayan";
//         break; 
//     default : //Giving default is not compulsory
//         cout<<"Error 404";
    
// }
// }

// Scope of variable  : It means a block of code means curly bracket  

#include<iostream>
using namespace std;

int main(){
    int n = 10;
    cout<<"First block of code:"<<n<<endl;
    // int n = 40; // If u use this line it will through an error
    int i = 69;
    if (i != 10){
        int n = 30;  // Here n is inside another block
        cout<<"Second block of code:"<<n;
    }
}
