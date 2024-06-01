/* Algorithm:
implemented 2 pointer technique, slow and fast pointer where the 
fast pointer travels 2 times faster than the slow pointer
*/

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
    ListNode* middleNode(ListNode* head) {
        if(!head){
            return NULL;
        }
        struct ListNode *fstptr = head;
        struct ListNode *slwptr = head;
    
        while(fstptr && fstptr->next){
        slwptr = slwptr->next;
        fstptr = fstptr->next->next;
        }
        return slwptr;
    }
};