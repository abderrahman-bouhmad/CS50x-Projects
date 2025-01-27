#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool only_digits(string s);
char rotate(char c, int k);

int main(int argc, string argv[])
{
    // Make sure program was run with just one command-line argument
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Make sure every character in argv[1] is a digit
    if (!only_digits(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Convert argv[1] from a `string` to an `int`
    int k = atoi(argv[1]);

    // Prompt user for plaintext
    string plaintext = get_string("plaintext:  ");

    // For each character in the plaintext:
    printf("ciphertext: ");
    for (int i = 0, len = strlen(plaintext); i < len; i++)
    {
        // Rotate the character if it's a letter
        printf("%c", rotate(plaintext[i], k));
    }

    printf("\n");
    return 0;
}

bool only_digits(string s)
{
    // Loop through each character in the string
    for (int i = 0, len = strlen(s); i < len; i++)
    {
        // Check if the current character is not a digit
        if (!isdigit(s[i]))
        {
            // If a non-digit character is found, return false
            return false;
        }
    }
    // If all characters are digits, return true
    return true;
}

char rotate(char c, int k)
{
    if (isupper(c))
    {
        // Rotate the character within the uppercase letters range
        c = (c - 65 + k) % 26 + 65;
        return c;
    }
    else if (islower(c))
    {
        // Rotate the character within the lowercase letters range
        c = (c - 97 + k) % 26 + 97;
        return c;
    }
    else
    {
        // If the character is not a letter, return it unchanged
        return c;
    }
}
