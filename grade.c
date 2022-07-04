# include<stdio.h>

int main(){
float maths,applied_mechanics,c_programming,physics,basic_electrical,percentage;
printf("enter marks in maths,applied mechanics,c programming,physics,basic electrical respectively\n ");
scanf("%f %f %f %f %f", &maths,&applied_mechanics,&c_programming,&physics,&basic_electrical);
if (maths>=40,applied_mechanics>=40,c_programming>=40,physics>=40,basic_electrical>=40){
    printf("you have passed the examination\n");
}


percentage=((maths+applied_mechanics+c_programming+physics+basic_electrical)/500)*100;
if(percentage>=90){
    printf("you have got A grade\n");
}
else if(percentage>=80 && percentage<=90)
{
    printf("you have got B grade\n");
}
else if(percentage>=70 && percentage<=80)
{
    printf("you have got C grade\n");
}
else if(percentage>=60 && percentage<=70){
    printf("you have got D grade\n");
}
else if (percentage>=40 && percentage<=60){
    printf("you have got E grade\n");
}
else{
    printf("you have failed the examination");
}
return 0;
}