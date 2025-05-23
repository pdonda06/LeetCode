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
        int length = 0;
        ListNode* current = head;

        while (current != NULL) {
            length++;
            current = current->next;
        }

        int posFromStart = length - n;

        if (posFromStart == 0) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        current = head;
        for (int i = 0; i < posFromStart - 1; i++) {
            current = current->next;
        }

        ListNode* temp = current->next;
        current->next = current->next->next;
        delete temp;

        return head;
    }
};
