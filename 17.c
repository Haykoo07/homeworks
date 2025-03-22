#include <stdio.h>

int main()
{
    int n;
    printf("Enter The Number: ");
    scanf("%d", &n);
    int i;
    int h;
    for (i = 1; i <= n; i++) {
        for (h = 1; h <= i; h++) {
            printf("%d" , i);
       }
    printf("\n");
    }

}
