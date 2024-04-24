#include <cs50.h>
#include <stdio.h>
#include <unistd.h>  // Unix header file for the sleep function

void count(int amount);

int main(void)
{
    char option = get_char("(S)econds (M)inutes (H)ours: ");

    // Error checking for correct selection.
    if (option == 'S' || option == 's' || option == 'M' || option == 'm' || option == 'H' || option == 'h') 
    {
        int n = get_int("How many: ");

        if (option == 'S' || option == 's')
        {
            count(n);
        }
        else if (option == 'M' || option == 'm')
        {
            count(n * 60);
        }
        else if (option == 'H' || option == 'h')
        {
            count(n * 3600);
        }
    }
    else
    {
        printf("Incorrect selection.\nExiting.\n");
        return 1;
    }
}

void count(int amount)
{
    for (int i = amount; 1; i--) // The `1` is a replacement for `true`, if true is used <stdbool.h> library needs to be called.
    {
        printf("%i\n", i);
        sleep(1);

        if (i == 1)
        {
            printf("End\n");
            break;
        }
    }
}
