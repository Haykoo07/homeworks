#include <stdio.h>

int main()
{
   int num;
   printf("Enter The Number: ");
   scanf("%d", &num);
   if ((num & 1) == 0) {
       printf("%d is even\n", num);
   }
   else {
       printf("%d is odd\n", num);
   }
}
