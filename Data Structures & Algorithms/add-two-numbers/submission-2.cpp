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
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans,*curr,*l1curr,*l2curr;
        l1curr=l1;
        l2curr=l2;
        int carry=0;
        if(l1curr->val+l2curr->val+carry>9){
            ans=new ListNode(l1curr->val+l2curr->val+carry-10);
            carry=1;
        }
        else{
            ans=new ListNode(l1curr->val+l2curr->val+carry);
            carry=0;
        }
        curr=ans;
        l1curr=l1curr->next;
        l2curr=l2curr->next;
        while(l1curr!=nullptr && l2curr!=nullptr){
            if(l1curr->val+l2curr->val+carry>9){
                ans->next=new ListNode(l1curr->val+l2curr->val+carry-10);
                carry=1;
            }
            else{
                ans->next=new ListNode(l1curr->val+l2curr->val+carry);
                carry=0;
            }
            l1curr=l1curr->next;
            l2curr=l2curr->next;
            ans=ans->next;
        }
        while(l1curr!=nullptr){
            if(l1curr->val+carry>9){
                ans->next=new ListNode(l1curr->val+carry-10);
                carry=1;
            }
            else{
                ans->next=new ListNode(l1curr->val+carry);
                carry=0;
            }
            l1curr=l1curr->next;
            ans=ans->next;
        }
        while(l2curr!=nullptr){
            if(l2curr->val+carry>9){
                ans->next=new ListNode(l2curr->val+carry-10);
                carry=1;
            }
            else{
                ans->next=new ListNode(l2curr->val+carry);
                carry=0;
            }
            l2curr=l2curr->next;
            ans=ans->next;
        }
        if(carry==1){
            ans->next = new ListNode(1);
        }
        return curr;

    }
};
