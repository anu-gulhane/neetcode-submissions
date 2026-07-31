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
        ListNode *temp=head,*prev=head,*next=nullptr;
        int c=0;
        while(temp){
            c++;
            temp=temp->next;
        }
        int skip=c-n;
        if(skip==0)return head->next;
        temp=head;
        while(skip>0){
            skip--;
            prev=temp;
            temp=temp->next;
            next=temp->next;
        }
        prev->next=next;
        return head;


    }
};
