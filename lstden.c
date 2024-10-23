#include <stdio.h>
#include <stdlib.h>

typedef struct n
{
    int x;
    struct n *next;
} node; // 'n' yapısına 'node' ismini verdik


void bastir(node *r)
{
    while (r != NULL)
    {
        printf("%d ", r->x);
        r = r->next;  
    }
}
void ekle(node *r, int x)
{
    while (r->next != 0)
    {
        r = r->next;
    }
    r->next = (node *) malloc(sizeof(node));
    r->next->x = x; 
    r->next->next = NULL;
}

int main(void)
{
    node *root;
    root = (node *) malloc(sizeof(node));
    root->next = NULL;
    root->x = 500;
    node *iter;
    iter = root;

    int i = 0;
    while (i < 5)
    {
        ekle(root, i *10);
        i++;
    }
    bastir(root);
}