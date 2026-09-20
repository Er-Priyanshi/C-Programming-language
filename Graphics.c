#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<graphics.h>
int main()
{
    ///int gd=DETECT,gm;
    int x,y,S;
    char Fp[50],M[50];
    printf ("\n\t\t\t\t\t.....File Handling.....\n");
    printf ("\n\t\t\t\t\t........HELLO........\n\n");
    printf("\n\n Enter File Path: ");
    gets(Fp);
    ///initgraph(&gd,&gm,"Mr.Harsh")
    printf("\n Enter Size Of Window:-\n x: ");
    scanf("%d",&x);
    printf(" y: ");
    scanf("%d",&y);
    printf("\n\n OK\n\tSo, Do You Want To Copy This File?\n 1).Yes\n 2).No\n : ");
    scanf("%d",&S);
    if(S==1)
    {
        printf("\n Thik Hai, To File Kis Naam Se Save Karna Hai\n => ");
        ///printf("\n Ok,Enter File Name you Want To Save File With: ");
        scanf("%s",&M);
    }
    printf("\a\n Now The Image Will Be Displayed On New Window ");
    initwindow(x,y,"Mr.Harsh");
    setbkcolor(BLACK);
    cleardevice();
    readimagefile(Fp,100,100,450,450);
    if(S==1)
    {
        writeimagefile(M,100,100,450,450);
        outtextxy(0,250,"File Saved");
        getch();
    }
    else if(S!=1)
    getch();
    printf ("\n\n\t\t\t ^_^THANK U ^_^ \n\n");
    printf("\n\n\t\t\t....MADE BY PRIYANSHI....\n\n");
    return 0;
}
