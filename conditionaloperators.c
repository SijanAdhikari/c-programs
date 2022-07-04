#include<stdio.h>
int main(){
    int num1,num2,minimum;
    printf("enter two numbers:");
    scanf("%d %d",&num1, &num2);
    minimum=num1<num2 ? num1:num2;
    printf("the minimum number is %d",minimum);
    return 0;
    
}