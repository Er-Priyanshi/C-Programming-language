#include<stdio.h>
int main()
{
    int i,j,k,s;
    char z;
    printf ("\n\n\t\t......Patterns......\n\n\n\n");
    for(i=1;i<=5;i++)
    {
        printf ("\t");
            for (s=i;s<=4;s++)
        {
            printf (" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("* ");
        }
        for (k=2;k<=i;k++)
        {
            printf ("+");

        }
        printf ("\n");
    }
    for(i=5;i>=1;i--)
    {
        printf ("\t");
        for (s=i;s<=4;s++)
        {
            printf (" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("* ");
        }
        for (k=2;k<=i;k++)
        {
            printf ("+");
        }
        printf ("\n");
    }
    for (i=1;i<=5; ++i)
    {
        printf ("\t\t\t");
        for (j=1;j<=i;++j)
        {
         printf("+ ");
        }
     printf("\n");
    }
    for (i=5;i>=1;--i)
    {
        printf ("\t\t\t");
      for (j=1;j<=i;++j)
      {
         printf("+ ");
      }
      printf("\n");
   }
for(i=1;i<=5;i++)
    {
        printf ("\t");
            for (s=i;s<=4;s++)
        {
            printf (" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("++");
        }
        for (k=2;k<=i;k++)
        {
            printf ("__");

        }
        printf ("\n");
    }
    for(i=5;i>=1;i--)
    {
        printf ("\t");
        for (s=i;s<=4;s++)
        {
            printf (" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("++");
        }
        for (k=2;k<=i;k++)
        {
            printf ("__");
        }
        printf ("\n");
    }
   printf("\n\n");

    for (i=1;i<=5; ++i)
    {
        printf ("\t");
        for (j=1;j<=i;++j)
        {
         printf("%d ",j);
        }
     printf("\n");
    }
    for (i=5;i>=1;--i)
    {
        printf ("\t");
      for (j=1;j<=i;++j)
      {
         printf("%d ",j);
      }
      printf("\n");
   }
    return 0;
}
