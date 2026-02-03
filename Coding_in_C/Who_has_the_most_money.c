#include <stdio.h>
#include <stdbool.h>

#define NAMELIM 0x8

struct student {
    char name[NAMELIM+1];
    unsigned fives;
    unsigned tens;
    unsigned twenties;
};

void most_money(const struct student *v, size_t n)
{
    if (n == 0) return;

    int max_sum = v[0].fives + v[0].tens + v[0].twenties;
    int first_sum = max_sum;
    size_t idx = 0;
    bool all_equal = true;

    for (size_t i = 0; i < n; i++)
    {
        int sum = v[i].fives + v[i].tens + v[i].twenties;

        if (sum != first_sum)
            all_equal = false;

        if (sum > max_sum)
        {
            max_sum = sum;
            idx = i;
        }
    }

    if (all_equal)
        printf("All students have equal amounts: %d\n", first_sum);
    else
        printf("The student: %s has the most money: %d\n", v[idx].name, max_sum);
}

int main()
{
    struct student v[] =
    {
        {"Fatma", 4, 2, 1},
        {"Mohamed", 4, 1, 1}
    };
    size_t n = sizeof(v)/sizeof(v[0]);
    most_money(v, n);
}
