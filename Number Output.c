#include <stdio.h>
int main()
{
    int n,u,t;
    char ch;
    printf ("\n\t\t\t\t\t....Number Output....\n");
    start:
    fflush(stdin);
    printf ("\n\t\t\t\t\t........HELLO........\n\n");
    printf ("\n Enter Any Number:- ");
    scanf ("%d",&n);
    printf("\n\a In Words => ");
    t=n/10;
    u=n%10;
    if (n>10 && n<20)
    {
        switch (u)
    {
        case 1:printf (" Eleven");break;
        case 2:printf (" Twelve");break;
        case 3:printf (" Thirteen");break;
        case 4:printf (" Fourteen");break;
        case 5:printf (" Fifteen");break;
        case 6:printf (" Sixteen");break;
        case 7:printf (" Seventeen");break;
        case 8:printf (" Eighteen");break;
        case 9:printf (" Nineteen");break;
    }}
    else
    {
        switch (t)
    {
        case 1: printf (" Ten");break;
        case 2: printf (" Twenty");break;
        case 3: printf (" Thirty");break;
        case 4: printf (" Forty");break;
        case 5: printf (" Fifty");break;
        case 6: printf (" Sixty");break;
        case 7: printf (" Seventy");break;
        case 8: printf (" Eighty");break;
        case 9: printf (" Ninety");break;
    }
    if (t!=1)
        switch (u)
    {   case 1:printf (" One");break;
        case 2:printf (" Two");break;
        case 3:printf (" Three");break;
        case 4:printf (" Four");break;
        case 5:printf (" Five");break;
        case 6:printf (" Six");break;
        case 7:printf (" Seven");break;
        case 8:printf (" Eight");break;
        case 9:printf (" Nine");break;
    }}
    if (n=0)
        printf (" Zero ");
    printf("\n\n\n Do you Wanna Continue? Yes/No: ");
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
