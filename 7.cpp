#include<stdio.h>
#include<conio.h>
int main(){
int a,b,c;
printf("enter 3 diffferent numbers:");
scanf("%d%d%d",&a,&b,&c);
if (a>b&& a>c){
	printf("a is greatest number");
}
else if  (b>a&& b>c){
	printf("b is greatest number");
}
else{
	printf("c is greatest number");
}
}
