#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int n;


//do
    do
    {
        n = get_int("enter  the heigth of pyram : ");
        for (int i = 1 ; i <= n ; i++)
        {
            for (int j = 1 ; j <= n - i ; j++)
            {
                printf(" ");
            }
            for (int k = n - i ; k < n  ; k++)
            {
                printf("#");
            }
            printf("\n");
        }

    }
    while (n < 1 || n > 8);


}