class Solution {
public:
    bool searchBST(TreeNode* original, int diff, TreeNode* root) {
        if(!root)   return false;
        if(root->val == diff and original != root)   return true;
        if(diff < root->val)    return searchBST(original, diff, root->left);
        else    return searchBST(original, diff, root->right);
    }
    
    bool findTargetHelper(TreeNode* curr, int k, TreeNode* root) {
        if(!curr)   return false;
        if(searchBST(curr, k-curr->val, root))    return true;
        return findTargetHelper(curr->left, k, root) or findTargetHelper(curr->right, k, root);
    }
    
    bool findTarget(TreeNode* root, int k) {
        if(!root)   return false;
        return findTargetHelper(root, k, root);
    }
};