class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
    int n = arr.size();
    vector<int> sol(n);
    int maxRight = -1;
    for(int i = n - 1; i >= 0; i--) {
        sol[i] = maxRight;
        maxRight = max(maxRight, arr[i]);
    }
    return sol;
    }
};