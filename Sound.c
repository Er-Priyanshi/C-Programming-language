#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <windows.h>
#include <graphics.h>
#include <mmsystem.h>
int main()
{
    c:
    int c,i,s,j,k,z;
    char M[50],B[]{"COLOR "},C[5],D[5],Fp[50],m[50];
    printf("\n Enter Background Color: ");
    printf("\n\t0= Black\t8 = Gray\n\t1 = Blue\t9 = Light Blue\n\t2 = Green\tA = Light Green\n\t3 = Aqua\tB = Light Aqua\n\t4 = Red\t\tC = Light Red\n\t5 = Purple\tD = Light Purple\n\t6 = Yellow\tE = Light Yellow\n\t7 = White\tF = Bright White\n\n => ");
    scanf("%s",C);
    printf("\n Enter Font Color: ");
    printf("\n\t0= Black\t8 = Gray\n\t1 = Blue\t9 = Light Blue\n\t2 = Green\tA = Light Green\n\t3 = Aqua\tB = Light Aqua\n\t4 = Red\t\tC = Light Red\n\t5 = Purple\tD = Light Purple\n\t6 = Yellow\tE = Light Yellow\n\t7 = White\tF = Bright White\n\n => ");
    scanf("%s",D);
    strcat(B,C);
    strcat(B,D);
    system (B);
    printf("\n Do Want Change B.G & Font Color\n 1).Yes\n 2).No\n => ");
    scanf("%d",&c);
    if(c==1)
    {
        fflush(stdin);
        goto c;
    }
    system("cls");
    printf ("\n\n\n\t\t\t\t\t.....Play Music.....\n");
    printf ("\n\t\t\t\t\t........HELLO........\n\n");
    printf(" Enter Music Name : ");
    gets(m);
    gets(m);
    printf ("\n Enter Path :- ");
    gets(M);
    PlaySound(TEXT(M),NULL,SND_ASYNC);
    system ("cls");
    printf("\n\n\t");

    for(z=0;;z++)
    {
        system("cls");
        printf("\n\n\t\t>>>>Now Playing %s....\n\n",m);
        for(i=1;i<=11;i++)
        {
            printf ("\t\t\t\t\t");
                for (s=i;s<=10;s++)
            {
                printf (" ");
            }
            for(j=i;j>=2;j--)
            {
                printf("*");
            }
            for (k=1;k<=i;k++)
            {
                printf ("*");

            }
            printf ("\n");
            printf ("%d",z%3);
            if(z%3==0)
            {
                delay(500);
            }
            if(i==1)
                system("color F1");
            else if(i==2)
                system("color E8");
            else if(i==3)
                system("color F3");
            else if(i==4)
                system("color 37");
            else if(i==5)
                system("color F4");
            else if(i==6)
                system("color 42");
            else if(i==7)
                system("color F5");
            else if(i==8)
                system("color 16");
            else if(i==9)
                system("color F9");
            else if(i==10)
                system("color 26");
            else if(i==11)
                system("color CD");
        }}
    return 0;
}
