#include <stdio.h>

/* Print Fahrenheit-Celcius table */
int main()
{
  int fahr;

  void printTemp(int temp)
  {
    printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (temp - 32));
  }

  for (fahr = 0; fahr <= 300; fahr = fahr + 20)
  {
    printTemp(fahr);
  }
  
  for (fahr = 300; fahr >= 0; fahr = fahr - 20)
  {
    printTemp(fahr);
  }

  return 0;
}
