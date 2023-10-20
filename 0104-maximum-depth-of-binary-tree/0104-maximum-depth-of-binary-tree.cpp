/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxi(TreeNode* root){
        if(root == NULL)
            return 0;
        int left = maxi(root->left);
        int right = maxi(root->right);
        int ans = max(left, right) + 1;
        return ans;
    }
    int maxDepth(TreeNode* root) {
        int ans = maxi(root);
        return ans;
    }
};