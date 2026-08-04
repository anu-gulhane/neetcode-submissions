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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *st,*en,*temp, *st_temp;
        ListNode dummy(0);
        dummy.next=head;
        st_temp=&dummy;
        st=head,temp=head;
        while(true){
            int i;
            for(i=1;i<=k;i++){
                if(!temp)break;
                temp=temp->next;
            }
            if(i!=k+1)break;
            en=temp;
            ListNode *prev=nullptr,*cur,*next, *start_dummy=st;
            while(st!=en){
                cur=st;
                next=st->next;
                cur->next=prev;
                st=next;
                prev=cur;
            }
            st_temp->next=cur;
            start_dummy->next=st;
            st_temp=start_dummy;
            if(st==nullptr)break;
        }
        return dummy.next;
    }
};
