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
        if(!head){
            return nullptr;
        }
        ListNode* slwptr = head;
        ListNode* fstptr = head;
        while(n--){

        fstptr = fstptr->next;
        }
        if(!fstptr){
            return head->next;
        }
        while(fstptr->next){
            fstptr = fstptr -> next;
            slwptr = slwptr -> next;
        }
        slwptr->next = slwptr->next->next;
        
        return head;
    }
};