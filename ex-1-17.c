#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */
#define LONGLINE 80

int getline(char line[], int maxline);

/* Exercise 1-17: print lines longer than LONGLINE */

int main()
{
  int len;            /* current line length */
  char line[MAXLINE]; /* current input line */
  while ((len = getline(line, MAXLINE)) > 0)
    if (len > LONGLINE)
      printf("%s", line);
  return 0;
}