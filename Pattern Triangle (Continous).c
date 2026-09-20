#include<stdio.h>
#include<windows.h>
int main()
{
    int a,b,c,d,e,f=7;
    for(e=1;e>0;e++){
        for(a=1;a<=f;a++){
            printf ("\t");
            for (b=a;b<=f-1;b++)
            {
                printf (" ");
            }
            for(c=a;c>=2;c--)
            {
                printf("*");
            }
            for (d=1;d<=a;d++)
            {
                printf ("*");
            }
            printf ("\n");
        }

    }

}
