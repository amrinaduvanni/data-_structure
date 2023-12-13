#include<stdio.h>
#include<stdlib.h>
int front=-1, rear=-1, max;
int queue[100];
void enqueue()
{
    int item;
    printf("\nEnter the element\n");
    scanf("\n%d",&item);
    if(rear==max-1)
    {
        printf("\nOverflow\n");
        return;
    }
    if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
    }
    else
    {
        rear=rear+1;
    }
    queue[rear]=item;
    printf("\n value inserted");
}

void dequeue()
{
    int item;
    if(front==-1||front>rear)
    {
        printf("\nUnderflow\n");
        return;
    }
    else
    {
        item=queue[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front=front+1;
        }
        printf("\nelement deleted");
    }
}
void display()
{
    int i;
    if(rear==-1)
    {
        printf("\n Empty queue\n");
    }
    else
    {
        printf("\nElement in the queue are\n");
        for(i=front;i<=rear;i++)
        {
            printf("\n%d",queue[i]);
        }
    }
}
int main()
{
    int choice;
    printf("\n Enter the size of queue:");
    scanf("%d",&max);
    printf("Queue Operations Using Array");
    printf("\n1.Enqueue \n2.Dequeue \n3.Display \n4.Exit");
    while(choice!=4)
    {
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("\nExited");
                break;
            default:
                printf("\nEnter valid choice\n");
            
        }
    }
    return 0;
}
