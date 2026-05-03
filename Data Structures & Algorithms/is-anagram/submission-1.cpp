class Solution {
public:
    bool isAnagram(string s, string t) {
    unordered_map <char, int> mp;
    unordered_map <char, int> mp1;
    for(char k : s){
        mp[k]++;
    }
    for(char g : t){
        mp1[g]++;
    }      
    if(mp == mp1) return true;
    
    return false;
    }
};
