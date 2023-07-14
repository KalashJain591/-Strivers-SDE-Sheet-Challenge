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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
          if (list1 == nullptr) {
            return list2;
        }
        if (list2 == nullptr) {
            return list1;
        }
        ListNode* ptr1=list1;
        ListNode* ptr2=list2;
        ListNode*head,*temp;
        if(ptr1->val>ptr2->val){
        temp=ptr2;
        head=ptr2;
        ptr2=ptr2->next;
        }
        else{
        temp=ptr1;
        head=ptr1;
        ptr1=ptr1->next;}
        while(ptr1 && ptr2)
        {
            if(ptr1->val>ptr2->val)
            {
              temp->next=ptr2;
              temp=ptr2;
              ptr2=ptr2->next;   
            }
            else{
            temp->next=ptr1;
            temp=ptr1;
            ptr1=ptr1->next;   
            }

        }
        if(ptr1)
        temp->next=ptr1;
        if(ptr2)
        temp->next=ptr2;
        return head;
    }
};