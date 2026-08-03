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
    int trav(TreeNode* root,bool &isit){
        int l,r;
        if(root==nullptr){
            return 0;
        }
        l=trav(root->left,isit);
        r=trav(root->right,isit);
        if(abs(l-r)>1){
            isit=false;
        }
        return 1+max(l,r);
        

    }
public:
    bool isBalanced(TreeNode* root) {
        bool isit = true;
        trav(root,isit);
        return isit;
    }
};
