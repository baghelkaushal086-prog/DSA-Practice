class Solution {
public:
    std::vector<int> findMissingElements(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        std::vector<int> missing;
        for (size_t i = 0; i < nums.size() - 1; ++i) {
            for (int j = nums[i] + 1; j < nums[i + 1]; ++j) {
                missing.push_back(j);
            }
        }
        return missing;
    }
};
