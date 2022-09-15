#include <stdio.h>
#include <string.h>

int main()
{
    char text[100];
    printf("Input string : ");
    scanf("%s", text);
    int len = strlen(text);
    for (int i = 0; i < len; i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            text[i] &= '_';
            printf("%c", text[i]);
        }
        else if (text[i] >= 'A' && text[i] < 'Z')
        {
            text[i] |= ' ';
            printf("%c", text[i]);
        }
        else
        {
            printf("%c", text[i]);
        }
    }

    return 0;
}