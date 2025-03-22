#include <stdio.h>

int main()
{
    int num;
    int a = 0;
    int b = 1;
    int result = 0;
    printf("enter the number: ");
    scanf("%d" , &num);
    while (result < num){
        result = a + b;
        printf("%d\n" , result);
        a = b;
        b = result;

    }
}



