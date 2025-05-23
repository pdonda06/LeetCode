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
    bool isPalindrome(ListNode* head) {
        vector<int> ans;

        ListNode* current = head;
        while (current != NULL) {
            ans.push_back(current->val);
            current = current->next;
        }
        
        vector<int> ans1;  
        for (int i = 0; i < ans.size(); i++) {
            ans1.push_back(ans[i]);
        }

        reverse(ans1.begin(), ans1.end());


        if(ans == ans1){
            return true;
        }
        return false;
              
    }
};