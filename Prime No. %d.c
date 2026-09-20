#include<stdio.h>
int main()
{
    int r,n,i,h;
    char ch;
    printf ("\n\t\t\t\t\t....Prime Numbers....\n");
    start:
    fflush (stdin);
    h=0;
    printf ("\n\t\t\t\t\t........HELLO........\n\n");
    printf ("Enter Number Range: ");
    scanf ("%d%d",&n,&r);
    while (n<=r)
    {
        for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {

        break;
        }
    }
    if (i>n/2)

        {
            h++;
            printf ("\n%d).  %d Is A Prime Number",h,n);
        }
        n++;
    }
    printf ("\n\n\tTotal: %d",h);

    printf("\n\n Do you Wanna Continue? Yes/No: ");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
        {
            printf ("\n\t\t\t\t\t....Program Restarted....\n\n");
            goto start;
        }
        else
        printf ("\n\t\t\t\t\t....ThAnK U :-) ....\n\n");


      return 0;

}
