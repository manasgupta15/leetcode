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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;

        ListNode* leftPre = dummy;
        ListNode *currNode = head;

        for(int i = 1; i< left;i++) {
            leftPre = leftPre->next;
            currNode = currNode->next;
        }

        ListNode *preNode = nullptr;
        ListNode *subListTail = currNode;

        for(int i = 0; i<=right-left; i++) {
            ListNode *nextNode = currNode->next;
            currNode->next = preNode;
            preNode = currNode;
            currNode = nextNode;
        }

        leftPre->next = preNode;
        subListTail->next = currNode;

        return dummy->next;
    }
};
