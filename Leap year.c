#include <stdio.h>

int main()
{
    int y;
    char ch;
    printf ("\n\t\t\t\t\t....Leap year....\n");
    start:
    printf ("\n\t\t\t\t\t........HELLO........\n\n");
    printf ("\nPlease Enter Year ");
    scanf ("%d",&y);
    if (y%4==0 && y%100!=0 || y%400==0)
        {
            if(y>2022)
                printf ("\n\n\t\t%d Will Be A LEAP YEAR \n",y);
            else if (y<2022)
                printf ("\n\n\t\t%d Was A LEAP YEAR \n",y);
        }
    else
        {
            if(y>2022)
                printf ("\n\n\t\t%d Will Not Be A LEAP YEAR \n",y);
            else if (y==2022)
                printf ("\n\n\t\t%d Is Not A LEAP YEAR \n",y);
            else if (y<2022)
                printf ("\n\n\t\t%d Was Not A LEAP YEAR \n",y);
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
