#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void main(void){
    int given_number;

    printf("Enter an integer:\t");
    scanf("%d", &given_number);

    if(given_number % 2 == 0){
        printf("The number is an even number.\n");
    }
    else{
        printf("The number is an odd number.\n");
    }
}
