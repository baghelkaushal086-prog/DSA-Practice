class Solution {
private:
    TreeNode* build(const vector<int>& nums, int l, int r) {
        if (l > r) return nullptr;
        int m = l + (r - l) / 2;
        TreeNode* root = new TreeNode(nums[m]);
        root->left = build(nums, l, m - 1);
        root->right = build(nums, m + 1, r);
        return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        return build(nums, 0, nums.size() - 1);
    }
};
