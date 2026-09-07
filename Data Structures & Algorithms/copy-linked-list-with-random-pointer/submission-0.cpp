/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node * fin,*curr,*currnew,*prev,*next;
        if(head==nullptr) return nullptr;
        map<Node*,Node*> real,fake;
        fin=new Node(head->val);
        currnew=fin;
        real[head]=fin;
        curr=head->next;
        while(curr!=nullptr){
            currnew->next= new Node(curr->val);
            real[curr]=currnew->next;
            curr=curr->next;
            currnew=currnew->next;
        }
        curr=head;
        currnew=fin;
        while(curr!=nullptr){
            currnew->random=real[curr->random];
            curr=curr->next;
            currnew=currnew->next;
        }
        return fin;

    }
};
