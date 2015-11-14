#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

int main()
{
  int c;
   
  while ((c = getchar()) != EOF)
  {
    if (c == ' ' || c == '\n' || c == '\t')
    {
      putchar('\n');
      putchar(8);
    }    
    putchar(c);
  }

  return 0;
}
