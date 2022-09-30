#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char morse[26][5] = {
        ".-",
        "-...",
        "-.-.",
        "-..",
        ".",
        "..-.",
        "--.",
        "....",
        "..",
        ".---",
        "-.-",
        ".-..",
        "--",
        "-.",
        "---",
        ".--.",
        "--.-",
        ".-.",
        "...",
        "-",
        "..-",
        "...-",
        ".--",
        "-..-",
        "-.--",
        "--.."};
    char str[1000];
    printf("Input string : ");
    scanf("%[^\n]s", &str);
    int l = strlen(str);
    for (int i = 0; i < l; i++)
    {
        if (str[i] >= 97 || str[i] <= 122)
        {
            str[i] = toupper(str[i]);
        }
        if (str[i] == ' ')
        {
            printf(" ");
        }
        else
        {
            printf("%s ", morse[str[i] % 65]);
        }
    }
    return 0;
}