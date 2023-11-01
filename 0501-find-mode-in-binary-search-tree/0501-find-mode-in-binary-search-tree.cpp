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
    void inorder(TreeNode* p, vector<int> &inT){
        if(p == NULL)
            return;
        if(p){
            inorder(p->left, inT);
            inT.push_back(p->val);
            inorder(p->right, inT);
        }
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> A, modes;
        if (root == NULL) return modes;
        inorder(root,A);
        if (A.size()==1) {
            modes.push_back(A[0]);
        } 
        else {
            int longestRun = 1, currentRun = 1;
            for (int i = 0; i < A.size()-1; i++) {
                currentRun = (A[i] == A[i+1] ? currentRun + 1 : 1);
                if (currentRun > longestRun) longestRun = currentRun;
            }
            if (longestRun==1) {
                return A;
            }
            currentRun = 1;
            for (int i = 0; i < A.size()-1; i++) {
                currentRun = (A[i] == A[i+1] ? currentRun + 1 : 1);
                if (currentRun == longestRun) modes.push_back(A[i]);
            }
        }
        return modes;
        
    }
};