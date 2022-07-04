# include<stdio.h>

int main(){
int num1,num2,num3;
printf("enter three numbers\n");
scanf("%d %d %d", &num1,&num2,&num3);
if(num1>num2 && num1>num3){
    printf("num1 is the greatest among the entered numbers %d\n"),num1;
}
else if (num2>num1 && num2>num3){
    printf("num2 is the greatest among the entered numbers %d\n",num2);
}
else{
    printf("num3 is the greatest among the entered numbers %d\n",num3);
}
return 0;
}