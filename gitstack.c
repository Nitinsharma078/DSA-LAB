#include <stdio.h>
#define Max 10

int stack[Max];
int top = -1;

void insert()
{
    if (top == Max - 1)
        printf("\nOverflow condition !!\n\n");
    else
    {
        top = top + 1;
        scanf("%d", &stack[top]);
    }
}

void deletion()
{
    if (top == -1)
        printf("\nUnderflow condition !!\n\n");
    else
    {
        printf("\n%d is deleted from stack \n\n", stack[top]);
        top = top - 1;
    }
}

void display()
{
    if (top == -1)
        printf("\nStack is empty !!\n\n");
    else
    {
        int i;
        for (i = 0; i <= top; i++)
            printf("%d \n", stack[i]);
    }
}

void searchV()
{
    int a, i = 0;
    if (top == -1)
        printf("\nStack is empty !!\n\n");
    else
    {
        printf("Enter value for search :- ");
        scanf("%d", &a);
        for (i = 0; i <= top; i++)
        {
            if (a == stack[i])
                printf("%d is found at postion %d of stack\n\n", a, i);
        }
    }
}

int main()
{
    int n, a = 0;
    for (; a < 1;)
    {
        printf("1. Push in stack \n");
        printf("2. Pop in stack \n");
        printf("3. Display in stack \n");
        printf("4. Search a value in stack \n");
        printf("5. Exit from stack \n");
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
}