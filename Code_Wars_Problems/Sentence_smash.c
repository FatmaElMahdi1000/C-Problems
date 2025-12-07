#include "stdlib.h"
#include "string.h"
#include "stdio.h"

 
char *smash(const char *const words[], size_t count)
{
    // calculate total length
    size_t total_len = 1; // for null terminator
    for (size_t i = 0; i < count; i++)
        total_len += strlen(words[i]);

    char *result = (char*) calloc(total_len, sizeof(char));
    if (!result) return NULL;

    // copy words into result
    for (size_t i = 0; i < count; i++)
        strcat(result, words[i]);

    return result;  
}

int main() {
    const char *arr[] = {"hello", "there", "I am", "Fatma"};
    size_t count = sizeof(arr) / sizeof(arr[0]);

    char *r = smash(arr, count);
    if (r) {
        printf("%s\n", r);
        free(r);
    }

    return 0;
}