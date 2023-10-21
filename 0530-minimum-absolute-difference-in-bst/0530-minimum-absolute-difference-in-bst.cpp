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
    void inorderT(TreeNode* root, vector<int> &inorder){
        if(root == NULL)
            return;
        
        if(root){
            inorderT(root->left, inorder);
            inorder.push_back(root->val);
            inorderT(root->right, inorder);
        }
    }

    int getMinimumDifference(TreeNode* root) {
        if(root == NULL)
            return 0;
        
        vector<int> inorder;
        inorderT(root, inorder);

        int ans = INT_MAX;
        for(int i = 0; i<inorder.size()-1; i++){
            if(inorder[i+1] - inorder[i] < ans){
                ans = inorder[i+1] - inorder[i];
            }
        }

        return ans;
    }
};