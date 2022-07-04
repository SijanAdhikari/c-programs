# include<stdio.h>

int main(){
float a,b,ans;
char op;
printf("enter the value of a and b\n");
scanf("%f %f", &a,&b);
printf("enter + for addition\n enter - for subtraction\n enter * for multliplication\n enter / for division\n");
scanf(" %c", &op);
switch (op)
{
case'+':ans=a+b;
    printf("the sum of %f and %f is %f",a,b,ans);
    break;
case'-':ans=a-b;
printf("the difference of %f and %f is %f",a,b,ans);
break;
case'*':ans=a*b;
printf("the product of %f and %f is %f",a,b,ans);
break;
case'/':ans=a/b;
printf("the quotient of %f and %f is %f",a,b,ans);
break;
default:printf("invalid input");
}
return 0;
}