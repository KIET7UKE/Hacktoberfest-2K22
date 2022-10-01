#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> ans;
        TreeNode* curr = root;
        while(curr != NULL) {
            if(curr -> left) {
                TreeNode* temp = curr -> left;
                while(temp -> right != curr && temp -> right != NULL) {
                    temp = temp -> right;
                }
                if(temp -> right) {
                    ans.push_back(curr -> val);
                    temp -> right = NULL;
                    curr = curr -> right;
                }
                else {
                    temp -> right = curr;
                    curr = curr -> left;
                }
            }
            else {
                ans.push_back(curr -> val);
                curr = curr -> right;
            }
        }
        return ans;
    }
};