# include<stdio.h>

int main(){
int a,b,c,d;
printf("enter a number a");
scanf("%d", &a);
printf("enter a number b");
scanf("%d", &b);
printf("enter a number c");
scanf("%d", &c);
printf("enter a number d");
scanf("%d", &d);
if(a>b && a>c && a>d){
    printf("a is the greatest among the other four numbers");
}
else if (b>a && b>c && b>d){
printf("b is the gratest among the other four numbers");
}
else if(c>a && c>b && c>d){
printf("c is the greatest among the other four numbers");
}
else if(d>a && d>b && d>c){
    printf("d is the greatest among the other four numbers");
}
return 0;
}