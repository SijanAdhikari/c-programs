# include<stdio.h>

int main(){
int age;
printf("enter your age\n");
scanf("%d", &age);
if (age>18){
printf("you can drive");
}
else
{
    printf("your age is not appropriate for drinving");
}
return 0;
}