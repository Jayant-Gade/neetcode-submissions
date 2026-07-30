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
    TreeNode* invertTree(TreeNode* root) {
        if(root==nullptr){
            return root;
        }
        deque<TreeNode*> d;
        TreeNode* curr, *temp;
        d.push_front(root);
        while(d.size()!=0){
            curr = d.back();
            d.pop_back();
            temp = curr->left;
            curr->left = curr->right;
            curr->right = temp;
            if(curr->left!=nullptr){
                d.push_back(curr->left);
            }
            if(curr->right!=nullptr){
                d.push_back(curr->right);
            }
        }
        return root;
    }
};
