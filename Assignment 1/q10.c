#include<stdio.h>

int main(){
    int number;
    int remainder;
    int sum = 0;

    printf("Enter number:");
    scanf("%d",&number);

    while(number > 0){
        remainder = number % 10;
        sum = sum + remainder;
        number /= 10;

    }
    printf("Sum is %d", sum);
    return 0;
}