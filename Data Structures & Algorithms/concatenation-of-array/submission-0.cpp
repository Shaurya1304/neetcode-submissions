class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> sol;
         int i = 0;
        while (sol.size() < 2* nums.size()){
            sol.push_back(nums[i]);
            i = (i+1) % nums.size();
        }
        return sol;
    }
};