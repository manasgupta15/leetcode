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
    ListNode* reverseList(ListNode *head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while(curr!=nullptr) {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
private:
    ListNode* doubleList(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = head;
        int carry = 0;
        int sum;

        while(temp!=nullptr) {
            sum = carry + (temp->val * 2);
            carry = sum / 10;
            sum = sum % 10;
            temp->val = sum;
            prev = temp;
            temp = temp->next;
        }

        if(carry > 0) {
            prev->next = new ListNode(carry);
        }

        return head;
    }
public:
    ListNode* doubleIt(ListNode* head) {
        head = reverseList(head);
        head = doubleList(head);
        return reverseList(head);
    }
};
