#include <stdio.h>

int main()
{
   int num;
   printf("Enter The Number: ");
   scanf("%d", &num);
   int count = 0;
   while (num != 0) {
       if((num & 1) == 1 ) {
           count++;
           }
       num >>= 1;
   }
   printf("Count of one bits = %d\n", count);
}
