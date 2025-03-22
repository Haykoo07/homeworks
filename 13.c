#include <stdio.h>

int main()
{
    int a , b , c , d;

    printf("enter the number: ");
    scanf("%d" , &a);
    b = a;
    c = 0;
    while(a > 0) {
        d = a % 10;
        c = c * 10 + d;
        a /= 10;
    }
    if (b == c) {
        printf("polidrome\n");
    }
    else {
        printf("not a polidrome\n");
    }
    }

