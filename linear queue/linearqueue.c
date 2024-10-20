#include<stdio.h>
#include<stdlib.h>
#define size 3
int queue[size],front=-1,rear=-1;
void insert(int value)
{
    if(rear==size-1)
    {
        printf("QUEUE IS FULL!\n");
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        rear++;
        queue[rear]=value;
    }
}
void delete()
{
    if(front==-1)
    {
        printf("EMPTY QUEUE!\n");
    }
    else
    {
        printf("Deleted element from queue is %d\n",queue[front]);
        front++;
    }
    if(front>rear)
    {
        front=rear=-1;
    }
}
void display()
{
    if(front==-1||front>rear)
    {
        printf("QUEUE IS EMPTY\n");
    }
    else
    {
        printf("Queue elements:\n");
        for(int i=0;i<=rear;i++)
        {
            printf("%d\n",queue[i]);
        }
    }
}
int main()
{
    int ch,val;
    while(1)
    {
        printf("\n1.insertion\n2.deletion\n3.display\n4.exit\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter element to be added:");
            scanf("%d",&val);
            insert(val);
            break;
            case 2:delete();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            break;
            default:printf("Enter a valid choice");
            break;
        }
    }
    return(0);
}

