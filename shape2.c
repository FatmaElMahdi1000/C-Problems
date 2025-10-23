#include<stdio.h>
#include<string.h>
#include<stdlib.h> //for malloc() 

#define SHAPE_SIZE_ROWS 10

char *Shape(char hash)
{
    int row = 0;
    int col = 0;
    char *shape_size = (char *)malloc(SHAPE_SIZE_ROWS* sizeof(char));
    if (shape_size == NULL)
    {
        perror("ERROR: Failed to allocate memory");
        return NULL;
    }
    else
    {
        for (int row = 0; row < 7; row++)
        {
            printf("%c", hash);
        }
    }

    
    return shape_size; //what's going to be returned at the end, however, it still persists in it's memory to be used in main later due to using malloc
}

int main()
{
    char hash = '#'; //as an input. 
    char *result = Shape(hash);
    printf("%s", result);
    return 0;

}