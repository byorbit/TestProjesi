#include <stdio.h>

int main() {

int k;
srand(time(0));

for (k = 0; k < TIMES; ++k) {
  write_word();
  putchar('\n');
}


return 0;

}
