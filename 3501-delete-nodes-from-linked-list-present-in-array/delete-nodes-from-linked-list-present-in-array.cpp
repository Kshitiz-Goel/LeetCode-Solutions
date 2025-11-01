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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode *updated =new ListNode(0);
        ListNode *temp1=updated;
        unordered_map<int,int> temp;
        for(int i=0;i<nums.size();i++){
            temp[nums[i]]++;
        }
        while(head){
            if(!temp[head->val]){
                temp1->next=new ListNode(head->val);
                temp1=temp1->next;
            }
            head=head->next;
        }
        return updated->next;
    }
};