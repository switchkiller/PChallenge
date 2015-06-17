/*

You’re given the pointer to the head node of a linked list and the position of a node to delete. Delete the node at the given position and return the head node. A position of 0 indicates head, a position of 1 indicates one node away from the head and so on. The list may become empty after you delete the node.

  
Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
   Node* temp;
    Node* temp1;
    temp1=new Node();
   temp=head;
   if(position==0)
       {
       temp1=temp;
       head=(temp->next);
   }
    else
        {
        for(int i=0;i<=position-2;i++)
            temp=temp->next;
            temp1=temp->next;
           temp->next=(temp->next)->next;
        }
        free (temp1);
        return head;
    }

