#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

//Note we're storing the 3 book structures on the stack, but title, author, we stored them on the heap.
typedef struct BookStructure
{
    char *title;
    char *author;
    double price;

} Book;

int main()
{
    bool set_value = false;
    double high_price;
    double low_price;
    int high_idx = 0;
    int low_idx = 0;

    Book book[3];
    //Memory allocation for both title and author
    for(int k= 0; k< 3; k++)
    {
        book[k].title = (char*) malloc(sizeof(char) * 50);
        book[k].author = (char*) malloc(sizeof(char) * 50);
    }

    for(int i = 0; i < 3; i++)
    {
        printf("Enter the title - Author - Price of Book Number {%d}: ", i+1);
        scanf("%49s%49s%lf",book[i].title,book[i].author, &book[i].price);
    }
    for(int j= 0; j< 3; j++)
    {
        if (set_value == false)
        {
            high_price = book[j].price;
            low_price = book[j].price;
            high_idx = j;
            low_idx = j;
            set_value = true;
        }
        if (high_price < book[j].price)
        {
            high_price =  book[j].price;
            high_idx = j;
        }
        if (low_price > book[j].price)
        {
            low_price=book[j].price;
            low_idx = j;
        }
        printf("Book's Number {%d} Name: %s\nBook's Author: %s\nBook's Price: %f\n", j+1,book[j].title, book[j].author, book[j].price);
    }
    printf("\n");

    printf("The most expensive book:\n");
    printf("%s at %f$.\n", book[high_idx].title, book[high_idx].price);
    printf("The cheapest book:\n");
    printf("%s at %f$.\n", book[low_idx].title, book[low_idx].price);

    //Free the memory we allocated with malloc
    for(int s = 0;  s < 3; s++)
    {
        free(book[s].title);
        free(book[s].author);
    }
    return 0;
}