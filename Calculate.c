
#include<stdio.h>
int main()
{
    int x,y,z,r;
    char ch;
    printf ("\n\t\t\t\t\t.....Calculate.....\n");
    start:

    printf ("\n\t\t\t\t\t........HELLO........\n\n");
    printf("\n\nEnter any two numbers-:\n ");
    scanf("%d%d",&x,&y);
    printf("\t1-(Add)\n\t2-(Sub)\n\t3-(Multi)\n\t4-(Div)\n\t5-(Mod)\n");
    printf("\nChoose one from the above= ");
    scanf("\n%d",&z);
    if(z==1)
    {
        r=x+y;
            printf("\n\tResult=%d\n",r);
    }
    else if(z==2)
    {
        r=x-y;
        printf("\n\tResult=%d\n",r);
    }
    else if(z==3)
    {
        r=x*y;
        printf("\n\tResult=%d\n",r);
    }
    else if(z==4)
    {
        r=x/y;
            printf("\n\tResult=%d\n",r);
    }
    else if(z==5)
    {
       r=x%y;
        printf("\n\tResult=%d\n",r);
    }

    printf("\n\n Do you Wanna Continue? Yes/No: ");
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
