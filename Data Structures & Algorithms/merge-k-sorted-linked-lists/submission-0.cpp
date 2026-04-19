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
    // Comparator ko struct banana hoga
    struct Compare {
        bool operator()(ListNode* a, ListNode* b) {
            return a->val > b->val; // Min-heap
        }
    };

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* head = new ListNode() ;
        ListNode* curr = head ;

        priority_queue<ListNode*, vector<ListNode*>, Compare> pq;

        for (int i = 0; i < lists.size(); i++) {
            if (lists[i] != nullptr)
                pq.push(lists[i]);
        }

        while (!pq.empty()) {
            ListNode* temp = pq.top();
            pq.pop();

            curr->next = temp;
            curr = curr->next;

            if (temp->next != nullptr) {
                pq.push(temp->next);
            }
        }

        return head->next;
    }
};
