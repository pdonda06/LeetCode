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

    ListNode* revll(ListNode* head){
        if(head == NULL || head->next == NULL )return head;
        ListNode* newHead = revll(head->next);
        ListNode* fr = head->next;
        fr->next = head;
        head->next = NULL;
        return newHead;
    }

    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next == NULL) return true;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next != NULL && fast->next->next != NULL){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* newHead = revll(slow->next);
        ListNode* first = head;
        ListNode* sec = newHead;
        
        while(sec != NULL){
            if(first->val != sec->val){
                revll(newHead);
                return false;
            }
            first= first->next;
            sec = sec->next;
        }
        revll(newHead);
        return true;

    }
};