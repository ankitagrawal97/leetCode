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
    int findHeight(TreeNode* root){
        if(!root){
            return 0;
        }
        int lheight = findHeight(root->left);
        int rheight = findHeight(root->right);
        return 1 + max(lheight,rheight);
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root){
            return 0;
        }
        int leftH = findHeight(root->left);
        int rightH = findHeight(root->right);
        int lDia = diameterOfBinaryTree(root->left);
        int rDia = diameterOfBinaryTree(root->right);
        
        return max(leftH+rightH, max(lDia,rDia));
    }
};