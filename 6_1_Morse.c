#include <stdio.h>
#include <string.h>

int main()
{
    char str1[25], str2[150];
    printf("Input string : ");
    scanf("%s", str1);
    int j = 0;
    for (int i = 0; i <= strlen(str1); i++)
    {
        switch (toupper(str1[i]))
        {
        case 'A':
            str2[j++] = '.';
            str2[j] = '-';
            break;

        case 'B':
            str2[j++] = '-';
            str2[j++] = '.';
            str2[j++] = '.';
            str2[j] = '.';
            break;

        case 'C':
            str2[j++] = '-';
            str2[j++] = '.';
            str2[j++] = '-';
            str2[j] = '.';
            break;

        case 'D':
            str2[j++] = '-';
            str2[j++] = '.';
            str2[j] = '.';
            break;

        case 'E':
            str2[j] = '.';
            break;

        case 'F':
            str2[j++] = '.';
            str2[j++] = '.';
            str2[j++] = '-';
            str2[j] = '.';
            break;

        case 'G':
            str2[j++] = '-';
            str2[j++] = '-';
            str2[j] = '.';
            break;

        case 'H':
            str2[j++] = '.';
            str2[j++] = '.';
            str2[j++] = '.';
            str2[j] = '.';
            break;

        case 'I':
            str2[j++] = '.';
            str2[j] = '.';
            break;

        case 'J':
            str2[j++] = '.';
            str2[j++] = '-';
            str2[j++] = '-';
            str2[j] = '-';
            break;

        case 'K':
            str2[j++] = '-';
            str2[j++] = '.';
            str2[j] = '-';
            break;

        case 'L':
            str2[j++] = '.';
            str2[j++] = '-';
            str2[j++] = '.';
            str2[j] = '.';
            break;

        case 'M':
            str2[j++] = '-';
            str2[j] = '-';
            break;

        case 'N':
            str2[j++] = '-';
            str2[j] = '.';
            break;

        case 'O':
            str2[j++] = '-';
            str2[j++] = '-';
            str2[j] = '-';
            break;

        case 'P':
            str2[j++] = '.';
            str2[j++] = '-';
            str2[j++] = '-';
            str2[j] = '.';
            break;

        case 'Q':
            str2[j++] = '-';
            str2[j++] = '-';
            str2[j++] = '.';
            str2[j] = '-';
            break;

        case 'R':
            str2[j++] = '.';
            str2[j++] = '-';
            str2[j] = '.';
            break;

        case 'S':
            str2[j++] = '.';
            str2[j++] = '.';
            str2[j] = '.';
            break;

        case 'T':
            str2[j] = '-';
            break;

        case 'U':
            str2[j++] = '.';
            str2[j++] = '.';
            str2[j] = '-';
            break;

        case 'V':
            str2[j++] = '.';
            str2[j++] = '.';
            str2[j++] = '.';
            str2[j] = '-';
            break;

        case 'W':
            str2[j++] = '.';
            str2[j++] = '-';
            str2[j] = '-';
            break;

        case 'X':
            str2[j++] = '-';
            str2[j++] = '.';
            str2[j++] = '.';
            str2[j] = '-';
            break;

        case 'Y':
            str2[j++] = '-';
            str2[j++] = '.';
            str2[j++] = '-';
            str2[j] = '-';
            break;

        case 'Z':
            str2[j++] = '-';
            str2[j++] = '-';
            str2[j++] = '.';
            str2[j] = '.';
            break;

        case ' ':
            str2[j] = ' ';
            break;
        }
        j++;
    }
    str2[j - 1] = '\0';
    printf(str2);
    return 0;
}