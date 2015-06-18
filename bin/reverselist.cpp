/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
  // Complete this method
    Node* temp;
    temp=head;
    Node *temp1;
    temp1=head;
    int val, tempr;
    int cnt=0;
    while (temp->next!=NULL)
        cnt++;
    temp=head;
    val=cnt/2;
    while(cnt!=val)
    {   //for (int j=0;j<=cnt;j++)
        //{   val=temp->next;
            for(int i=0;i<=cnt;i++)
            {
                temp1=temp1->next;   
            }
            cnt--;
            tempr=temp1->data;
            temp1->data=temp->data;
            temp->data=tempr;
            temp=temp->next;
            temp1=head;
    }
    return head;
}

