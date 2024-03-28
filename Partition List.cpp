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
    ListNode* partition(ListNode* head, int x) {
        ListNode* left = new ListNode(-1);
        ListNode* right = new ListNode(-1);

        ListNode* lftail = left;
        ListNode* rgtail = right;

        while(head) {
            if(head -> val < x) {
                lftail->next = head;
                lftail = lftail->next;
            }
            else {
                rgtail->next = head;
                rgtail = rgtail->next;
            }

            head = head->next;
        }

        lftail->next = right->next;
        rgtail->next = nullptr;
        return left->next;
    }
};
