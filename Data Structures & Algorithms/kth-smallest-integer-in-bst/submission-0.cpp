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
    void recurse(TreeNode* root,int k,int &curr,int &ans){
        if(root!=nullptr){
            if(curr+1>k){
                return;
            }
            if(root->left!=nullptr){
                recurse(root->left,k,curr,ans);
            }
            if(curr+1==k){
                ans = root->val;
                curr++;
                return;
            }
            curr++;
            if(root->right!=nullptr){
                recurse(root->right,k,curr,ans);
            }
        }

    }
public:
    int kthSmallest(TreeNode* root, int k) {
        int curr=0;
        int ans=-1;
        recurse(root,k,curr,ans);
        return ans;
    }
};
