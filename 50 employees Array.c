#include<stdio.h>
int main()
{
    int age[100],k,i=0,cnt=0,v=1,h,s;

    printf ("\n\n\t\t\t\t....Age Of the Employees....\n\n");
    printf ("\t\t\t\t........Hello.........\n\n");
    printf (" Enter The No. Of the Employees :  ");
    scanf ("%d",&k);
    printf ("\n Enter The Age Between You Want :\n\n From - ");
    scanf ("%d",&h);
    printf ("\n To - ");
    scanf ("%d",&s);
    for ( ;i<k;i++)
    {
        printf ("Enter The Age Of Employ no. %d :- ",v);
        scanf ("%d",&age[i]);
        v++;
    }
    printf("\n Ages Employees Between %d And %d ",h,s);
    for (i=0;i<k;i++)
    {
        if(age[i]>=h&&age[i]<=s)
    {
        v=0;
        v++;
        printf("\n %d). Age of employee -> %d",v,age[i]);
        cnt++;
    }}
    printf("\n\n Total Employees With age between %d And %d => %d",h,s,cnt);

    printf ("\n\n\t\t\t ^_^ THANK you ^_^ \n\n");
    return 0;
}N
