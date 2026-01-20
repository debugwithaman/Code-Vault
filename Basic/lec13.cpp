// This code runs in leetcode and gfg compiler : 


// Leetcode question : 


// Add digit : 
// #include<iostream>

// using namespace std;

// int addDigits(int num = 10 ){
    
//     while(num >9)
//     {
        
//     int ans = 0 , rem;
//     while (num != 0){
//         rem = num % 10;
//         num /= 10;
//         ans += rem ;
//     }
//     num = ans;
//     }

//     return num;
// }

// Leap Year : means 29 days in feb 

//  Hint : Year that is divided by 4 is leap year 
// Also if a number is divided by 400 is leap year 
// And it should not divide from 100 

// This code runs in leetcode and gfg compiler : 
#include<iostream>
using namespace std ;

class solution {
    public : 

    int isLeap (int N = 2000){
        // Code part 

        if (N % 400 == 0 ){
            return 1;
        }
        else if (N%4 == 0 && N % 100 != 0){
            return 1;
        }
        else {
            return 0;
        };
    }
};
