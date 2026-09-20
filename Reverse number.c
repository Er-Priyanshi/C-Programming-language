#include <stdio.h>

int main()
{
    printf("\n\t\t\t\t\t....Reverse Number....\n");

    int n, d, rev = 0;

    printf("Enter Any Number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        d = n % 10;
        rev = rev * 10 + d;
        n = n / 10;
    }

    printf("\n\nReverse = %d\n", rev);

    return 0;
}
