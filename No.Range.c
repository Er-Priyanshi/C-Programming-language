
#include <stdio.h>
int main()
{
    int i,x,y;
    char ch;
    printf ("\n\t\t\t\t\t....Range Of Number....\n");
    start:
    printf ("\n\t\t\t\t\t........HELLO........\n\n");
    printf ("\nEnter Any Range Of No.s\n");
    scanf ("%d%d",&x,&y);
    i=x;
    while (i<=y)
    {
        printf ("\t%d\n",i);
        i++;
    }
       printf("\nDo you Wanna Continue? Yes/No");
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
