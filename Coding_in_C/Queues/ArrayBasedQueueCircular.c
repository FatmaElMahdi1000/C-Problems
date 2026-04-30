#include"stdio.h"
#include"stdlib.h"

//Solves problems of(reguelar array signaling full queue with having empty blocks of memory & Shiftin
//elementing time consuming.)
#define MAX 6
int rear = 0;
int front = 0;
int count = 0;
int queue[MAX];


void Qinsert()
{
    int data;
    if(MAX == count)
    {
        printf("Full Queue! Cannot Add Elements!\n");
    }
    else
    {
        printf("Insert the element: ");
        scanf("%d", &data);
        queue[rear] = data;
        rear = (rear + 1) % MAX; //(0 + 1) % 6 = 1
        count++;
        printf("Data has been pushed to the rear!\n");
        
    }

}

void Qdelete()
{
    //REVIEW//  
    if(count == 0)
    {
        printf("Empty Queue!\n");
    }
    else
    {
        printf("Popped Element = %d\n", queue[front]);
        //REVIEW// %MAX was missing
        front = (front + 1) % MAX; 
        count--;
    }
}

void QDisplay()
{
    int i, j;
    if(count == 0)
    {
        printf("Empty Queue!");

    }
    else
    {
        //front =  5; 
        j = count;
        for(i = front; j != 0; j--)
        {
            printf("%d\t", queue[i]);
            i = (i+1) % MAX;

        }
        printf("\n");
    }

}


int main()
{
    Qinsert();
    Qinsert();
    Qinsert();
    Qinsert();
    QDisplay();
    Qdelete();
    QDisplay();

}