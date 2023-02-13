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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0) return head;
        ListNode*curr=head;
        int c=0;
        while(curr!=NULL)
        {
            c++;
            curr=curr->next;
        }
        k=k%c;
        k=c-k;
        
        if(k==c) return head;
        c=1;
        curr=head;
        while(curr!=NULL and c<k)
        {
            
            curr=curr->next;c++;
            
        }
        ListNode*temp=curr->next;
        ListNode*neww=temp;
        curr->next=NULL;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=head;
        return neww;
        
        
    }
};