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
    int ans = 0;
    pair<int,int> avgSubTree(TreeNode *root){
        if(root ==NULL)return {0,0};
        int sz = 0;
        int sum = 0;
        pair<int,int> left = avgSubTree(root->left);
        pair<int,int> right = avgSubTree(root->right);
        sz = left.first + right.first + 1;
        sum = left.second + right.second + root->val;
        if(sum/sz == root->val)ans++;
        return {sz,sum};
    }
    int averageOfSubtree(TreeNode* root) {    
        avgSubTree(root);
        return ans;
    }
};