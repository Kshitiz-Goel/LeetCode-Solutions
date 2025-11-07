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
    ListNode* swapPairs(ListNode* head) {
        if(!head || head->next==NULL) return head;
        ListNode *first =head;
        ListNode *second =head->next;
        int temp;
        while(second && first){
            temp=first->val;
            first->val=second->val;
            second->val=temp;
            if(!second->next) break;
            first=first->next->next;
            second=second->next->next;
        }
        return head;
    }
};