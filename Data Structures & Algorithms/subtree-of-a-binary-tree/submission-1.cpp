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
    bool trav(TreeNode* root,TreeNode* sub){
        if (root == nullptr) return false;
        
        if (issame(root, sub)) return true;
        
        return trav(root->left, sub) || trav(root->right, sub);
    }
    bool issame(TreeNode* root,TreeNode* sub){
        if(root==nullptr || sub==nullptr){
            if(root==sub){
                return true;
            }
            else{
                return false;
            }
        }
        else if(root->val==sub->val){
            return issame(root->left, sub->left) && issame(root->right, sub->right);
        }
        else{
            return false;
        }
    }
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        return trav(root,subRoot);
    }
};
