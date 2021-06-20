#include<stdio.h>
#define MAX 5

void enqueue();
void dequeue();
void display();
int Q[MAX];
int front=-1;
int rear=-1;

main()
{
    int choice;
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");
        printf("4.Quit\n");
        while(1)
    {
        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1 : enqueue(); break;
            case 2 : dequeue(); break;
            case 3 : display(); break;
            case 4 : exit(1);
            default:
                printf("wrong choice");
        }
    }
}
void enqueue()
{
    int x;
    if(rear == MAX-1)
    printf("\nQueue is full!\n\n\n\n");
    else
    {
        if(front == -1)
            front=0;
        printf("Insert the element in queue : ");
        scanf("%d",&x);
        rear=rear+1;
        Q[rear]=x;
    }
}
void dequeue()
{
    if(front == -1||front>rear)
    {
        printf("Queue underflow\n");
        return 0;
    }
    else
    {
        printf("Deleted element is : %d\n",Q[front]);
        front=front+1;
    }
}
void display()
{
    int i;
    if(front == -1)
        printf("Queue is empty");
    else
    {
        printf("Final Queue is:\n");
        for(i=front;i<=rear;i++)
            printf("%d\t ",Q[i]);
    }
    printf("\n");
}

