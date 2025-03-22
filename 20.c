#include <stdio.h>

int main()
{
    int n;
    printf("Enter The Number: ");
    scanf("%d", &n);
    int f,h;
    int a = 1;
    for(f = 1; f <= n; f++) {
        for(h = 1; h <= f; h++) {
            printf(" %d",a);
            a++;
        }
        printf("\n");
    }
}
