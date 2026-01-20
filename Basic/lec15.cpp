// Convert alphabet (a) to capital(A) :

// For this que u must know ascii value 
// #include<iostream>
// using namespace std;


// char convert(char name)
// {
//     char ans = name - 'a' + 'A';
//     return ans;
// }
// int main()
// {
//     char name;
//     cout<<"Enter the character in alphabet :"<<endl;
//     cin>>name;

//     cout<<"Character is capital : "<<convert(name);
// }

// Armstrong Number : take a number suppose 25 as it is two digit so u should take square of its number and it should be equal to the given number 

// Ex: 25 = 2**2 + 5**2 = 29 , So 25 !=29 So its not a armstrong 

// Ex : 153 = 1**3 + 5**3 + 3**3 =  153 , so here 153 = 153 so its a armstrong number 

#include<iostream>
#include <math.h> // This is used beacause we have pow() which is called as power function its an inbuilt function

using namespace std;

int countdigit(int n)
{
    int count = 0;
    while(n)
    {
        count++;
        n/=10;
    }
    return count;
}

bool Armstrong(int num , int digit)
{
    int n = num , ans = 0 ,rem;
    while(n)
    {
        rem = n%10;
        n/=10;
        ans = ans+pow(rem,digit);
    }

    if(ans == num)
    {
    cout<<"Its an armstrong number"<<endl;

    }
    else {

    cout<<"Its  not an armstrong number"<<endl;
    }
}
int main()
{
    int num;
    cout<<"Enter the number : "<<endl;
    cin>>num;
    
    // Count Digit :
    int digit  = countdigit(num);

    // Armstrong number : 
    cout<<Armstrong(num,digit)<<endl;

}