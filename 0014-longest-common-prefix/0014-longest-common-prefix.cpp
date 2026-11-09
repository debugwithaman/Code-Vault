class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        sort(strs.begin(),strs.end());
        
        string res ="";
        int n = strs.size();
        string a = strs[0];
        string b = strs[n-1];
        int m = a.size();
        int c = b.size();

        int i=0;
        while(i<min(m,c))
        {
            if(a[i]==b[i]){
               res = res + a[i];
               
            }
            else break;
            i++;
        }
        return res;
    }
};