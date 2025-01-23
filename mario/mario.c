#include <cs50.h>
#include <stdio.h>

void print_row(int bricks, int height);

int main(void)
{
    // Prompt the user for the pyramid's height
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Print a pyramid of the specified height
    for (int i = 0; i < height; i++)
    {
        // Print a single row of bricks
        print_row(i + 1, height);
    }
}

void print_row(int bricks, int height)
{
    // Print spaces to align the bricks in the pyramid
    for (int spaces = 0; spaces < height - bricks; spaces++)
    {
        printf(" ");
    }

    // Print the left side of the pyramid's bricks
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }

    // Print the gap between the left and right sides of the pyramid
    printf("  ");

    // Print the right side of the pyramid's bricks
    for (int j = 0; j < bricks; j++)
    {
        printf("#");
    }

    // new line
    printf("\n");
}
