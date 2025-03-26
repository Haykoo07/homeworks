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
   
    if (i % 2 == 0) {
        printf("%d is even\n", i);
    }
    else {
       printf("%d is odd\n", i);
   }
}
