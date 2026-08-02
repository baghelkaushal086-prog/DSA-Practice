class Solution {
public:
    int getNetScore(vector<int>& nums, int left, int right) {
        if (left == right) {
            return nums[left];
        }
        int pickLeft = nums[left] - getNetScore(nums, left + 1, right);
        int pickRight = nums[right] - getNetScore(nums, left, right - 1);
        return max(pickLeft, pickRight);
    }

    bool predictTheWinner(vector<int>& nums) {
        return getNetScore(nums, 0, nums.size() - 1) >= 0;
    }
};
