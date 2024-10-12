#include <stdio.h>
#include <stdlib.h>

#define MAX 3
int s[10], top=-1, i, item, ch;

void push();
int pop();
void display();

void main()

{
    while(1)
  
    {
        printf("1:push\n2:pop\n3:display\n4:exit\n");
        printf("enter your choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: push();
                  break;
            
            case 2: item=pop();
                   if(item!=-1)
                   printf("popped element=%d\n",item);
                   break;
            
            case 3: display();
                   break;
                   
            case 4: exit(0);
                   break;
                   
        }
    }
}
void push()
{
    if(top==MAX-1)
    {
        printf("stack overflow\n");
        return;
    }
    printf("enter element to be pushed:");
    scanf("%d",&item);
    top=top+1;
    s[top]=item;
}
int pop()
{
    if(top==-1)
    {
        printf("stack underlow\n");
        return(-1);
    }
    item=s[top];
    top=top-1;
    return(item);
    }
            
void display()
{
    if(top==-1)
    {
        printf("stack is empty\n");
        return;
    }
    printf("stack contents:\n");
    for(i=top;i>=0;i--)
    printf("%d\n",s[i]);
}