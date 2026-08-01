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
        Node dummy(0);
        Node *h=&dummy;
        map<Node*,Node*>m;
        Node* cur=head;
        while(cur){  
            Node *temp= new Node(cur->val);
            temp->random=cur->random;
            h->next=temp;
            h=temp;
            m[cur]=temp;
            cur=cur->next;
        }
        cur=(dummy.next);
        while(cur){
            if(cur->random)cur->random=m[cur->random];
            cur=cur->next;
        }
        return dummy.next;

    }
};
