/* you only have to complete the function given below.  
Node is defined as   

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void Postorder(node *root) {
    if (root == NULL)
        return;
 
     // first recur on left subtree
     Postorder(root->left);
 
     // then recur on right subtree
     Postorder(root->right);
 
     // now deal with the node
     printf("%d ", root->data);

}
