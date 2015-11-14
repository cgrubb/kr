#include <stdio.h>

/* Copy input to output, replace string of one or more blanks with a single blank */
int main()
{
  int c;

  
  while ((c = getchar()) != EOF)
  {
    if (c == ' ')
    {
      while ((c = getchar()) == ' ')
      {}
      putchar(' ');
    }
    putchar(c);
  }
  return 0;
}
