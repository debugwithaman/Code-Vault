class Solution {
public:
    int reverse(int n) {
      long long int ans = 0;
      while(n != 0){
        int rem = n%10;
        ans = ans*10 + rem;
        n = n/10;
      }  
      if(ans > INT_MAX || ans < INT_MIN){
        return 0;
      }
      return ans;
    }
};