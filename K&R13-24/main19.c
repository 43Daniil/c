#include <stdio.h>
#include <string.h>

int reve3(char s[], int length);

int main()
{
    int length;
    char str1[1000];
    fgets(str1, sizeof(str1), stdin);
    length = strlen(str1);
    reve3(str1, length);
    return 0;
}
int reve3(char s[], int length)
{
    for(int i = length; i >= 0; i--)
    {
        printf("%c", s[i]);
    }
    return 0;
}
