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
    ListNode* rotateRight(ListNode* head, int k) {
         int sz=0;
         if(!head || k==0)
         return head;
         ListNode*first=head,*last=head;
         while(head)
         {
             sz++;
             last=head;
             head=head->next;
             
         }
         int actual=k%sz;
         if(actual==0)
         return first;
         // in one rotation , i put the last element to the front ,and second last element become my last elem,. This is basically the relative view .
         // in 2nd rotation , also the same , but if we see from another view we can conclude that in the nth rotation my (sz-n)th node will become the first node , or simply we can say that the part of the node after (sz-n)th node come to the front .
         
         ListNode* target=first,*fast=first;
         int i;
         // So in one iteration we can get to that node.
         for(i=0;i<sz-actual-1;i++)
         {
             fast=fast->next;
         }
         target=fast->next;
         fast->next=NULL;
         last->next=first;
         return target;

    }
};