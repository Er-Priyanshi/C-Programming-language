#include <stdio.h>
int main()
{
    int a,b,c,h,n;
    char ch;
    printf ("\n\t\t\t\t\t....Febonacci Series....\n");
    start:
    printf ("\n\t\t\t\t\t........HELLO........\n\n");
    fflush (stdin);
    printf ("\nEnter Number Of Terms: ");
    scanf ("%d",&n);
    h=0;
    a=-1;
    b=1;
    while(n>0)
    {
        c=a+b;
        h++;
        printf ("%d).%d\n",h,c);
        a=b;
        b=c;
        n--;
    }
    printf("\nDo you Wanna Continue? Yes/No: ");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
        {
            printf ("\n\t\t\t\t     ......Program Restarted......\n\n");
            goto start;
        }

        printf ("\n\t\t\t\t\t....ThAnK U :-) ....\n\n");

    return 0;
}