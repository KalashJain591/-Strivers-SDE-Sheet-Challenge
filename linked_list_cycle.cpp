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
// It can be solved using floyd cycle detection algorithm .
// Just by using slow and fast pointer.
    bool hasCycle(ListNode *head) {
        if(!head)
        return false;
        ListNode*slow=head;
        ListNode*fast=head;
        
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast)
            return true;
        }
        return false;
    }
};