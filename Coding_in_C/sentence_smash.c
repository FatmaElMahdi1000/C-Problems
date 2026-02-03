#include"stdio.h"
#include"stdlib.h"
#include"string.h"


char *smash_together(char *arr[], int arr_size)
{
    int char_count = 0; //to exclude the newline;
    for(int i =0; i <arr_size; i++)
    {
        char_count = char_count + strlen(arr[i]);
    }
    char *arr2 = (char*) calloc(char_count+1+arr_size,sizeof(char)); // added one for the '\0' of the entire string and 4(which the size of the array for fours spaces)
    for(int j =0; j < arr_size; j++)
    {
        strcat(arr2, arr[j]);
        if(j != arr_size - 1)
        {
            strcat(arr2, " ");
        }
    }

    return arr2;

}

int main()
{
    char *arr[] = {"Hi", "there", "this is", "Fatma"};
    int arr_size = sizeof(arr)/sizeof(arr[0]); //sizeof the entire array / the size of one element.
    printf("Size of the array: %zu\n", arr_size);
    char *r = smash_together(arr, arr_size);
    printf("%s\n", r);
    free(r);
    r = NULL;
}
