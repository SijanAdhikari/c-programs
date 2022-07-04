#include<stdio.h>
int main(){
    int a;
    printf("enter any number");
    scanf("%d", &a);
    if(a<0){
        printf("the entered number is negative");
    }
    else if(a>0){
        printf("the entered number is positive");
    }
    else{
        printf("the entered number is zero");
    }
 return 0;
}