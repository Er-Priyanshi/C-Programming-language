#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
    int i=0,j=0,k=0,l=0,n=0,e=0,a[10];
    char x[50][50],m[100];
    float y[50],z[50],h[50];
    printf ("\n\n\t\t\t\t....Employee Details....\n\n");
    printf ("\t\t\t\t........HELLO.........\n\n");
    Menu:
    printf("\n\n\n\tChoose One From The Below:\n\n");
    printf("\t> [Enter] Details Of %d Employees.\n\n",e);
    printf("\t> Show Details Of [All] Employees.\n\n");
    printf("\t> Show Details Of Employees With Specific [Age].\n\n");
    printf("\t> Show Details Of Employees Between Specific Range Of [Salary].\n\n");
    printf("\t> [End] Programe.\n\n\n\t=>");
    scanf ("%s",&m);
    if (m=="Enter")
   {
    printf (" Number Of Employees: ");
    scanf("%d",&e);
    printf ("\n\t\t Enter Details Of %d Employees",e);
    printf ("\n********************************************************************\n\n");
    for ( ;i<e;i++)
    {
        printf ("\n -------------------------------------------------");
        printf ("\n\n Enter Name Of Employee %d : ",i+1);
        gets (&x[i][0]);
        for ( ;n<=i;n++)
        {
            printf ("\n\n Enter Age Of %s : ",x);
            scanf("%d",&a[n]);

        for ( ;j<=i;j++)
        {
            printf ("\n\n Enter Salary Of %s : ",x);
            scanf("%f",&y[j]);

            for ( ;k<=i;k++)
            {
                printf("\n Enter P.F Value Of %s : ",x);
                scanf("%f",&z[k]);

                for ( ;l<=i;l++)
                {
                    printf("\n Enter H.R.A Value Of %s : ",x);
                    scanf("%f",&h[l]);
                }
            }
        }
      }
    }
    goto Menu;
   }

   if (m=="All")
 {
    j=0;k=0;l=0;
 printf ("\n\n\t\t Details Of %d Employee",e);
 printf ("\n\n ***************************************************************\n\n");
 for (i=0;i<2;i++)
    {
        printf ("\n\n--------------------------------------------------");
        printf ("\n\n Name Of Employee %d : ",i+1);
        puts (&x[i][0]);
        for ( ;n<=i;n++)
        {
            printf ("\n\n Enter Age Of %s : ",x);
            scanf("%d",&a[n]);

        for ( ;j<=i;j++)
        {
            printf ("\n\n Salary Of %s : %f",x,y[j]);

            for ( ;k<=i;k++)
            {
                printf("\n P.F Value Of %s : %f",x,z[k]);

                for ( ;l<=i;l++)
                {
                    printf("\n H.R.A Value Of %s : %f",x,h[l]);
                }
            }
        }
    }
 }
    goto Menu;
}
    return 0;
}
