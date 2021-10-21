#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *right_child;
    struct node *left_child;
};
struct node* new_node(int x)
{
    struct node *p;
    p = malloc(sizeof(struct node));
    p->data = x;
    p->left_child = NULL;
    p->right_child = NULL;
    return p;
}
struct node* insert(struct node *root, int x)
{
    if(root==NULL)
        return new_node(x);
    else if(x%4!=0)
        root->right_child = insert(root->right_child, x);
    else
        root->left_child = insert(root->left_child,x);
    return root;
}
int height(struct node* node)
{
    if (node == NULL)
        return 0;
    else {
        int lheight = height(node->left_child);
        int rheight = height(node->right_child);
        if (lheight > rheight)
            return (lheight + 1);
        else
            return (rheight + 1);
    }
}
void printCurrentLevel(struct node* root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        printf("%d ", root->data);
    else if (level > 1) {
        printCurrentLevel(root->left_child, level - 1);
        printCurrentLevel(root->right_child, level - 1);
    }
}
void printLevelOrder(struct node* root)
{
    int h = height(root);
    int i;
    for (i = 1; i <= h; i++)
        printCurrentLevel(root, i);
}
int main() {
 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
         struct node *root;
        int x;
        scanf("%d",&x);
        root = new_node(x);
        n--;
        while(n--){
            int x;
            scanf("%d",&x);
            insert(root,x);
        }
        printLevelOrder(root);
        printf("\n");
    }
}
