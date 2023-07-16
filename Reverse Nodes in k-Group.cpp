#include<bits/stdc++.h>
using namespace std;

  
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
   int valid;
   ListNode* reverse(ListNode *head,int cnt,int k)
   {
       if(cnt==valid)
       return head;
       // reversing code 
       ListNode* first=head;
       ListNode* Last=head,*temp,*prev=NULL;
       int j=0;
       while(j!=k)
       {
           j++;
           temp=Last->next;
           Last->next=prev;
           prev=Last;
           Last=temp;

       } 
       first->next=reverse(Last,cnt+1,k);
       return prev;
   }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int sz=0;
        ListNode*temp=head;
        while(head)
        {
            head=head->next;
            sz++;
        }
        valid=sz/k;
        cout<<valid;
        return reverse(temp,0,k);

    }
};