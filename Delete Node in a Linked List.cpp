/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        if (node == nullptr || node->next == nullptr) {
            return; // Cannot delete the last node or a null node
        }
        
        // Copy the value of the next node to the current node
        ListNode* nextNode = node->next;
        node->val = nextNode->val;
        
        // Update the next pointer to skip the next node
        node->next = nextNode->next;
        
        // Free the memory occupied by the next node
        delete nextNode;
    }
};
