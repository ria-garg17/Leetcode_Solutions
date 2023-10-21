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
    void inorder(TreeNode* root, priority_queue<int> &pq, int k){
        if(root == NULL)
            return;
        
        inorder(root->left, pq, k);
        if(pq.size() < k){
            pq.push(root->val);
        }
        inorder(root->right, pq, k);
    }

    int kthSmallest(TreeNode* root, int k) {
        if(root == NULL)
            return 0;
        
        priority_queue<int> pq;
        inorder(root, pq, k);
        return pq.top();
    }
};