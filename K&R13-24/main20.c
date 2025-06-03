#include <stdio.h>
#define TABSTOP 8
int main()
{
    int tabs = 0;
    int c;
    int length = 0;
    while((c = getchar())!= EOF)
    {
        if (c == '\t')
        {
            tabs = TABSTOP-length;
            for(int i = 0; i < tabs; i++)
            {
                printf(" ");
                length++;
            }
            continue;
        }
        length++;
        if (c == '\n')
        {
            length = 0;
            tabs = 0;
        }
        putchar(c);
    }
    return 0;
}
