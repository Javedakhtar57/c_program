#include<stdio.h>

int main(){
    int a;
    int b;
    int sum = 0;
    
    printf("Enter number:");
    scanf("%d",&a);
    printf("Enter number:");
    scanf("%d",&b);

    for(int i = 1; i <= a; i ++){
        sum = b + sum;
    }
    printf("%d",sum);
    return 0;
}