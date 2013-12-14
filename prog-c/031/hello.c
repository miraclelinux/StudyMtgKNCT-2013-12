#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  time_t start,end;

  start = time(NULL);
  printf("Hello, world!\n");
  end = time(NULL);
  printf("Past time = %d[sec]\n", end - start);

  return EXIT_SUCCESS;
}
