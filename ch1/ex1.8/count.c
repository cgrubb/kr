#include <stdio.h>

/* Count blanks, tabs, and newlines */
int main()
{
  int c, blank, tab, nl;
  blank = 0;
  tab = 0;
  nl = 0;

  while ((c = getchar()) != EOF)
  {
    if (c == '\n')
    {
      ++nl;
    }

    if (c == ' ')
    {
      ++blank;
    }

    if (c == '\t')
    {
      ++tab;
    }
  }

  printf("Lines: %d\n", nl);
  printf("Blanks: %d\n", blank);
  printf("Tabs: %d\n", tab);

  return 0;
}
