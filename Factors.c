
#include<stdio.h>
int main()
{
    int n,i,h;
    char ch;
    printf ("\n\t\t\t\t\t   ....Factors....\n");
    start:
    fflush(stdin);
    printf ("\n\t\t\t\t\t........HELLO........\n\n");
    printf ("Enter Any Number: ");
    scanf ("%d",&n);
    h=1;
    for (i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            printf ("\n%d).%d Is a Factor\n\n",h,i);
            h++;
        }

    }
    printf("\n\nDo you Wanna Continue? Yes/No ");
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
