#include <stdio.h>
swap(int*a,int*b);
int main()
{
    int a,b;
    printf("\n\n\t\t\t\t....SWAP NUMBERS....\n");
    printf("\n Enter Value of A= ");
    scanf ("%d",&a);
    printf("\n Enter Value of B= ");
    scanf ("%d",&b);
    swap(&a,&b);
    printf("\n After Swapping A= %d and B= %d\n\n",a,b);
    return 0;
}
swap(int*x,int*y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
/*{
    int a,b;
    printf("\n\n\t\t\t\t....SWAP NUMBERS....\n");
    printf("\n Enter Value of A= ");
    scanf ("%d",&a);
    printf("\n Enter Value of B= ");
    scanf ("%d",&b);
    printf("\n After Swapping A= %d and B= %d\n\n",b,a);
    return 0;
}*/
