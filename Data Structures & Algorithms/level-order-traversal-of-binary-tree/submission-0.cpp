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
    vector<vector<int>> levelOrder(TreeNode* root) {
        TreeNode* curr;
        vector<vector<int>> ans;
        int level=0;
        vector<int> subans;
        deque<vector<TreeNode*>> qu;
        qu.push_back({root});
        while(qu[0].size()!=0){
            qu.push_back({});
            subans.clear();
            for(int i=0;i<qu[0].size();i++){
                if(qu[0][i]!=nullptr){
                subans.push_back(qu[0][i]->val);
                qu[1].push_back(qu[0][i]->left);
                qu[1].push_back(qu[0][i]->right);}
            }
            qu.pop_front();
            ans.push_back(subans);
            level++;
        }
        ans.pop_back();
        return ans;
    }
};
