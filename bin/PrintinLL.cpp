#include<iostream>
#include<stdio.h>
using namespace std;


void insert(Node *head, int data)
{
        Node* temp;
        temp=new Node();
        temp->data=data;
        temp->next=head;
        head=temp;
}

void Print(Node* head)
{
        Node* temp=new Node();
        temp=head;
        while(temp!=NULL)
        {
                cout<<temp->data<<endl;
                temp=temp->next;
        }
}

/*int main()
{
        Node* head;
        int data;
        char c;
        head=new Node();
        head=NULL;
        c=getc(stdin);
        while( (c != '\n') && (c != EOF))
        {
                cin>>data;
                insert(head,data);
                Print(head);
        }
        return 0;
}*/
