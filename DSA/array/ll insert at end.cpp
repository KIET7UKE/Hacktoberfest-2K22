#include<iostream>
#include<stdlib.h>
using namespace std;
 
struct Node
{
    int data;
    struct Node*next; 
};
void append(struct Node**head_ref,int new_data)
{
    struct Node*new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=new_data;
    new_node->next=NULL;
    if(*head_ref==NULL)
    {
        *head_ref=new_node;
        return;
    }
    struct Node*last;
    while(last->next!=NULL)
    {
       last= last->next;
    }
    last->next=new_node;
    return;
}
void print(struct Node* n)
{
   while(n!=NULL)
   {
        cout<<n->data<<"\n";
    n=n->next;
   }
}
int main()
{
    struct Node*head=NULL;
    int p,q;
    cin>>p;
    for(int i=0;i<p;i++)
    {
        cin>>q;
        append(&head,q);

    }
    print(head);
    return 0;
}

