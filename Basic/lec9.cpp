// Pattern printing :

// Pattern 1:

// #include<iostream>
// using namespace std;

// int main() 
// {   

//     int row,column;
//     for(  row = 1 ; row<=9; row = row + 1)
//     {
//         // Space Print
//         for ( column = 1 ; column <= 9 - row ; column = column + 1){
//             cout<<" ";
//         }
//         // Start Print
//         for( column = 1 ; column<=row ; column = column + 1){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// Pattern 2 :


// #include<iostream>
// using namespace std;

// int main() 
// {   

//     int row,column;
//     for(  row = 1 ; row<=5; row = row + 1)
//     {
//         // Space Print
//         for ( column = 1 ; column <= 5 - row ; column = column + 1){
//             cout<<"  ";
//         }
//         // Start Print :

//         // 1 to row

//         for( column = 1 ; column<=row ; column = column + 1){
//             cout<<column<<" ";
//         }

//         // row-1 to 1 : 
//         for( column = row - 1 ; column>=1 ; column = column - 1){
//             cout<<column<<" ";
//         }
//         cout<<endl;
//     }
// }

// Pattern 3:

#include<iostream>
using namespace std;

int main() 
{   

    int row,column;

    // Instead of 5 u can also write n where user gives a value
    for(  row = 5 ; row>=1; row = row - 1)
    {
        // Space Print
        for ( column = 1 ; column <= 5 - row ; column = column + 1){
            cout<<"  ";
        }
        // Start Print
        for( column = 1 ; column<=2 *row - 1 ; column = column + 1){
            cout<<"* ";
        }
        cout<<endl;
    }
}

// Pattern 4:

// #include<iostream>
// using namespace std;

