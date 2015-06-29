
/* in a linked list 
  List could be empty also
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int HasCycle(Node* head)
{
   // Complete this function
   // Do not write the main method
  struct Node  *slow_p = head, *fast_p = head;

  while(slow_p && fast_p && fast_p->next )
  {
    slow_p = slow_p->next;
    fast_p  = fast_p->next->next;
    if (slow_p == fast_p)
    {
       return 1;
    }
  }
  return 0;
}
