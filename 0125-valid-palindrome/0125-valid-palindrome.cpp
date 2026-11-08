class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        string cleaned = "";

        for(char ch:s){
            if(isalnum(ch)){
                ans +=ch;
            }
        }

        for(int i=0;i<ans.size();i++){
            if(ans[i]>= 'A' && ans[i]<='Z'){
                ans[i] = ans[i] + 32;
            }

        }

        cleaned =  ans;
        reverse(ans.begin(),ans.end());

        return ans == cleaned;

          
    }
};