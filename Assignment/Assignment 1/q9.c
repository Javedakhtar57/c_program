#include<stdio.h>

int main() {
    int number;

    printf("Enter year:");
    scanf("%d",&number);

    if((number % 400 == 0)||(number % 4 == 0 && number % 100 != 0)){
       printf("%d This is leap year",number);
    }
    else{
        printf("%d This is not leap year");
    }
    return 0;

}