class Solution {
public:
    
    ListNode*findmid(ListNode*head)
    {
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast->next!=NULL and fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    
    ListNode*merge(ListNode*a,ListNode*b)
    {
        if(!a) return b;
        if(!b) return a;
        ListNode*temp=new ListNode(-1);
        ListNode*curr=temp;
        while(a!=NULL and b!=NULL)
        {
            if(a->val<=b->val)
            {
                curr->next=a;
                a=a->next;
            }
            else
            {
                curr->next=b;
                b=b->next;
            }
            curr=curr->next;
        } 
            while(a!=NULL)
            {
                curr->next=a;
                curr=curr->next;
                a=a->next;
            }
            while(b!=NULL)
            {
                curr->next=b;
                curr=curr->next;
                b=b->next;
            }
            return temp->next;
        
    }
    
    ListNode* sortList(ListNode* head) {
        
        if(head==NULL || head->next==NULL) return head;
        
        ListNode*mid=findmid(head);
        
        ListNode*right=mid->next;
        ListNode*left=head;
        mid->next=NULL;
        
       left=sortList(left);
        right=sortList(right);
        ListNode*ans=merge(left,right);
        return ans;
    }
};