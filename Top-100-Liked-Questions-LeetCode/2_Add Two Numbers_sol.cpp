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
    ListNode* _helper(ListNode* l1,ListNode* l2, int carry){
        if(!l1 && !l2 && !carry){
            return NULL;
        }
        int carrysum = (l1?l1->val:0) + (l2?l2->val:0) + carry;
        ListNode* node = new ListNode(carrysum % 10);
        node->next = _helper((l1?l1->next:NULL),(l2?l2->next:NULL),carrysum/10);
        return node;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return _helper(l1,l2,0);
    }
    
};