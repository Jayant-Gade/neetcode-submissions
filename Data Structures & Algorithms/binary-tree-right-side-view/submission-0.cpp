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
    vector<int> rightSideView(TreeNode* root) {
        deque<deque<TreeNode*>> qu;
        TreeNode* curr  = root;
        deque<TreeNode*> subqu;
        vector<int> ans;
        if(root!=nullptr){
            ans.push_back(root->val);}
        else{
            return ans;
        }
        qu.push_back({root});
        while(qu[0].size()!=0){
            subqu.clear();
            for(int i=0;i<qu[0].size();i++){
                if(qu[0][i]!=nullptr){
                    subqu.push_back(qu[0][i]->left);
                    subqu.push_back(qu[0][i]->right);
                }
            }
            qu.push_back(subqu);
            for(int j=subqu.size()-1;j>=0;j--){
                if(subqu[j]!=nullptr){
                    ans.push_back(subqu[j]->val);
                    break;
                }
            }
            qu.pop_front();
        }
        return ans;
    }
};
