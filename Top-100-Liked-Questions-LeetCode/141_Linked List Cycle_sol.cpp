/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head){
            return false;
        }
        ListNode* fst = head;
        ListNode* slw = head;
        while(fst && fst->next){
            slw = slw->next;
            fst = fst->next->next;
            if(slw == fst){
                return true;
            }
        }
        return false;
    }
};