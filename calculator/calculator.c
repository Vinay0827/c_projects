#include <stdio.h>
#include <stdint.h>

int main(){
    int first;
    char ope;
    int second;
    printf("enter the fist no = ");
    scanf("%d",&first);
    printf("enter the second no = ");
    scanf("%d",&second);
    printf("enter the operation you want to perform ");
    scanf(" %c", &ope);
    switch (ope){
        case '+':
        printf("the sum of the two given no is = %d ", first + second);
        break;
        case '-' :
        printf("the difference of the given no is = %d", first - second);
        break;
        case '*' :
        printf("the product of the given to no is = %d ", first * second);
        break;
        case '/':
        printf("the divisior of the given no is = %d", first / second);
        break;
        default:
        printf(" enter the valid operator ");
    }
    
return 0;
}
