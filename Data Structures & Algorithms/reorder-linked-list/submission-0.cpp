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
        int n=0;
        ListNode *c=head, *p=nullptr;
        
        while(c){
            n++;
            c=c->next;
        }
        c=head;
        int left=(n+1)/2;
        for(int i=1;i<left;i++)c=c->next;
        ListNode *second=c->next;
        c->next=nullptr;
        while(second){
            ListNode *next=second->next;
            second->next=p;
            p=second;
            second=next;
        }
        c=head;
        while(p){
            ListNode *ct=c->next,*pt=p->next;
            c->next=p;
            p->next=ct;
            c=ct;
            p=pt;
        }
    }
};
