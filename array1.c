#include <stdio.h>
int main(){
    int a , b[3] , max;
    printf("Enter 3 Numbers: ");
     
    a = 0;
    while(a < 3){
        scanf("%d", &b[a]);
        ++a;
    }
    max = b[0];
    a = 1;
    while(a < 3)
    { 
    if (max < b[a]) {
        max = b[a];
            ++a;
             }
    
        }
    printf("max is: %d\n", max);
    }
