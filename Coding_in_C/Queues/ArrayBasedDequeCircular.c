#include "stdio.h"
#include "stdlib.h"

#define MAX 5

int front = 0;
int rear = 0;
int count = 0;

int deq[MAX];

// Add to the Front
void Enqueue_Front()
{
    int data;

    if(count == MAX)
    {
        printf("Queue is Full\n");
        return;
    }
    else
    {
        printf("Insert the Data: ");
        scanf("%d", &data);

        front = (front - 1 + MAX) % MAX;

        deq[front] = data;

        count++;

        printf("Inserted at Front!\n");
    }
}

// Remove from the Front
void dequeue_Front()
{
    if(count == 0)
    {
        printf("Empty deque! Cannot remove!\n");
    }
    else
    {
        printf("Popped Element: %d\n", deq[front]);

        front = (front + 1) % MAX;

        count--;
    }
}

// Add to the Rear
void Insert_Rear()
{
    int data;

    if(count == MAX)
    {
        printf("Deque is Full! Cannot add new elements!\n");
    }
    else
    {
        printf("Insert the element: ");
        scanf("%d", &data);

        deq[rear] = data;

        rear = (rear + 1) % MAX;

        count++;

        printf("The Element has been pushed!\n");
    }
}

// Delete from the Rear
void Dequeue_Rear()
{
    if(count == 0)
    {
        printf("The Deque is Empty!\n");
    }
    else
    {
        rear = (rear - 1 + MAX) % MAX;

        printf("Deleted from REAR: %d\n", deq[rear]);

        count--;
    }
}

// Display Deque
void display()
{
    int i;
    int index;

    if(count == 0)
    {
        printf("\nDeque is EMPTY!\n");
        return;
    }

    printf("\nDeque elements are:\n");

    index = front;

    for(i = 0; i < count; i++)
    {
        printf("%d\t", deq[index]);

        index = (index + 1) % MAX;
    }

    printf("\n");
}

int main()
{
    Insert_Rear();
    Insert_Rear();

    display();

    Enqueue_Front();

    display();

    Dequeue_Rear();

    display();

    dequeue_Front();

    display();

    return 0;
}