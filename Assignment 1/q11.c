#include<stdio.h>

int main () {
  char operator;
  int firstnumber;
  int secondnumber;

  printf("Enter operator(*, +, -, /):");
  scanf("%c",&operator);

if (operator == '*' || operator == '+' || operator == '-' || operator == '/') {

  printf("Enter digit:");
  scanf("%d",&firstnumber);
  
  printf("Enter digit:");
  scanf("%d",&secondnumber);

  if (operator == '*') {
    printf("%d",firstnumber * secondnumber);
  }

  else if (operator == '+') {
    printf("%d",firstnumber + secondnumber);
  }

  else if (operator == '-') {
    printf("%d",firstnumber - secondnumber);
  }

  else if (operator == '/') {
    printf("%d",firstnumber / secondnumber);
  }
}

  else {
    printf("Invalid operator!");
  }

  return 0;
}