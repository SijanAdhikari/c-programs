# include<stdio.h>

int main(){
int age;
printf("enter your age\n");
scanf("%d", &age);
if (age>=17 && age<=80)
{
printf("you can drive\n");
}
else
{
    printf("you cannot drive\n");
}
return 0;
}