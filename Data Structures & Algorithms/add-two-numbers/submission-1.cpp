/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
    void recurse(ListNode* l1, ListNode* l2,int carry,ListNode* ans){
        if(l1==nullptr && l2==nullptr){
            if(carry==1){
                ans->next=new ListNode(1);
            }
            return ;
        }
        if(l2==nullptr){
            if (l1->val+carry > 9){
                ans->next=new ListNode(l1->val+carry-10);
                recurse(l1->next,nullptr,1,ans->next);
            }
            else{
                ans->next=new ListNode(l1->val+carry);
                recurse(l1->next,nullptr,0,ans->next);
            }
        }
        else if(l1==nullptr){
            if (l2->val+carry > 9){
                ans->next=new ListNode(l2->val+carry-10);
                recurse(nullptr,l2->next,1,ans->next);
            }
            else{
                ans->next=new ListNode(l2->val+carry);
                recurse(nullptr,l2->next,0,ans->next);
            }
        }
        else{
            if (l1->val+l2->val+carry > 9){
                ans->next=new ListNode(l1->val+l2->val+carry-10);
                recurse(l1->next,l2->next,1,ans->next);
            }
            else{
                ans->next=new ListNode(l1->val+l2->val+carry);
                recurse(l1->next,l2->next,0,ans->next);
            }
        }
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans;
        if(l1->val+l2->val > 9){
            ans=new ListNode(l1->val+l2->val - 10);
            recurse(l1->next,l2->next,1,ans);
        }
        else{
            ans=new ListNode(l1->val+l2->val);
            recurse(l1->next,l2->next,0,ans);
        }
        return ans;

    }
};
