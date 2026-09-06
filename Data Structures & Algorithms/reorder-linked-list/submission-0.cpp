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
    void reorderList(ListNode* head) {
        ListNode *f,*s,*curr,*prev,*temp,*tempnext,*mid,*midnext;
        f=head->next;
        s=head;
        while(f!=nullptr && f->next!=nullptr){
            f=f->next->next;
            s=s->next;
        }
        prev=nullptr;
        curr=s->next;
        while(curr!=nullptr){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        curr=s->next;
        s->next=nullptr;
        curr=head;
        temp=curr->next;
        mid=prev;
        while(mid!=nullptr){
            temp=curr->next;
            midnext=mid->next;
            curr->next=mid;
            curr=curr->next;
            curr->next=temp;
            curr=temp;
            mid=midnext;
        }
        

    }
};
