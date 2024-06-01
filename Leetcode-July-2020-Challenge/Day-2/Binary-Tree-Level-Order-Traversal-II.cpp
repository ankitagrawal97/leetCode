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
    vector<vector<int> > levelOrderBottom(TreeNode *root) {
        vector<vector<int>> LOB;
        if (root == NULL)
            return LOB;
        int level = 0;
        int count = 1;
        queue<TreeNode *> node;
        node.push(root);
        stack<vector<int>> stk;
        vector<int> sub(0);
        while(!node.empty()){
            sub.clear();
            level = 0;
            for(int i = 0; i < count; i++){
                root = node.front();
                node.pop();
                sub.push_back(root->val);
                if(root->left != NULL){
                    node.push(root->left);
                    ++level;
                }
                if(root->right != NULL){
                    node.push(root->right);
                    ++level;
                }
            }
            stk.push(sub);
            count = level;
        }
        while(!stk.empty()){
            vector<int> tmp = stk.top();
            LOB.push_back(tmp);
            stk.pop();
        }
        return LOB;
    }

};