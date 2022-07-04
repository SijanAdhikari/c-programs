# include<stdio.h>
#include<math.h>
int main(){
double a,b,c,discriminant,root1,root2,real,img;
printf("enter the value of a,b and c\n");
scanf("%lf %lf %lf", &a,&b,&c);
discriminant=b*b-4.0*a*c;
if (discriminant==0){
    root1=root2=-b/(2.0*a);
    printf("roots are real and equal\n");
    printf("root1=root2=%lf",root1);
}
else if(discriminant>0){
    root1=(-b+sqrt(discriminant))/(2.0*a);
    root2=(-b-sqrt(discriminant))/(2.0*a);
    printf("roots are real and unequal\n");
    printf("root1=%lf and root2=%lf",root1,root2);
    }
    else{
        real=-b/(2.0*a);
        img=sqrt(-discriminant)/(2.0*a);
        printf("roots are inaginary");
        printf("root1=%lf+%lf and root2=%lf-%lf",real,img,real,img);
    }
return 0;
}