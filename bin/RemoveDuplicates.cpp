/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    Node* temp=head;
    Node* temp1;
    while (temp->next!=NULL)
        {
        if (temp->data==(temp->next)->data)
        {    temp1=temp->next;
            temp->next=(temp->next)->next;
            free (temp1);
        }
        else temp=temp->next;
    }
    return head;
}

