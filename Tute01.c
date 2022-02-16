/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int s1,s2,sum;
  float avg;

  printf("Please enter your subject 1 marks :");
  scanf("%d",&s1);

  printf("Please enter your subject 2 marks :");
  scanf("%d",&s2);
  
  sum= s1 + s2;
  avg = sum/2.0;

  printf("Your total mark is : %d\n",sum);
  printf("Your average mark is : %.2f",avg);

  return 0;
}

