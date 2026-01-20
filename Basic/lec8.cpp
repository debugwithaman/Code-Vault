// Pattern Printing (Part3 ):

// Pattern 1 :

// #include<iostream>
// using namespace std;

// int main()
// {   
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     int row,column;
//     for(  row = 1 ; row<=n; row = row + 1)
//     {
//         // Space Print
//         for ( column = 1 ; column <= n - row ; column = column + 1){
//             cout<<"  ";
//         }
//         // Start Print
//         for( column = 1 ; column<=row ; column = column + 1){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// Pattern 2:

// #include<iostream>
// using namespace std;

// int main()
// {   
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     int row,column;
//     for(  row = 1 ; row<=n; row = row + 1)
//     {
//         // Space Print
//         for ( column = 1 ; column <= n - row ; column = column + 1){
//             cout<<" ";
//         }
//         // Start Print
//         for( column = 1 ; column<=row ; column = column + 1){
//             cout<<row ;
//         }
//         cout<<endl;
//     }
// }

// Pattern 3: 

// #include<iostream>
// using namespace std;

// int main()
// {   
    
//     int row,column;
//     for(  row = 1 ; row<=5; row = row + 1)
//     {
//         // Space Print
//         for ( column = 1 ; column <= 5- row ; column = column + 1){
//             cout<<" ";
//         }
//         // Start Print
//         for( column = 1 ; column<=row ; column = column + 1){
//             cout<<column ;
//         }
//         cout<<endl;
//     }
// }

// Pattern 4 :

#include<iostream>
using namespace std;

int main()
{   
    
    int row,column;
    for(  row = 1 ; row<= 5; row =  row + 1)
    {
        // Space Print
        for ( column = 1 ; column <= 5 - row ; column = column + 1){
            cout<<"  ";
        }
        // Start Print
        for(char name = 'A' ; name<='A' + row - 1;name = name +1 ){
            cout<<name<<" " ;
        }
        cout<<endl;
    }
}

