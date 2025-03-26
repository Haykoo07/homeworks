#include <stdio.h>

int main()
{
    int num;
    int index;
    printf("Enter The Number: ");
    scanf("%d", &num);
    printf("Enter The Index");
    scanf("%d", &index);
    index = 4;
    num = (1 << index) | num;
    printf("%d\n", num);

}
