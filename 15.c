#include <stdio.h>

int main()
{
    int num,l = 0;
    int a;
    printf("Enter The Number: ");
    scanf("%d" , &num);
    if(num > 1) {
        for(a = 2; a < num / 2; a++) {
             if(num %a == 0) {
                 l = 1;
         }

     }
        if (l == 1){
             printf("number is not prime\n");
         }
         else{
             printf("number is prime\n");
         }
    }
    else{
        printf("number is not prime\n");

    }
}
