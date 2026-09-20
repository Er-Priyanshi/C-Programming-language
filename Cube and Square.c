#include <stdio.h>
int main ()

{
    int n,c,s,d;
    char re;
    printf ("\n\t\t\t\t\t.....Cube & Square......\n");
    start:

    printf ("\n\t\t\t\t\t........HELLO........\n\n");
    fflush (stdin);

    printf (" Enter Number: ");
    scanf ("%d",&n);
    printf ("\n 1). Square  2). Cube   3). Both\n\n :- ");
    scanf ("%d",&d);

    s=n*n;
    c=n*n*n;

    if(d==1)
        printf ("\nSq. Of %d Is => %d",n,s);
    else if(d==2)
        printf ("\nCube Of %d Is => %d",n,c);
    else if (d==3)
        printf ("\n Sq. Of %d Is => %d\n \t\t\tAnd \n Cube Of %d Is => %d",n,s,n,c);
    else
        printf("\n\t\t\t !! PLEASE ENTER CORRECT DETAILS !!");
     printf("\n\n Do you Wanna Continue? Yes/No: ");
    fflush(stdin);
    scanf("%c",&re);
    if(re=='y'||re=='Y')
        {
            printf ("\n\t\t\t\t     ......Program Restarted......\n\n");
            goto start;
        }
    else
        printf ("\n\t\t\t\t\t....ThAnK U :-) ....\n\n");

    return 0;
}
