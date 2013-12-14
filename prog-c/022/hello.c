#include <stdio.h>
#include <stdlib.h>

double my_pow(double n, int i)
{
  int j;
  double sum = 1.00000;

  for(j = 0; j < i; j++)
    sum *= n;

  return (sum);
}

int main(void)
{
  int i;

  printf("Hello, world! %f  \n", my_pow(3.141592, 9));
  return EXIT_SUCCESS;
}
