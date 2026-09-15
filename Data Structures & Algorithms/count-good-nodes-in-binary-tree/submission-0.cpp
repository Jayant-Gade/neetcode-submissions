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
    int recurse(TreeNode* root,int maxi){
        if(root!=nullptr){
            if(maxi<=root->val){
                return 1+recurse(root->left,root->val)+recurse(root->right,root->val);
            }
            else{
                return recurse(root->left,maxi)+recurse(root->right,maxi);
            }
        }
        else{
            return 0;
        }
    }
public:
    int goodNodes(TreeNode* root) {
        int count=0;
        count= recurse(root,-102);
        return count;
    }
};
