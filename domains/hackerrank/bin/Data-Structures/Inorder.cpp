
/* you only have to complete the function given below.  
Node is defined as 

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void Inorder(node *root) {
        if (root == NULL)
          return;
 
     /* first recur on left child */
     Inorder(root->left);
 
     /* then print the data of node */
     printf("%d ", root->data);  
 
     /* now recur on right child */
     Inorder(root->right);
}
