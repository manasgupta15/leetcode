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
private:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;
        
        while (curr != nullptr) {
            next = curr->next;  // Store the next node
            curr->next = prev;  // Reverse the pointer
            prev = curr;        // Move pointers one position ahead
            curr = next;
        }
        
        return prev;  // 'prev' now points to the new head of the reversed list
    }

public:
    bool isPalindrome(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        
        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;
        }
        
        if (fast != nullptr) {
            slow = slow->next;
        }
        
        slow = reverseList(slow);
        fast = head;
        
        while (slow != nullptr) {
            if (fast->val != slow->val) {
                return false;
            }
            fast = fast->next;
            slow = slow->next;
        }
        return true;
    }
};
