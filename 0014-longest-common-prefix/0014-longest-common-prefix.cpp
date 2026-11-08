class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        sort(strs.begin(),strs.end());

        int size = strs.size();
        string a = strs[0];
        string b = strs[size-1];
        int m = a.size();
        int n = b.size();
        string res="";
        
        int i =0; 
        while(i<min(m,n))
        {
            if(a[i] == b[i])
            {
                res += a[i];
            }
            else break;
            i++;
        }
        return res;

        

    }
};