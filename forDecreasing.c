#include <stdio.h>

int main() {
  int i, n = 0;

  printf("Enter a number (less than 1000): ");
  scanf("%i", &n);
  printf("\n\033[1m-----Showing the numbers from 1000 to %i-----\033[0m", n);

  for (i=1000; i>=n; i--) {
    printf("\n%i", i);
  }
}
