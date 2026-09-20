
#include <stdio.h>
int main()
{
    int i=1,x,y=0,z;
    char ch;
    printf ("\n\n\t\t\t\t  ......Binary......\n\n");
    start:
    printf ("\t\t\t\t.........HELLO.........\n\n");
    printf(" Enter A Number : ");
    scanf("%d",&x);
    printf("\n %d Is Converted To =>> ",x);
    while(x!=0)
    {
        z=x%2;
        x/=2;
        y+=z*i;
        i*=10;
    }
    printf("%d (Binary)\n",y);
    printf("\n\nDo you Wanna Continue? Yes/No ");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
        {
            printf ("\n\t\t\t\t....Program Restarted....\n\n");
            goto start;
        }
    else
        printf ("\n\t\t\t\t\t....ThAnK U :-) ....\n\n");
    return 0;
}
