nsert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev
   }
*/
Node* SortedInsert(Node *head,int data)
{
struct Node *newnode = NULL, *temp = NULL, *prenode = NULL;
newnode = (struct Node *)malloc(sizeof(struct Node));
newnode->data = data;
newnode->next = NULL;
newnode->prev = NULL;

if(head == NULL) // if empty list.
{    head=newnode;
     return head;
}
      
temp = head;
while(temp)
    {
    if(temp->data >= data)
        {
        newnode->next = temp;
        newnode->prev = temp->prev;
        newnode->prev->next = newnode;
        temp->prev = newnode;
        return head;
    }
    prenode = temp;
    temp = temp->next;
}
prenode->next = newnode;
newnode->prev = prenode;
newnode->next=NULL;
return head;

}
