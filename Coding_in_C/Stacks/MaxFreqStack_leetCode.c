#include"stdio.h"
#include"stdlib.h"
#include"stdbool.h"

typedef struct
{
    // Dynamically allocated array representing stack storage for integers
    int *collection;

    //(Memory capacity) Maximum number of elements the stack can hold
    int capacity;

    // Actual number of elements currently stored in the stack
    int size; 

}FreqStack;

bool is_empty(FreqStack *obj)
{
    return (*obj).size == 0;
}

bool is_full(FreqStack *obj)
{
    return (*obj).size == (*obj).capacity;
}

//TODO freqStackPush FUNC
bool freqStackPush(FreqStack *obj,int val)
{
    if(is_full(obj))
    {
        return false;
    }
    else
    {
        // Using current size as index, then incrementing size for next insertion
        (*obj).collection[(*obj).size] = val;
        (*obj).size++;
        return true;
    }
}

//TODo STACK CREATION - allocated on the heap
FreqStack *freqStackCreate(int capacity)
{
    if(capacity <= 0)
    {
        return NULL;
    }

    // Allocate stack structure on heap
    FreqStack *obj = (FreqStack*) malloc(sizeof(FreqStack));

    // If stack structure allocation fails
    if(obj == NULL)
    {
        return false;
    }

    // Allocate memory for stack elements
    (*obj).collection = (int*) malloc(sizeof(int) * capacity);

    if((*obj).collection == NULL)
    {
        return false;
    }

    // Initialize stack metadata
    (*obj).capacity = capacity;
    (*obj).size = 0;

    return obj;
}

// REVIEW Count frequency of a value inside the stack
int counting_freq(FreqStack *obj, int val)
{
    int count = 0;

    for(int j=0; j< (*obj).size; j++)
    {
        if((*obj).collection[j] == val)
        {
            count++;
        }
    }

    return count;
}

//TODO POP ELEMENTS
bool freqStackPop(FreqStack* obj, int *val) 
{
    if(is_empty(obj))
    {
        return false;
    }
    else
    {
        int best_index = -1;
        int best_freq = 0;

        // Traverse stack from top to bottom (to respect recency rule)
        for(int q=(*obj).size-1; q>= 0;q--)
        {
            int curr_val = (*obj).collection[q];
            int freq = counting_freq(obj,curr_val);

            if(freq > best_freq)
            {
                best_freq = freq;
                best_index = q;
                *val = curr_val;
            }
        }

        if(best_index == -1)
        {
            return false;
        }
        else
        {
            // Popping = dropping element by shifting array left
            // (Logical deletion, not physical memory deletion)
            for(int i = best_index; i < obj->size - 1; i++)
            {
                obj->collection[i] = obj->collection[i + 1];
            }

            obj->size--;
        }

        return true;
    }   
}

//TODO Destroy/Free the stack memory
void freqStackFree(FreqStack* obj) 
{
    free((*obj).collection);
    free(obj);
}

int main()
{
    int capacity = 6;

    // Create stack on heap
    FreqStack *obj = freqStackCreate(capacity);

    if (obj == NULL)
    {
        fprintf(stderr,"Error creating a stack!\n");
        exit(EXIT_FAILURE);
    }

    freqStackPush(obj, 5);
    freqStackPush(obj, 7);
    freqStackPush(obj, 5);
    freqStackPush(obj, 7);
    freqStackPush(obj, 4);
    freqStackPush(obj, 5);

    printf("The Stack elements:\n");
    for(int i=0; i< (*obj).size; i++)
    {
        printf("%d ", (*obj).collection[i]);
    }
    printf("\n");

    // REVIEW Print frequency without printing duplicates
    for(int s=0; s< (*obj).size; s++)
    {
        bool already_printed = false;

        for(int k = 0; k < s; k++)
        {
            if((*obj).collection[s] == (*obj).collection[k])
            {
                already_printed = true;
                break;
            }
        }

        if(!already_printed)
        {
            printf("%d repeated %d time\n",
                   (*obj).collection[s],
                   counting_freq(obj,(*obj).collection[s]));
        }       
    }

    printf("\n");

    // ⭐ Added POP demonstration in main
    int popped_value;

    printf("Popping elements:\n");
    while(freqStackPop(obj, &popped_value))
    {
        printf("Popped: %d\n", popped_value);
    }

    printf("Stack Size now: %d\n", (*obj).size);

    if(is_full(obj))
    {
        printf("STATUS: the stack is full\n");
    }
    else
    {
        printf("STATUS: Keep Pushing to the stack!\n");
    }

    // Free memory
    freqStackFree(obj);
}