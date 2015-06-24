`
int of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method. 
    Node* temp=headA;
    Node* temp1=headB;
    int x=0,y=0,res,i;
    while(temp->next!=NULL)
    {   temp=temp->next;
        x++;
    }
    while (temp1->next!=NULL)
    {   temp1=temp1->next;
        y++;        
    }
    temp=headA;
    temp1=headB;
    if (x>y)
    {   res=x-y;
        for(i = 0; i < res; i++)
        {
            if(temp == NULL)
            {  return -1; }
            temp = temp->next;
        }
        while(temp !=  NULL && temp1 != NULL)
        {
            if(temp == temp1)
            return temp->data;
            temp= temp->next;
            temp1= temp1->next;
        }
    }
    else
    {   res=y-x;
        for(i = 0; i < res; i++)
        {
            if(temp1 == NULL)
            {  return -1; }
            temp1 = temp1->next;
        }
        while(temp !=  NULL && temp1 != NULL)
        {
            if(temp == temp1)
            return temp1->data;
            temp= temp->next;
            temp1= temp1->next;
        }
    }
    return -1;
}
