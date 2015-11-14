#include <stdio.h>

/* Replace each tab character with "\t", each backspace with "\b" and each backslash with "\\" */
int main()
{
  int c;
  
  while ((c = getchar()) != EOF)
  {
    if (c == '\t')
    {
      putchar('\\');
      putchar('t');
    }

    else if (c == 8)
    {
      putchar('\\');
      putchar('b');
    }

    else if (c == '\\')
    {
      putchar('\\');
      putchar('\\');
    }

    else
    {
      putchar(c);
    }
  }

  return 0;
}
