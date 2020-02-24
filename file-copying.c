#include <stdio.h>

/* Ex: 1-6; Verify that the expression 
   getcaher() != EOF is 0 or 1 
 */

int main()
{
    int c;
    while (c = getchar() != EOF)
        printf("%d\n", c);
    printf("%d - at EOF\n", c);
}