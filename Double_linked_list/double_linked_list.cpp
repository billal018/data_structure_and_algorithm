#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val )
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void print(Node* head)
{
    Node* tmp=head;
    cout<<endl;
    cout<<"print left to right: ";
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl<<endl;;
}
void revers_print(Node* tail)
{
    cout<<"print right to left: ";
    Node* tmp=tail;
     while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl<<endl;;
    
}
int main()
{

    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    Node* d=new Node(50);
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;
    c->next=d;
    d->prev=c;
    print(head);
    Node* tail=d;
    revers_print(tail);
    return 0;
}