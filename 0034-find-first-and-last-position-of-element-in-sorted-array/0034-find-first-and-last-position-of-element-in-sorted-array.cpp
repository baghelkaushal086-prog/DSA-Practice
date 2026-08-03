class Solution {
public:
    std::vector<int> searchRange(std::vector<int>& nums, int target) {
        auto low = std::lower_bound(nums.begin(), nums.end(), target);
        auto up = std::upper_bound(nums.begin(), nums.end(), target);
        
        if (low == nums.end() || *low != target) {
            return {-1, -1};
        }
        
        int start = std::distance(nums.begin(), low);
        int end = std::distance(nums.begin(), up) - 1;
        
        return {start, end};
    }
};
