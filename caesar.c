#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Re-enter key");
        return 1;
    }
    printf("Plain text: ");
    string pt = get_string();
    int k = atoi(argv[1]);
    int result;
    printf("ciphertext: ");
    if (k >= 26)
    {
        k = (k % 26);
    }
    for(int i = 0, length = strlen(pt); i < length; i++)
    {
        result = (pt[i] + k);
        if (isupper(pt[i]) && (result > 'Z'))
        {
            result = (result - 26);
        }
        if (islower(pt[i]) && (result > 'z'))
        {
            result = (result - 26);
        }
        if (isalpha(pt[i]))
        {
            printf("%c", result);
        }
        else
        {
            printf("%c", pt[i]);
        }
    }

    printf("\n");
    return 0;
}