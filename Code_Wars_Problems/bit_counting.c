#include "stdio.h"
#include "string.h"
#include "stdlib.h"

typedef unsigned int ui;

ui range_bit_count(ui a, ui b)
{
    int size = b - a + 1;
    ui *arr = (ui*) malloc(sizeof(int) * size);

    for (int i = 0; i < size; i++)
    {
        arr[i] = a + i;
    }

    char result[1000] = "";
    ui count = 0;   // <-- added

    for (int j = 0; j < size; j++)
    {
        ui idx = 0;
        char bits[100];
        ui temp = arr[j];
        ui r;

        if (temp == 0)
        {
            bits[idx++] = '0';
        }

        while (temp > 0)
        {
            r = temp % 2;
            if (r == 0)
            {
                bits[idx++] = '0';
            }
            else
            {
                bits[idx++] = '1';
                count++;   // <-- added
            }
            temp = temp / 2;
        }

        bits[idx] = '\0';

        int k = idx - 1;
        for (int s = 0; s < k; s++, k--)
        {
            char t = bits[s];
            bits[s] = bits[k];
            bits[k] = t;
        }

        strcat(result, bits);
        if (j < size - 1)
        {
            strcat(result, ", ");
        }
    }

    printf("%s\n", result);

    free(arr);
    return count;   // <-- changed
}

int main(void)
{
    ui a = 2;
    ui b = 7;
    printf("%u\n", range_bit_count(a, b));
    return 0;
}
