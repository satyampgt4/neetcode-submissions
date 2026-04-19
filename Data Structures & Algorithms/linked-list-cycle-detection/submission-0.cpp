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
    bool hasCycle(ListNode* head) {
        
        ListNode* first = head;
        ListNode* second = head;
        while(second->next != nullptr && second->next->next != nullptr){
            second = second->next->next;
            first = first->next;
            if(first == second){
                return true;
            }
        }
        return false;
    }
};
