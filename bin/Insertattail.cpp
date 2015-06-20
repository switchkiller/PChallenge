
Node* Insert(Node *head,int data)
{
        Node* temp;
        Node* temp1;
        temp1=head;
        temp=new Node();
        temp->data=data;
        if (temp1==NULL)
                    head=temp;
        else
        {
        while (temp1->next!=NULL)
        {
            temp1=temp1->next;
        }
        temp1->next=temp;
        temp->next=NULL;
        }
        return head;
}
