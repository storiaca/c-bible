#include <stdio.h>

/* replace tabs and backspaces with visible characters */
int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        // if (c == '\t')
        //     printf("\\t");
        // if (c == '\b')
        //     printf("\\b");
        // if (c == '\\')
        //     printf("\\\\");
        // if (c != '\b')
        //     if (c != '\t')
        //         if (c != '\\')
        //             putchar(c);

        /* with if-else */
        if (c == '\t')
            printf("\\t");
        else if (c == '\b')
            printf("\\b");
        else if (c == '\\')
            printf("\\\\");
        else
            putchar(c);
    }
}