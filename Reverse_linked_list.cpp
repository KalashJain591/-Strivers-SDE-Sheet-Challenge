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
// So I have to keep the record of the 3 pointers .
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL, *next=head,*temp;
        while(next!=NULL)
        {
            temp=next->next;
            next->next=prev;
            prev=next;
            next=temp;
        }
        return prev;
    }
};