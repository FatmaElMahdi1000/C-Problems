#include "string.h"
#include "stdio.h"
#include "stdlib.h"

#define SIZE1 3
#define SIZE2 5

char **intersection(char (*set1)[SIZE2], char (*set2)[SIZE2], int *set3_size) //passing pointers behave as passing by reference, it points to the first element in the each array
{
    char **set3 = NULL;
    for(int i = 0; i < SIZE1; i++)
    {
        for(int j = 0; j < SIZE1; j++)
        {
            if(strcmp(set1[i], set2[j]) == 0)
            {
                int exist = 0;
                for(int k = 0; k < *set3_size; k++)
                {
                    if(strcmp(set1[i], set3[k]) == 0)
                    {
                        exist = 1;
                        break;
                    }
                }
                if(!exist)
                {
                    set3 = realloc(set3, sizeof(char*) * (*set3_size+1));
                    set3[*set3_size] = malloc(sizeof(char) * SIZE2);
                    strcpy(set3[*set3_size], set1[i]);
                    (*set3_size) += 1;
                }
            }
        }
    }
    return set3;
}
int main()
{
    int set3size = 0;
    int *set3_size = &set3size;
    char set1[SIZE1][SIZE2] = {"1", "10", "4"};
    char set2[SIZE1][SIZE2] = {"1", "10", "12"};
    char **set3 = intersection(set1, set2, set3_size);
    for(int m = 0; m <*set3_size; m++)
    {
        printf("%s ", set3[m]);
        free(set3[m]);
    }
    free(set3);
    printf("\n");
    return 0;

}