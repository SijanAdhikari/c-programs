# include<stdio.h>
#include<stdlib.h>
int main(){
int i,n,flag=0;
printf("enter a number");
scanf("%d", &n);
if (n==1){
    printf("%d is neither prime or composite",n);
    exit(0);
}
for(i=2;i<=(n/2);i++)
{
    if(n%i==0)
    {
        flag=1;
        break;
    }
}
if(flag==0)
printf("%d is a prime ",n);
else 
printf("%d is not a prime number",n);

return 0;
}