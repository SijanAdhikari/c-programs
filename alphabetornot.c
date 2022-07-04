#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c is an alphabet.\n", c);
        if(c >='a' && c <='z'){
            printf("%c is lowercase\n");
        }
        else if(c>='A' && c<='Z'){
            printf("%c is uppercase\n");
        }
    else
        printf("%c is not an alphabet.\n", c);

    return 0;
}
