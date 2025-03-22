#include <stdio.h>

int main()
{
    int n;
    printf("Enter The Number: ");
    scanf("%d", &n);
    int f,h;
    for(f = 1; f <= n; f++) {
        for(h = 1; h <= n; h++) {
            printf("*");
        }
        printf("\n");
    }
}
