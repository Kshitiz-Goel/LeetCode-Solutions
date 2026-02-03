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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp = head;
        ListNode *curr = NULL;
        ListNode *prev = NULL;
        for(int i=0; i<k; i++){
            if(temp==NULL) return head;
            else temp=temp->next;
        }
        temp = head;
        int count =0;
        while(temp && count<k){
            curr=temp;
            temp=temp->next;
            curr->next = prev;
            prev = curr;
            count++;
        }
        head->next = reverseKGroup(temp,k);
        return curr;
    }
};