// WAP to read distacne between two cities(in km) and display the distance in meteres,feet, inches and centimeters
# include<stdio.h>
int main(){
float km,m,ft,in,cm;
    printf("the distance between two cities in kilometres:");
    scanf("%f", &km);
m=km*1000;
ft=km*3280.84;
in=km*39370.07874015748;
cm=km*100000;
    printf("the distance between two cities in meteres:%f\n",m);
    printf("the distance between two cities in feet:%f\n",ft);
    printf("the distacne between two cities in inches:%f\n",in);
    printf("the distance between two cities in centimeteres:%f\n",cm);  


return 0;
}