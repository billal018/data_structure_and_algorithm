#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val )
    {
        this->val=val;
        this->next=NULL;
    }
};
void Insert_at_tail(Node * &head,int v)
{
    Node * newNode=new Node(v);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node * tmp=head;
    while (tmp->next!=NULL)
    {
       tmp=tmp->next;
    }
    tmp->next=newNode;
    
}
void printlist(Node * head)
{
    cout<<"print your linked list\n";
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" \n";
        tmp=tmp->next;
    }
    
}
int main()
{
    Node* head=NULL;
    while(true){
    cout<<"option 1: to insert  tail"<<endl;
    cout<<"option 2: printlink list"<<endl;
    cout<<"option 3: to terminated"<<endl;
    int op;
    cin>>op;
    if(op==1)
    {   cout<<"Enter Node value\n";
        int val;
        cin>>val;
        Insert_at_tail(head,val);
    }
    else if(op==2) 
    {
          printlist(head);
    }
    else if(op==3)
    {
        break;
    }
    }
    return 0;

}