#include <stdio.h>

int main()
{
    char text[100];
    char *p;
    p = text;
    printf("Enter string : ");
    scanf("%s", text);
    while (*p != '\0')
    {
        if (*p >= 'A' && *p <= 'Z')
        {
            *p = *p + 32;
            printf("%c", *p);
        }
        else if (*p >= 'a' && *p <= 'z')
        {
            *p = *p - 32;
            printf("%c", *p);
        }
        p++;
    }

    return 0;
}