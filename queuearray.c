
#include <stdio.h>
#define MAX 50

// Function declaration
void insert(int data);
void delete();
void display();

// Global variables
int queue[MAX];
int front = -1;
int rear = -1;

// Insert operation
void insert(int data)
{
    if (rear == MAX - 1)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }

        rear = rear + 1;
        queue[rear] = data;

        printf("Element inserted is: %d\n", queue[rear]);
    }
}

// Delete operation
void delete()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("Element deleted is: %d\n", queue[front]);
        front = front + 1;
    }
}

// Display operation
void display()
{
    int i;

    if (front == -1 || front > rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue is:\n");

        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }

        printf("\n");
    }
}

// Main function
int main()
{
    insert(10);
    insert(20);

    display();

    delete();

    display();

    return 0;
}
