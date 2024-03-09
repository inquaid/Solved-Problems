#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode
{
    int value;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

TreeNode *CreateNode(int value)
{
    TreeNode *temp = malloc(sizeof(TreeNode));
    temp->value = value;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void PrintTabs(int NumTabs)
{
    for (int i = 0; i < NumTabs; i++)
        printf("\t");
}

void PrintTree_Recursively(TreeNode *root, int level)
{
    if (root == NULL)
    {
        PrintTabs(level);
        printf("--->empty<---\n");
        return;
    }
    PrintTabs(level);
    printf("value = %d\n", root->value);

    PrintTabs(level);
    printf("left\n");
    PrintTree_Recursively(root->left, level + 1);

    PrintTabs(level);
    printf("right\n");
    PrintTree_Recursively(root->right, level + 1);

    PrintTabs(level);
    printf("###DONE###\n");
}

void PrintTree(TreeNode *root) { PrintTree_Recursively(root, 0); }

int main()
{
    TreeNode *n1 = CreateNode(12);
    TreeNode *n2 = CreateNode(11);
    TreeNode *n3 = CreateNode(10);
    TreeNode *n4 = CreateNode(9);
    TreeNode *n5 = CreateNode(8);

    n1->left = n2;
    n1->right = n5;
    n2->left = n3;
    n3->right = n4;

    PrintTree(n1);

    free(n1);
    free(n2);
    free(n3);
    free(n4);
    free(n5);
}