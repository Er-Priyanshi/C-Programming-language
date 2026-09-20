#include <stdio.h>
int main()
{
    int i,j,c,a[3][3],b[3][3],k,sum[10][10];
    printf ("\n\n\t\t\t\t......Matrix......\n\n");
    printf ("\t\t\t\t.........HELLO.........\n\n");
    printf (" Enter A: \n");
    for (i=0;i<4;i++)
    {
        for (j=0;j<3;j++)
        {
            c++;
            printf ("%d). => ",c);
            scanf ("%d",&a[i][j]);
        }
    }
    printf ("Enter B\n");
    c=0;
    for (i=0;i<4;i++)
    {
        for (j=0;j<3;j++)
        {
            c++;
            printf ("%d). => ",c);
            scanf ("%d",&a[i][j]);
        }
    }
    printf ("\n Matrix OF A :-\n");
    for (i=0;i<4;i++)
    {
        printf ("\t\t\t");
        for (j=0;j<3;j++)
        {
            printf ("%d\t",b[i][j]);
        }
        printf ("\n");
    }
    printf ("\n Matrix OF B:-\n");
    for (i=0;i<4;i++)
    {
        printf ("\t\t\t");
        for (j=0;j<3;j++)
        {
            printf ("%d\t",b[i][j]);
        }
        printf ("\n");
    }
    sum[i][j]=a[i][j]+b[i][j];
    printf ("\n Matrix OF SUM:-\n");
        for (i=0;i<4;i++)
    {
        printf ("\t\t\t");
        for (j=0;j<3;j++)
        {
            printf ("%d\t",sum[i][j]);
        }
        printf ("\n");
    }

    printf ("\n\n\n\n");
    return 0;
}
