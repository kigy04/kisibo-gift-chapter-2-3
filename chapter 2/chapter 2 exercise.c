#include <stdio.h>

int main(void)
{
    int a, b, c, sum;
    printf("Enter the first value: ");
    scanf("%d", &a);
    printf("Enter the second value: ");
    scanf("%d", &b);
    printf("Enter the third value: ");
    scanf("%d", &c);

    sum = a + b + c;
    printf("%d + %d + %d = %d\n", a, b, c, sum);
    return 0;
}
