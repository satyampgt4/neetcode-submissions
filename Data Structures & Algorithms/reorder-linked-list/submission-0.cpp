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
        
        int n =0;

        ListNode* curr = head;
        while(curr!=nullptr){
            curr = curr->next;
            n++;
        }
        if(n<3)
        return;

        int m = (n+1)/2 -1;
        curr = head;
        while(m--){
            curr = curr->next;
        }
        ListNode* mid = curr;
        curr = curr->next;
        mid->next = nullptr;
        ListNode* last = nullptr;
        while(curr !=nullptr){
            ListNode* next = curr->next;
            curr->next = last;
            last = curr;
            curr = next; 
        }
        curr = head;
        while(last != nullptr){
            ListNode* temp = curr->next;
            curr->next = last;
            curr = last;
            last = temp;
        }
    }
};
