#include"stdio.h"
#include"stdlib.h"

#def MAX 5
int front = 0;
int rear = 0;
//front == reat ->no element in the queue 
int queue[MAX];

void insertQ()
{
    int data;
    if(rear == MAX)
    {
        printf("Linear Queue is full! No other block of memory available.");
    }
    else 
    {
        printf("Insert a number: ");
        scanf("%d", &data);
        queue[rear++] = data;
        printf("Data has been inserted!")

    }

}

int DeleteQ()
{
    if(rear == front)
    {
        printf("Queue is Empty Nothing to delete!");
        return;
    }
    else
    {
        printf("Popped Element from the Queue front = ", queue[front]);
        front++;
    }

}

int main()
{


}