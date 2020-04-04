#include <stdio.h>

int main()
{
    char s[100];
    int c = 0;
    char sen[] = "Hackerrank";
    gets(s);

    printf("%s", strcat(sen, s));
    return 0;
}