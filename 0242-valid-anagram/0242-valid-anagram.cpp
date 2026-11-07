class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> freq(26,0); // can also use int freq[26] ={0}
        
        for(int i=0;i<s.length();i++)
        {
            freq[s[i]-'a']++; // 97 instead of a as it is it's ascii value

        }

        for(int i=0;i<t.length();i++){
            freq[t[i] - 'a']--;
        }

        for(int i=0;i<25;i++){
            if(freq[i] != 0) return false; 
        }
        return true;
    }
};