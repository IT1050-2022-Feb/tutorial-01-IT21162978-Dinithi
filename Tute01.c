/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

//function main begins program execution
int main() {
  float mark1, mark2, average;

  printf("Input Mark 01 : ");
  scanf("%f", &mark1);// read mark1

  printf("Input Mark 02 : ");
  scanf("%f", &mark2);// read mark2

  average = (mark1 + mark2) / 2.0; // calculate the average

  printf("The Average is %.2f \n", average); //display the average

  
  return 0;
}//end of main function

