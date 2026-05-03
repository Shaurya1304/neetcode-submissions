class Solution {
public:
    int lengthOfLastWord(string s) {
        vector <string> p;
        string k = "";
        for(char i : s){
            if(i != ' '){
                k += i;
            }else{
                if( k != ""){
                    p.push_back(k);
                    k = "";
                }
            }
        }
        if(k != "") p.push_back(k);
        return p[p.size()-1].length();
    }
};