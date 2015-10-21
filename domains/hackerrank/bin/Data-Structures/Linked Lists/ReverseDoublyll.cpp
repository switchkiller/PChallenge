everse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }

Node* Reverse(Node* head)
{
    // Complete this function
    // Do not write the main method.
     Node* temp1=NULL;
     Node* temp = head;
     while (temp !=  NULL)
     {
       temp1 = temp->prev;
       temp->prev = temp->next;
       temp->next = temp1;
       temp = temp->prev;
     }
    if (temp1!=NULL)
        head=temp1->prev;
    return head;
}
