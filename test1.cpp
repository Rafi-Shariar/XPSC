#include<stdio.h>
#include<stdlib.h>
struct Node{
 int data;
 struct Node *next;
};
int main()
{
    typedef struct Node lamia;
    lamia *a,*b,*c;
    a=(lamia*)malloc(sizeof(lamia));
    b=(lamia*)malloc(sizeof(lamia));
    c=(lamia*)malloc(sizeof(lamia));
    a->data = 10;
    b->data = 20;
    c->data = 30;
    a->next = b;
    b->next = c;
    c->next = NULL;

    while(a!=NULL)
    {
        printf("%d->", *a);
        a= a->next;
    }

    int count=0;
    while(a!=NULL)
    {
        count++;
        a=a->next;
    }

    printf("\nTotal Node= %d\n",count);

return 0;
}