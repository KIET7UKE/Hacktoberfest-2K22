// binary tree traversals
// pre-order, in-order, post-order

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root;

void preorder(struct node *root)
{
    if (root)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(struct node *var)
{
    if (var)
    {
        inorder(var->left);
        printf("%d ", var->data);
        inorder(var->right);
    }
}

void postorder(struct node *var)
{
    if (var)
    {
        postorder(var->left);
        postorder(var->right);
        printf("%d ", var->data);
    }
}

int main()
{
    struct node *newnode, *parent;
    int choice = 1;
    root = 0;

    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter data\n");
        scanf("%d", &newnode->data);
        newnode->left = 0;
        newnode->right = 0;

        if (root == 0)
        {
            root = newnode;
            parent = newnode;
        }

        else
        {
            struct node *curr;
            curr = root;
            while (curr)
            {
                parent = curr;
                if (newnode->data > curr->data)
                {
                    curr = curr->right;
                }

                else
                {
                    curr = curr->left;
                }
            }

            if (newnode->data > parent->data)
            {
                parent->right = newnode;
            }

            else
            {
                parent->left = newnode;
            }
        }

        printf("Type 1 to continue and 0 to exit\n");
        scanf("%d", &choice);
    }

    printf("\nThe preorder traversal is:\n");
    preorder(root);

    printf("\nThe inorder traversal is:\n");
    inorder(root);

    printf("\nThe postorder traversal is:\n");
    postorder(root);

    return 0;
}