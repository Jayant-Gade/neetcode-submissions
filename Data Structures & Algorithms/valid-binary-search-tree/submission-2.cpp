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
    bool recurse(TreeNode* root,int mini,int maxi){
        bool ans=true;
        if(root!=nullptr){
            if(root->left!=nullptr){
                ans=ans && root->left->val<root->val && root->left->val>mini && recurse(root->left,mini,root->val);
                
            }
            if(root->right!=nullptr){
                ans=ans && root->right->val>root->val && root->right->val<maxi && recurse(root->right,root->val,maxi);
            }
            return ans;
        }
        else{
            return ans;
        }
    }
public:
    bool isValidBST(TreeNode* root) {
        bool ans=true;
        if(root!=nullptr){
            ans = recurse(root,-1000000001,1000000001);
        }
        return ans;
    }
};
