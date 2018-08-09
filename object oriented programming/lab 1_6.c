#include <stdio.h>
void strcat1 (char *s, char*t);

int main()
{
    char s[100];
    char t[50];
    scanf("%s", s);
    scanf("%s", t);
    strcat1(s, t);
    printf("the string after concat:%s", s);

    return 0;
}
void strcat1(char *s, char *t)
{
    while (*s)
        s++;
    while ((*s++ = *t++)) {
        ;
    }
}
