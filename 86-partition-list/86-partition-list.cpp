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
    ListNode* partition(ListNode* head, int x) {
        
        ListNode * ans = new ListNode(0);
        ListNode* curr = ans;

        for(ListNode* temp = head; temp != nullptr; temp = temp->next)
        {
            if(temp->val < x)
            {
                curr->next = new ListNode(temp->val);
                curr = curr->next;
            }
            
        }
        
        for(ListNode* temp = head; temp != nullptr; temp = temp->next)
        {
            if(temp->val >= x)
            {
                curr->next = new ListNode(temp->val);
                curr = curr->next;
            }
            
        }
        // cout<<value->val;
     
        return ans->next;
        
    }
};