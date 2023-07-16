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
// This solution is o(n) time complexity and O(1) space complexity .
// First we will get the to the middle , reverse the second half .
// Then compare the first half .
    ListNode* reverse(ListNode* node)
    {
       ListNode*temp,*prev=NULL;
       while(node)
       {
           temp=node->next;
           node->next=prev;
           prev=node;
           node=temp ;
       }
       return prev;

    }

    bool isPalindrome(ListNode* head) {
        ListNode*fast=head,*slow=head;
        while(fast->next && fast->next->next)
        {
          slow=slow->next;
          fast=fast->next->next;   
        }
        auto node=reverse(slow->next);
        auto temp=node,temp2=head;
        while(temp && temp2)
        {
            if(temp->val!=temp2->val)
            return false;
            temp=temp->next;
            temp2=temp2->next;
        }
        // slow->next=reverse(node);
        return true;
    }
};