/* Algorithm
Since head of the linked list is not given
Node A -> B -> C -> D. If we want to delete node B..

    Make B = C, so the list becomes A -> C -> D and C’ -> D. 
    C’ is the original C node and after this, there isn’t any node linking to it.
    Navigate to the C’ node and delete it.

*/
/*===================================================================================*/
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
    void deleteNode(ListNode* node) {
       if (node != NULL) {
            struct ListNode *nextNode = node->next;
            node->val = nextNode->val;
            node->next = nextNode->next;
            node = nextNode;
            delete node;
       }
    }
};