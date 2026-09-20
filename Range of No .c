#include <stdio.h>
int main()
{
    int x,y,i,cnt,e,o;
    char ch;
    printf ("\n\t\t\t\t\t....Range Of Number....\n");
    start:
    e=0;
    o=0;
    printf ("\n\t\t\t\t\t........HELLO........\n\n");
    printf ("Enter Any Range Of No.s\n");
    scanf ("%d%d",&x,&y);
    cnt=0;
    if (x<y)
    {
        i=x;
        while (i<=y)
    {
        if (i%2==0)
            {
                printf ("\t%d is an EVEN No.\n",i);
                e++;
            }
        else
            {
                printf ("\t%d is an ODD No.\n",i);
                o++;
            }

       cnt++;
        i++;
    }}
    else
    {
        i=x;
        while (i>=y)
    {
        if (i%2==0)
            {
                printf ("\t%d is an EVEN No.\n",i);
                e++;
            }
        else
            {
                printf ("\t%d is an ODD No.\n",i);
                o++;
            }

       cnt++;
        i--;
    }}

    printf ("\nCount Of No.s:- %d\n",cnt);
    printf ("\nEVEN Numbers:- %d\n",e);
    printf ("\nODD Numbers:- %d\n",o);

    printf("\nDo you Wanna Continue? Yes/No: ");
    fflush(stdin);
    scanf(" %c",&ch);
    if(ch=='y'||ch=='Y')
        {
            printf ("\n\t\t\t\t     ......Program Restarted......\n\n");
            goto start;
        }
    else
        printf ("\n\t\t\t\t\t....ThAnK U :-) ....\n\n");

    return 0;
}
