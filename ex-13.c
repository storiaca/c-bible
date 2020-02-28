#include <stdio.h>

#define MAXHIST 15
#define MAXWORD 11
#define IN
#define OUT

/* print horizontal histogram */

int main()
{
    int c, i, nc, state;
    int len;
    int maxvalue;
    int ovflow;
    int wl[MAXWORD];

    state = OUT;
    nc = 0;
    ovflow = 0;
    for (i = 0; i < MAXWORD; ++i)
}