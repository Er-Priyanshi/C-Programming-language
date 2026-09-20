#include<stdio.h>
int tables(n,range);
int main()
{
    int n,range;
    printf ("\n\t\t\t\t.....HELLO....\n\n");
    printf ("\t\t\t\t.....Tables....\n\n");

    printf(" Enter a Number:- ");
    scanf("%d",&n);
    tables(n);

    return 0;
}
int tables(n)
{
    int i,range;
    printf("\n Enter the range: ");
    scanf("%d",&range);

    printf("\nTable Of %d Till %d is:-\n\n",n,range);
    for(i=1;i<=range;i++)
    {
        printf("\t\t\t%d x %d = %d \n",n,i,n*i);
    }
    printf ("\n\t\t\t\t\t....ThAnK U :-) ....\n\n");
}
