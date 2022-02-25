#include<stdio.h>
int main()
{
  int num1, num2, rem;
  
  //Asking for input
  scanf("%d", &num1);
  scanf("%d", &num2);
  
  rem = num1 % num2;
  printf("%d", rem);
  return 0;
}