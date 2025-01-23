#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // asking the user for the name
    string name = get_string("What's your name? ");

    // saying hello the the user
    printf("hello, %s\n", name);
}
