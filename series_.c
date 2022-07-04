# include<stdio.h>

int main(){
int n,sum=0,i;
printf("\nenter n:\t");
scanf("%d", &n);
for(i=1;i<=n;i++)
{
    sum+=i;
}
printf("\nthe sum is :\t%d",sum);
return 0;
}