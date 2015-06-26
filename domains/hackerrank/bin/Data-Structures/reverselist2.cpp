/*reverse a linked list and return pointer to the head
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
    Node* temp=NULL;
    Node* temp1=head;
    Node* temp2=new Node();
    while(temp1!=NULL)
        {
        temp2=temp1->next;
        temp1->next=temp;
        temp=temp1;
        temp1=temp2;
    }
    head=temp;
    return head;
}
