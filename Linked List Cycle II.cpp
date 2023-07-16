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
// It is a good question 
// don't take it lightly , just understand the logic .
    ListNode *detectCycle(ListNode *head) {
        ListNode*slow=head,*fast=head;
        if(!head)
        return NULL;
        while(fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                ListNode*temp=head;
                while(head!=fast)
                {
                    head=head->next;
                    fast=fast->next;
                }
                return fast;

            }
        }
        return NULL;
    }
};