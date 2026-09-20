#include <stdio.h>
#include <string.h>
#include <conio.h>
struct Patients  { int Room_no,Bed_Num; char name[30] ;float Bp,Oxy; };
int main()
{
    int m,i,p;
    printf ("\n\n\t\t\t\t.......Patients.......\n");
    printf ("\n\t\t\t\t........HELLO.........\n\n");
    printf ("\n Enter Number Of Patients: ");
    scanf("%d",&p);
    struct Patients pat[p+1];
    Menu:
    printf ("\n\t\t\t\t........MENU.........\n\n");
    printf("\n\n\t1> Enter Details Of Patients");
    printf("\n\n\t2> Show Details Of All Patients");
    printf("\n\n\t3> Show Details Of High B.P Patients");
    printf("\n\n\t4> Show Details Of Low B.P Patients");
    printf("\n\n\t5> Show Details Of Low Oxygen Level Patients");
    printf("\n\n\t6> Exit\n\n\t=>> ");
    scanf("%d",&m);
    if (m==1)
    {
        printf("\n\n Enter Details Of Patients\n\n");
        for(i=0; i<p; i++)
        {
            printf("\n Patient No. %d\n",i+1);
            printf("\n Enter name: ");
            scanf("%s",pat[i].name);
            printf("\n Enter Room no.: ");
            scanf("%d", &pat[i].Room_no);
            printf("\n Enter Bed number: ");
            scanf("%d", &pat[i].Bed_Num);
            printf("\n Enter Blood Pressure: ");
            scanf("%f", &pat[i].Bp);
            printf("\n Enter Oxygen Level: ");
            scanf("%f", &pat[i].Oxy);
        }
        goto Menu;
        }
    else if(m==2)
    {
        printf ("\n\n\t\tDetails Of All Patients\n");
        for(i=0; i<p; i++)
        {
            printf("\n\n");
            printf("\n=> Patient No. %d\n",i+1);
            printf("=> Name : %s\n", pat[i].name);
            printf("=> Room no. : %d\n", pat[i].Room_no);
            printf("=> Bed no. : %d\n", pat[i].Bed_Num);
            printf("=> Blood Pressure: %f\n",pat[i].Bp);
            printf("=> Oxygen Level: %f\n",pat[i].Oxy);
        }
        printf ("\n\t\t>>>PRESS ANY KEY<<<");
        getch();
        goto Menu;
        }
    else if(m==3)
    {
        printf ("\n\n\t\tDetails Of High B.P Patients\n");
        for(i=0; i<p; i++)
        {
            if (pat[i].Bp>90)
            {
            printf("=> Patient No. %d\n",i+1);
            printf("=> Name : %s\n", pat[i].name);
            printf("=> Room no. : %d\n", pat[i].Room_no);
            printf("=> Bed no. : %d\n", pat[i].Bed_Num);
            printf("=> Blood Pressure: %f\n",pat[i].Bp);
            printf("=> Oxygen Level: %f\n",pat[i].Oxy);
            }
        }
        printf ("\n\t\t>>>PRESS ANY KEY<<<");
        getch();
        goto Menu;
    }
        else if(m==4)
    {
                    printf ("\n\n\t\tDetails Of Low B.P Patients\n");
        for(i=0; i<p; i++)
        {
            if (pat[i].Bp<60)
            {
            printf("=> Patient No. %d\n",i+1);
            printf("=> Name : %s\n", pat[i].name);
            printf("=> Room no. : %d\n", pat[i].Room_no);
            printf("=> Bed no. : %d\n", pat[i].Bed_Num);
            printf("=> Blood Pressure: %f\n",pat[i].Bp);
            printf("=> Oxygen Level: %f\n",pat[i].Oxy);
            }
        }
        printf ("\n\t\t>>>PRESS ANY KEY<<<");
        getch();
        goto Menu;
        }
        else if(m==5)
    {
        printf ("\n\n\t\tDetails Of Low Oxygen Level Patients\n");
        for(i=0; i<p; i++)
        {
            if (pat[i].Oxy<70)
            {
            printf("=> Patient No. %d\n",i+1);
            printf("=> Name : %s\n", pat[i].name);
            printf("=> Room no. : %d\n", pat[i].Room_no);
            printf("=> Bed no. : %d\n", pat[i].Bed_Num);
            printf("=> Blood Pressure: %f\n",pat[i].Bp);
            printf("=> Oxygen Level: %f\n",pat[i].Oxy);
            }
        }
        printf ("\n\t\t>>>PRESS ANY KEY<<<");
        getch();
        goto Menu;
        }
    else if (m==6)
    {
        goto exit;
    }
    else
    {
        printf ("\n\n\t\t!!!INVALID INPUT!!!\n");
        goto Menu;
    }
    exit:
    return 0;
}