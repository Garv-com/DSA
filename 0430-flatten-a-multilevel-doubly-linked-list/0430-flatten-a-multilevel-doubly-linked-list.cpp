/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if(head==NULL) return head;

        Node* curr=head;
        while(curr!=NULL){
            if(curr->child != NULL){
                //flatten the child nodes
                Node* nxt = curr->next;
                curr->next = flatten(curr->child);
                curr->next->prev = curr;
                curr->child=NULL;

                //finding tail
                while(curr->next !=NULL) curr= curr->next;

                //attaching tail to nxt
                if(nxt != NULL){
                    curr->next = nxt;
                    nxt->prev=curr;
                }
            }
            else curr=curr->next;
        }
        return head;
    }
};