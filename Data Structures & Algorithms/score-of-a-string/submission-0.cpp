class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0;
        for( int i = 0; i < s.length() - 1; i++){
            int k = s[i]; int l = s[i+1];
            sum = sum + abs(l-k);
        }
        return sum;
    }
};