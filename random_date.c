#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_YEAR 2010
#define MIN_YEAR 1900

void print_random_date(){
  int d, m, y;
  y = rand() % (MAX_YEAR - MIN_YEAR + 1) + MIN_YEAR;
  m = rand() % 12 + 1;
  switch (m) {
  case 4 : case 6 : case 9 : case 11:
  d = rand() % 30 + 1; break;
  case 2 : d = rand() % (isleap(y) ? 29 : 28) + 1; break;
  default: d = rand() % 31 + 1;
}
printf("%d/%d/%d\n", d, m, y);
}
