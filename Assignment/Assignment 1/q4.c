#include<stdio.h>

  int main() {

    int n;
    int fact = 1;

    printf("Enter Number :");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    printf("Factorial : %d",fact);
    return 0;
  }