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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* a1 = list1;
        ListNode* b1 = list2;
        if(!a1 && !b1){
            return NULL;
        }
        if(!a1){
            return b1;
        }
        if(!b1){
            return a1;
        }
        ListNode* result = NULL;
        if(a1->val <= b1->val){
            result = a1;
            result->next = mergeTwoLists(a1->next,b1);
        }else{
            result = b1;
            result->next = mergeTwoLists(b1->next,a1);
        }
        return result;
    }
};