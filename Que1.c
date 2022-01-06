#include<stdio.h>
#define Max 10

int queue[Max];
int rear = -1, front = -1;

void insert()
{
    if (rear == Max - 1)
        printf("\nOverflow condition !!\n\n");
    else
    {
        rear = rear + 1;
        scanf("%d", &queue[rear]);
        if (front == -1)
            front++;
    }
}

void deletion()
{
    if (front == -1 || front > rear)
        printf("\nUnderflow condition !!\n\n");
    else
    {
        printf("\n%d is deleted from queue \n\n", queue[front]);
        front = front + 1;
    }
}

void display()
{
    if (rear == -1 || front > rear)
        printf("\nQueue is empty !!\n\n");
    else
    {
        int i;
        for (i = front; i <= rear; i++)
            printf("%d \n", queue[i]);
    }
}

void searchV()
{
    int a, i = 0;
    if (rear == -1 || front > rear)
        printf("\nQueue is empty !!\n\n");
    else
    {
        printf("Enter value for search :- ");
        scanf("%d", &a);
        for (i = 0; i <= rear; i++)
        {
            if (a == queue[i])
                printf("%d is found at postion %d of queue\n\n", a, i);
        }
    }
}

int main()
{
    int n, a = 0;
    for (; a < 1;)
    {
        printf("1. Insert in queue \n");
        printf("2. Delete in queue \n");
        printf("3. Display in queue \n");
        printf("4. Search a value in queue \n");
        printf("5. Exit from queue \n");
        printf("Enter your choice :- ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            insert();
            break;

        case 2:
            deletion();
            break;

        case 3:
            display();
            break;

        case 4:
            searchV();
            break;

        case 5:
            a = 1;
            break;

        default:
            printf("Invaild Input\n\n");
        }
    }
    printf("\nYou are exited !!\n");
    return 0;
} s