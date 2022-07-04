# include<stdio.h>

int main(){
int rating;
printf("enter your  rating\n");
scanf("%d", &rating);
if (rating==1){
    printf("your rating is 1\n");
}
else if (rating==2){
    printf("your rating is 2\n");
}
else if (rating==3){
    printf("your rating is 3\n");
}
else if (rating==4){
    printf("your rating is 4\n");
}
else if (rating==5){
    printf("your rating is 5\n");
}
else{
    printf("your rating is invalid\n");
}
return 0;
}