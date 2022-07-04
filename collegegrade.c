# include<stdio.h>

int main(){
int marks;
printf("enter your marks\n");
scanf("%d", &marks);
if (marks<=100 && marks>=90){
    printf("your grade is A\n");
}
else if (marks<90 && marks>=80){
    printf("your grade is B\n");
}
else if (marks<80 && marks>=70){
    printf("your grade is C\n");
}
else if (marks<70 && marks>=60){
    printf("your grade is D ");
}
else{
    printf("your grade is F");
}
return 0;
}