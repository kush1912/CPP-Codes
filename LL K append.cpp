///Linked List-K Append

#include <iostream>
using namespace std;

class node{
public:
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

//Insert at head
void inserthead(node* &head,int d)
{
    node *n = new node(d);
    n->next = head;
    head = n;
}

//Insert at tail
node* inserttail(node* &head,int d)
{
    if(head==NULL)
    {
        inserthead(head,d);
        return head;
    }
    node*n = new node(d);
    n->next = NULL;
    node *temp = head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next = n;
    return head;
}

node* kappend(node*&head,int n,int s)
{
    if(n==s || n==0)
        return head;
    node *begin = head;
    node* temp = head;
    for(int i=0;i<s-n-1;i++)
    {
        temp= temp->next;
    }
    node *new_head = temp->next;
    temp->next=NULL;
    node* runner = new_head;
    while(runner->next!=NULL)
    {

        runner = runner->next;
    }
    runner->next = begin;
    head = new_head;

    return head;
}

void print(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head= head->next;
    }
    cout<<endl;
}

int main() {
	int n,t,data;
	cin>>n;
	node *h1=NULL;
	for(int i=0;i<n;i++)
    {
        cin>>data;
    	h1 = inserttail(h1,data);
    }

    cin>>t;
    h1= kappend(h1,t,n);
    print(h1);
	return 0;
}
