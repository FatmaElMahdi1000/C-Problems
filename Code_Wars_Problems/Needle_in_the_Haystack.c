#include"stdio.h"
#include"stdlib.h"
#include"string.h"

#define SIZE 100
// [const char] [*const haystack[]]   a constant pointer to constant characters
char *find_needle(const char *const haystack[], size_t count)
{
    char *result= (char *) calloc(SIZE, sizeof(char));

    for(size_t i = 0; i < count; i++)
    {
        if(strcmp(haystack[i], "needle") == 0)
        {
            result = "found the needle at position";
            printf("%s %zu", result, i);
        }
    }
	return calloc(1, 1);
}

int main()
{
     const char *const haystack[] = {"hay","junk", "hay", "hay", "moreJunk", "needle", "randomJunk"};
     size_t count = sizeof(haystack) / sizeof(haystack[0]); //size of array/ one element in the array
     char *r = find_needle(haystack,count);
     free(r);

}