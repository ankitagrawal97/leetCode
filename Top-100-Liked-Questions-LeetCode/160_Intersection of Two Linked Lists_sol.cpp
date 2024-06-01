/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//using extra space
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        stack<ListNode*> A;
        stack<ListNode*> B;
        ListNode* currA = headA;
        ListNode* lastread = NULL;
        while(currA){
            A.push(currA);
            currA = currA->next;
        }
        ListNode* currB = headB;
        while(currB){
            B.push(currB);
            currB = currB->next;
        }
        while(!A.empty() && !B.empty() && A.top()==B.top()){
            lastread = A.top();
             A.pop();
            B.pop();
        }
        return lastread;
    }
};
//using constant space
/*
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        ListNode* p1=headA;
        ListNode* p2=headB;
        int len1=0;
        int len2=0;
        
       //calculating lengths of both the lists 
        while(p1!=NULL)
        {
            len1++;
            p1=p1->next;
        }
        while(p2!=NULL)
        {
       len2++;
            p2=p2->next;
        }
        
         p1=headA;
         p2=headB;
        
         //making the length of both the lists equal
       
        if(len1>=len2)
        {
            int t=len1-len2;
            while(t--)
            {
                p1=p1->next;
            }
            
        }
        else //len2>=len1
        {   
            
            int t=len2-len1;
            while(t--)
            {
                p2=p2->next;
            }
        }
        
        //now as both the lists are of equal lentgth check the intersection point
        while(p1!=NULL and p2!=NULL)
        {
            if(p1==p2)
                return p1;
            else
            {
                p1=p1->next;
                p2=p2->next;
            }
        }
        return NULL; //no meeting point if the above loop exits
    }
};*/