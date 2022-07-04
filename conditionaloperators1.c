#include<stdio.h>
int main(){
    int a,even,odd;
    printf("enter any number");
    scanf("%d",&a);
    a%2==0 ? printf("even"):printf("odd");
    return 0;
}