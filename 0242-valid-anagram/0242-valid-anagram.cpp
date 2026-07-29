class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();

        unordered_map<char,int> freq1;
        unordered_map<char,int> freq2;

        if(n != m){
            return false;
        }

        int i;

        for(i =0;i<n;i++){
            freq1[s[i]]++;
        }

        for(i =0;i<m;i++){
            freq2[t[i]]++;
        }

        if(freq1 == freq2){
            return true;
        }
        return false;
    }
};