// Pattern Printing ( Part 1):

// #include<iostream>
// using namespace std;

// int main(){
//     for( int i = 1 ; i<=5 ; i = i +1){
//         cout<<"*";
//     };
// };

// Multiple lines :
// #include<iostream>
// using namespace std;

// int main(){
//     for( int j =1 ; j<=5 ; j = j+1){
//         for( int i =1 ; i<=5 ; i = i+1){
//             cout<<"*";
//     }
//         cout<<endl;
//     }
// }
// #include<iostream>
// using namespace std;

// int main(){
//     for( int row =1 ; row<=5 ; row = row+1){
//         for( int column =1 ; column<=5 ; column = column+1){
//             cout<<"*"<<" ";
//     }
//         cout<<endl;
//     }
// }

// Print number 10 pattern
// #include<iostream>
// using namespace std;

// int main(){
//     for( int row =1 ; row<=5 ; row = row+1){
//         for( int column =1 ; column<=5 ; column = column+1){
//             cout<<"10"<<" ";
//     }
//         cout<<endl;
//     }
// } 

// Pattern 1 : 

// #include<iostream>
// using namespace std;

// int main(){
//     for( int row =1 ; row<=5 ; row = row+1){
//         for( int column =1 ; column<=5 ; column = column+1){
//             cout<<row<<" ";
//     }
//         cout<<endl;
//     }
// } 

// Pattern 2:

// #include<iostream>
// using namespace std;

// int main(){
//     for( int row =1 ; row<=5 ; row = row+1){
//         for( int column =1 ; column<=5 ; column = column+1){
//             cout<<column<<" ";
//     }
//         cout<<endl;
//     }
// } 

// Pattern 3 :

// #include<iostream>
// using namespace std;

// int main(){
//     for( int row =1 ; row<=5 ; row = row+1){
//         for( int column = 5 ; column>=1 ; column = column-1){
//             cout<<column<<" ";
//     }
//         cout<<endl;
//     }
// } 

// Pattern 4:


// #include<iostream>
// using namespace std;

// int main(){
//     for( int row =1 ; row<=5 ; row = row+1){
//         for( int column =1 ; column<=5 ; column = column +1){
//             cout<<column * column * column<<" ";
//     }
//         cout<<endl;
//     }
// } 

// Pattern 5 :


// #include<iostream>
// using namespace std;

// int main(){
//     for( char row ='a' ; row<='e' ; row = row+1){
//         for( char column ='a' ; column<='e' ; column = column+1){
//             cout<<row<<" ";
//     }
//         cout<<endl;
//     }
// } 

// Patttern 6:
// #include<iostream>
// using namespace std;

// int main(){
//     for( char row ='a' ; row<='e' ; row = row+1){
//         for( char column ='a' ; column<='e' ; column = column+1){
//             cout<<column<<" ";
//     }
//         cout<<endl;
//     }
// } 

// Pattern 7: 


#include<iostream>
using namespace std;

int count = 1;
int main(){
    for( int row =1 ; row<=5 ; row = row+1){
        for( int column =1 ; column<=5 ; column = column+1){
            cout<< count<<" ";
            count = count +1 ;
    }
        cout<<endl;
    }
} 




