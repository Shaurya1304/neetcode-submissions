class Solution {
public:
    bool isSubsequence(string s, string t) {
        int k = 1; 
        for(int i =0 ; i < t.length(); i++){
            if(s[k] == t[i]){
                k++;
            }
        }
        if(s.length() > t.length()) return false;
        if(k == s.length() || s.length() == 0) return true;
        return false;
    }
};