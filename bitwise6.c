#include <stdio.h>
int main() {
    char h;
    printf("Enter the letter: ");
    scanf("%c", &h);
    h = h ^ 32;
    printf("%c\n", h);
}
    

