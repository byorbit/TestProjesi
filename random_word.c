
/* writing a word between 3-8 letter */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TIMES 10
#define MIN_WORD_LEN 3
#define MAX_WORD_LEN 8


void write_word(void)
{
  int len = rand() % (MAX_WORD_LEN - MIN_WORD_LEN + 1) + MIN_WORD_LEN;
  while (len--)
    putchar('A' + rand() % 26);
}
