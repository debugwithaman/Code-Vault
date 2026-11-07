class Solution {
public:
    int lengthOfLastWord(string s) {
        int len =0;
        int i = s.size()-1; // -1 as we are starting from last position

        while(i>=0 && s[i] == ' ') i--;

        while(i>=0 and s[i] != ' '){
            len++;
            i--;
        }
        return len;
    }
};