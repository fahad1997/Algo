#include<stdio.h>
#include<stdlib.h>

struct bin_tree {
int data;
struct bin_tree * right, * left;
};
typedef struct bin_tree node;

void insert(node ** tree, int val)
{
    node *temp = NULL;
    if(!(*tree))
    {
        temp = (node *)malloc(sizeof(node));
        temp->left = temp->right = NULL;
        temp->data = val;
        *tree = temp;
        return;
    }

    if(val < (*tree)->data)
    {
       insert(&(*tree)->left,val);
    }
    else if(val > (*tree)->data)
    {
        insert(&(*tree)->right,val);
    }
}


void print_preorder(node * tree)
{
    if(tree)
    {
        printf("%d\n",tree->data);
        print_preorder(tree->left);
        print_preorder(tree->right);
    }
}

void print_inorder(node * tree)
{
     if(tree)
    {
        print_inorder(tree->left);
        printf("%d\n",tree->data);
        print_inorder(tree->right);
    }
}

void print_postorder(node * tree)
{
       if(tree)
       {
        print_postorder(tree->left);
        print_postorder(tree->right);
        printf("%d\n",tree->data);
       }

}

void main()
{
    node *root;
    node *tmp;

    root = NULL;

    int a[100], i, n;
    printf("Enter the number of elements in array: \n");
    scanf("%d",&n);
    printf("Enter the element of tree for each node: \n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    for(i=0; i<n; i++)
    {
        insert(&root, a[i]);
    }

    printf("Pre Order Display\n");
    print_preorder(root);

    printf("In Order Display\n");
    print_inorder(root);

    printf("Post Order Display\n");
    print_postorder(root);
}
