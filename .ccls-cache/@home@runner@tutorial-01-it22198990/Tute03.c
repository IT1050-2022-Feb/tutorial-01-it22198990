/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>

int calc(int number);

int main() {
  int number, sum;

  printf("Enter a number: ");
  scanf("%d", &number);
  sum = calc(number);
  printf("Sum: %d", sum);

  return 0;
}

int calc(int number) {
  if (number == 0) {
    return number;
  }

  return number + calc(number - 1);
}
