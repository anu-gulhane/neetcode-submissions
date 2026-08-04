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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode dummy(0);
        ListNode *h=&dummy;
        vector<int>a;
        for(auto i:lists){
            while(i){
                a.push_back((i)->val);
                i=i->next;
            }
        }
        sort(a.begin(),a.end());
        for(auto i:a){
            h->next=new ListNode(i);
            h=h->next;
        }
        return dummy.next;
    }

};
