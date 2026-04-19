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
        
        int m =0;
        ListNode* curr = head;
        while(curr != nullptr){
            curr = curr->next;
            m++;
        }
        m = m-n+1;
        if(m==1) return head->next;
        ListNode* prev = nullptr;
        curr = head;
        while(--m){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;

        return head;
    }
};
