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
    ListNode* insertionSortList(ListNode* head) {
         
        for(ListNode *temp = head; temp != nullptr; temp = temp->next)
        {
            for(ListNode* j = head; j->next != nullptr; j = j->next)
            {
                if(j->val > j->next->val)
                {
                    swap(j->val, j->next->val);
                }
            }
            
        }
        
        return head;
    }
};