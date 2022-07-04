#include<stdio.h>
int main(){
    int N,sum,i;
    printf("enter N:\n");
    scanf("%d", &N);
    for(i=1,i<=N,i++)
    {
        sum=((N(N+1))/2)*10*N;
    }
    printf("the sum is\n%d",sum);
    return 0;
}