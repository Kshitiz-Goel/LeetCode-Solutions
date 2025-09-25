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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0) return head;
        //traverse len
        int count=1;
        ListNode*temp=head;
        while(temp->next){
            count++;
            temp=temp->next;
        }
        //condition
        k = k%count;
        if(k==0)return head;
        //point to end to start :
        temp->next=head;

        //loop me while point to the len-k 
        int eqlen=0;
        eqlen = count-k;
        ListNode*temp1=head;
        while(eqlen>1){
            temp1=temp1->next;
            eqlen--;
        }
        temp=temp1->next;
        temp1->next=NULL;
        return temp;
    }
};