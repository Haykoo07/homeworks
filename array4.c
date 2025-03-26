#include <stdio.h>
int main() {
    int a , b[3] , min , h;
    printf("Enter 3 Numbers: ");
     
    a = 0;
    while(a < 3){
        scanf("%d", &b[a]);
        ++a;
    }

    min = b[0];
    h = 0;
    a = 1;
    while(a < 3)
    { 
      if (min > b[a]) {
          min = b[a];
          h = a;
          ++a;
             }
        
     }
    printf("min's  index is: %d\n", h);
    
}
    
