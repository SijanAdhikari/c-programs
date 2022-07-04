#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	if((n%2)==0&&(n%6)==0){
		printf("divisible by 2 and 6");
	}
	else{
		printf("not divisible by 2 and 6");
		
	}
}
