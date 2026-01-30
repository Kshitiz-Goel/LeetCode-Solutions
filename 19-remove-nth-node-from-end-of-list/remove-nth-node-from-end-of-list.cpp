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
        ListNode *nth =head;
        if(head -> next == NULL){
            head = NULL;
            return head;
        }
        for(int i=0;i<n;i++){
            nth=nth->next;
        }
        if(nth == NULL){
            head=head->next;
            return head;
        }
        ListNode *temp = head;
        ListNode *prev = head;
        while(nth!=NULL && nth->next!=NULL){
            prev=temp;
            temp=temp->next;
            nth=nth->next;
        }
        
        temp->next=temp->next->next;
    return head;
    }
};