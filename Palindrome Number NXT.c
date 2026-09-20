#include <stdio.h>

int main()
{
    int n, u, h = 0, x, d, rev, temp;

    printf("\n\t\t\t\t\t....Palindrome Number....\n");
    printf("\n\t\t\t\t\t........HELLO........\n\n");

    printf("Enter Number: ");
    scanf("%d", &u);

    for (n = u + 1; h < 1; n++)
    {
        x = n;
        temp = n;
        rev = 0;

        while (temp > 0)
        {
            d = temp % 10;
            rev = rev * 10 + d;
            temp = temp / 10;
        }

        if (x == rev)
        {
            h++;
            printf("\n%d). %d Is a next PALINDROME Number", h, x);
        }
    }
    printf("\n\t\t\t\t\t....ThAnK U :-) ....\n\n");

    return 0;
}
