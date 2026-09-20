#include<stdio.h>
#include<conio.h>
int main()

{
    int i=0,j,k,e,c=0;
    char x[50][50];
    float y[100][100];
    printf ("\n\n\t\t\t\t....Marks Of Stduent....\n\n");
    printf ("\t\t\t\t........HELLO.........\n\n");
    printf ("\n Number Of Students: ");
    scanf ("%d",&e);
    printf ("\n\t\t Enter Details Of %d Student",e);
    printf ("\n********************************************************************\n\n");
    for (;i<e;i++)
    {
        printf ("\n\n -------------------------------------------------");
        printf ("\n\n Enter Name Of Student %d : ",i+1);
        gets (&x[i][0]);
        for (j=0;j<5;j++)
        {
            c++;
            printf ("\n\n Enter Marks Of %s in Subject %d : ",x,c);
            scanf("%f",&y[j][i]);
        }
        c=0;
    }

    getch();
    c=1;
    printf ("\n\n\n +++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    for (i=0;i<e;i++)
    {
        printf ("\n\n ------------------------------------------------");
        printf ("\n\n Name Of Student %d : ",i+1);
        puts (x[i][0]);
        for (j=0;j<5;j++)
        {
            printf ("\n\n Marks Of %s in Subject %d : %f",x,c,y[j][i]);
            c++;
        }
        c=0;
    }

    printf ("\n\n\n\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++\n\n\n");
    return 0;
}
