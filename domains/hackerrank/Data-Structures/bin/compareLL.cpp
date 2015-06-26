/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    Node* temp=headA;
    Node* temp1=headB;
    int cnt;
    if (headA==NULL && headB==NULL )
        cnt=1;
    else if ((headA==NULL && headB!=NULL) || (headA!=NULL && headB==NULL) )
        cnt=0;
    else
    {
        while(temp!=NULL)
            {  if (temp->data==temp1->data)
                    cnt=1;
                else 
                    cnt=0;

             if (temp1==NULL)
                    cnt=0;
                temp=temp->next;
                temp1=temp1->next;
                if (temp==NULL && temp1!=NULL)
                    cnt=0;
                if (cnt == 0)
                    break;
                
                 }
    }
    
    return cnt;
}
