class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            bool isMatch = true;
            for (int j = 0; j < n; j++) {
                if (nums[j] != sorted[(j + i) % n]) {
                    isMatch = false;
                    break;
                }
            }
            if (isMatch) return true;
        }
        return false;
    }
};
