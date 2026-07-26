class Solution {
public:
    
    bool fun(vector<int> &having , vector<int> &needed){
        for(int i =0;i<256;i++){
            if(having[i]<needed[i]){
                return false;
            }
        }
        return true; 
    }

    string minWindow(string s, string t) {
        int n = s.size();
        int m = t.size();

        vector<int> having(256,0);
        vector<int>needed(256,0);

        if(n<m){
            return "";
        }
        for(int i=0;i<m;i++){
            needed[t[i]]++;
        }
        int low =0;
        int high = 0;
        int res = INT_MAX;
        int start = -1;

        for(int high = 0;high<n;high++){
            having[s[high]]++;
            while(fun(having,needed)){
                int len = high - low + 1;
                if(res>len){
                    res = len;
                    start = low;
                }
                having[s[low]]--;
                low++;
            }
        }
            if(res == INT_MAX){
                return "";
            }
            return s.substr(start,res);
    }
};