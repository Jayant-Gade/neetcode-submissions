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
    int diam(TreeNode* root,int &maxi){
        int left,right;
        if(root==nullptr){
            return 0;
        }
        else{
            left=diam(root->left,maxi);
            right=diam(root->right,maxi);
            maxi = max(left+right,maxi);
            return 1+max(left,right);
        }
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=0;
        maxi = max(diam(root->left,maxi)+diam(root->right,maxi),maxi);
        return maxi;
    }
};
