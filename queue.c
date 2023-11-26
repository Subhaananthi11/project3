#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*front,*rear;
void enqueue();
void dequeue();
int main()
{
  front=NULL;
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        enqueue();
    }
Printf(“queue”);
    printf("%d %d",front->data,rear->data);
    dequeue();
    printf("%d %d",front->data,rear->data);
    return 0;
}
void enqueue()
{
    int value;
    scanf("%d",&value);
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    if(front==NULL)
    {
        front=newnode;
        rear=newnode;
        newnode->next=NULL;
        rear->next=NULL;
    }
    else
    {
        rear->next=newnode;
        newnode->next=NULL;
        rear=newnode;
    }
}
void dequeue()
{
    struct node*temp;

    if(front==NULL)
    {
        printf(" queue is empty");
    }
    else
    {
        temp=front;
        front=front->next;
        free(temp);
        
    }
}

