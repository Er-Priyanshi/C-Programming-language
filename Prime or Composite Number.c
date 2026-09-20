
#include <stdio.h>
int main ()
{
    int n,i;
    char re;
    printf ("\n\t\t\t\t\t....Prime Numbers....\n");
    start:
    printf ("\n\t\t\t\t\t........HELLO........\n\n");
    fflush (stdin);

    printf ("Enter any Number: ");
    scanf ("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
        printf ("\n%d Is A Composite Number",n);
        break;
        }
    }
    if (i>n/2)
        printf ("\n%d Is A Prime Number",n);

    printf("\n\nDo you Wanna Continue? Yes/No: ");
    fflush(stdin);
    scanf("%c",&re);
    if(re=='y'||re=='Y')
        {
            printf ("\n\t\t\t\t\t....Program Restarted....\n\n");
            goto start;
        }
    else
        printf ("\n\t\t\t\t\t....ThAnK U :-) ....\n\n");


      return 0;
}
