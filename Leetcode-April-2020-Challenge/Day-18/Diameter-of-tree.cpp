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
    int findheight(struct TreeNode *root){
        if(!root){
            return 0;
        }
        int lheight = findheight(root->left);
        int rheight = findheight(root->right);
        if(lheight>rheight){
            return 1+lheight;
        }else{
            return 1+rheight;
        }
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root){
            return 0;
        }
        int lheight = findheight(root->left);
        int rheight = findheight(root->right);
        int rdia = diameterOfBinaryTree(root->right);
        int ldia = diameterOfBinaryTree(root->left);
        
        return max(lheight+rheight,max(ldia,rdia));
        
    }
};