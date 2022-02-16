/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
//function main begins program execution
int main() {
  int n,i,sum;

  printf("Input the number : ");
  scanf("%d", &n);
  sum=0;

  for ( i = 0; i <= n; i++)
  {
    sum = sum + i;
  }
  printf("The sum of the numbers from 1 to %d = %d", n,sum);
  
  
  return 0;
}// end of main function

