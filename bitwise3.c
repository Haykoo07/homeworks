#include <stdio.h>

int main()
{
    int a;

    printf("Enter The Number: ");
    scanf("%d", &a);
    
    int i = 0;
    while(a) {
        i += a & 1;
        a >>= 1;
    }
    printf("%d\n", i);
}
