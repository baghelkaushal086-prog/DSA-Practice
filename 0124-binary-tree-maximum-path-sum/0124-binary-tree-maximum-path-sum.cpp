#include <algorithm>

class Solution {
private:
int ans = -2147483647;
int dfs(TreeNode* root) {
if (!root) return 0;
int left = std::max(0, dfs(root->left));
int right = std::max(0, dfs(root->right));
ans = std::max(ans, root->val + left + right);
return root->val + std::max(left, right);
}
public:
int maxPathSum(TreeNode* root) {
dfs(root);
return ans;
}
};
