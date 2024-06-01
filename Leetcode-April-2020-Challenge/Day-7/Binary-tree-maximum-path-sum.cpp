int maxToRoot(Node *root, int &re) 
{
        if (!root) return 0;

        int l = maxToRoot(root->left, re);
        int r = maxToRoot(root->right, re);

        if (l < 0) l = 0;

        if (r < 0) r = 0;

        if (l + r + root->data > re)
        {
            re = l + r + root->data;
        }

        return root->data + max(l, r);
}
  

int findMaxSum(Node *root) 
{ 
    
    int res = -2147483648; 
    maxToRoot(root, res); 
    return res; 
} 
