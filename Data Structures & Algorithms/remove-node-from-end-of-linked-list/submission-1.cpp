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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0,len=0;
        ListNode *prev,*curr;
        curr=head;
        while(curr!=nullptr){
            curr=curr->next;
            len++;
        }
        prev=nullptr;
        curr=head;
        while(curr!=nullptr && len-n>count){
            prev=curr;
            curr=curr->next;
            count++;
        }
        if(prev==nullptr){
            head=curr->next;
        }
        else{
            prev->next=curr->next;
        }
        return head;

    }
};
