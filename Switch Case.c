#include <stdio.h>
int main()
{
    int wd;
    char ch;
    printf ("\n\t\t\t\t\t ....Week Days....\n");
    start:
        fflush(stdin);
    printf ("\n\t\t\t\t\t........HELLO........\n\n");
    printf ("\n Enter any Day No.:- ");
    scanf ("%d",&wd);
    switch (wd)
    {
        case 1: printf ("\n\tSUNDAY\n");break;
        case 2: printf ("\n\tMONDAY\n");break;
        case 3: printf ("\n\tTUESDAY\n");break;
        case 4: printf ("\n\tWEDNESDAY\n");break;
        case 5: printf ("\n\tTHUSDAY\n");break;
        case 6: printf ("\n\tFRIDAY\n");break;
        case 7: printf ("\n\tSATDAY\n");break;
        default : printf ("\n\t\tInvalid Input\n");
    }
    printf("\nDo you Wanna Continue? Yes/No: ");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
        {
            printf ("\n\t\t\t\t     ......Program Restarted......\n\n");
            goto start;
        }

        printf ("\n\t\t\t\t\t....ThAnK U :-) ....\n\n");

    return 0;
}