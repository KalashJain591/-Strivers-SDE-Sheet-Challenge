#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int x)
    {
        this->val = x;
        this->next = NULL;
    }
};

class Stack
{
public:
    Node *top;
    Stack()
    {
        top = nullptr;
    }
    void push(int data)
    {
        Node *temp = new Node(data);
        temp->next = top;
        top = temp;
    }
    int pop()
    {
        int data = top->val;
        top = top->next;
        return data;
    }
};

class Queue{
public:
Node*front,*rear;

Queue(){
    front=nullptr;
    rear=nullptr;
}

void push(int data){
Node*temp=new Node(data);
if(front==nullptr)
front=rear=temp;
else{
rear->next=temp;
rear=temp;
}}

int pop(){
    if(front)
    {
        int data=front->val;
        front=front->next;
        return data;
    }
}
};


int main()
{
    int i, j, k;
    Node *a = new Node(5);
    Node *head = a;
    a->next = new Node(10);
    a = a->next;
    a->next = new Node(15);
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
}