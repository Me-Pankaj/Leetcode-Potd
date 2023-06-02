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
    ListNode* removeZeroSumSublists(ListNode* head) {
        map<int,ListNode*>m;
        ListNode*x=new ListNode(0);
        x->next=head;
        head=x;
        m[0]=x;
        ListNode*curr=x->next;
        int sum=0;
        while(curr!=NULL)
        {
            sum+=curr->val;
            if(m.find(sum)!=m.end() || sum==0)
            {
                ListNode*temp=m[sum];
                int pre=sum;
                while(temp!=NULL and temp!=curr)
                {
                    temp=temp->next;
                    pre+=temp->val;
                    if(temp!=curr)
                        m.erase(pre);
                }
               m[sum]->next=curr->next;
                
            }
            else{
                 m[sum]=curr;
            }
            curr=curr->next;
        }
        return head->next;
    }
};