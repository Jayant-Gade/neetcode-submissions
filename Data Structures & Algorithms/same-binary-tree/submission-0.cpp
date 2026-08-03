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
    void trav(TreeNode* p, TreeNode* q,bool &isit){
        if(p!=nullptr && q!=nullptr){
            trav(p->right,q->right,isit);
            if(q->val!=p->val){
                isit=false;
            }
            trav(p->left,q->left,isit);
        }
        else if(q!=p){
            isit=false;
        }
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool isit=true;
        trav(p,q,isit);
        return isit;
    }
};
