#include <stdio.h>
int main()
{

int a , b[3] , max , h;
h = 0;
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
        h = a;
            ++a;
             }
        
        }
    printf("max's index is: %d\n", h);
    
}
 
