#include <stdio.h>
#define MAX 5

void insertq(int[], int);
void deleteq(int[]);
void display(int[]);

int front =  - 1;
int rear =  - 1;

int main()
{
    int  item,ch;
    int queue[MAX];
        printf(" Circular Queue:\n1. Insert \n2. Delete\n3. Display\n0. Exit");
        do
    {
        printf("\nEnter your Choice  : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                insertq(queue, item);
                break;
            case 2:
                deleteq(queue);
                break;
            case 3:
                display(queue);
                break;
        }
    }while (ch != 0);
}


void insertq(int queue[], int item)
{
    printf("Enter number: ");
    scanf("%d", &item);
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1))
    {
        printf("\nQueue is full\n\n\n\n");
        return;
    }
    else if (rear ==  - 1)
    {
        rear++;
        front++;
    }
    else if (rear == MAX - 1 && front > 0)
    {
        rear = 0;
    }
    else
    {
        rear++;
    }
    queue[rear] = item;
}

void display(int queue[])
{
    int i;
    printf("\n");
    if (front > rear)
    {
        for (i = front; i < MAX; i++)
        {
            printf("%d ", queue[i]);
        }
        for (i = 0; i <= rear; i++)
            printf("%d ", queue[i]);
    }
    else
    {
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
    }
}

void deleteq(int queue[])
{
    if (front ==  - 1)
    {
        printf("Queue is empty ");
    }
    else if (front == rear)
    {
        printf("\n %d deleted", queue[front]);
        front =  - 1;
        rear =  - 1;
    }
    else
    {
        printf("\n %d deleted", queue[front]);
        front++;
    }
}
