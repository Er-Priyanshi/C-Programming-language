
#include <stdio.h>
int main()
{
    int n,i,p,s;
    char ch;
    printf ("\n\t\t\t\t\t  ....Factorial....\n");

    start:
    printf ("\n\t\t\t\t\t........HELLO........\n\n");
    printf ("Enter Number: ");
    fflush (stdin);
    scanf ("%d",&n);
    p=1;
    s=1;
    for (i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            printf("\n%d is a Factor",i);
            s*=i;
            p+=i;
        }
    }
    printf("\n\nProduct of Factors: %d",s);
    printf("\n\nSum of Factors: %d",p);

  printf("\n\nDo you Wanna Continue? Yes/No: ");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
        {
            printf ("\n\t\t\t\t     ......Program Restarted......\n\n");
            goto start;
        }
    else
        printf ("\n\t\t\t\t\t....ThAnK U :-) ....\n\n");

    return 0;
}
