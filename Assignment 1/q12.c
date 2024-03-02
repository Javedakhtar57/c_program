#include<stdio.h>

int main() {

    int number;
    int count = 0;

    printf("Enter number:");
    scanf("%d", &number);

    for(int i = 1; i <= number; i++) {
        if(number % i == 0){
            count = count + 1;
        }
    }

    if (count == 2) {
        printf("%d is prime",number);
    }

    else {
         printf("%d is not prime",number);
    }

    return 0;
}