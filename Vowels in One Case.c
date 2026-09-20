#include <stdio.h>
int main()
{
    char c,ch;
    printf ("\n\t\t\t\t\t....Vowel Switch...\n");
    start:
    fflush(stdin);
    printf ("\n\t\t\t\t\t........HELLO........\n\n");

    printf (" Enter Any Alphabet => ");
    scanf ("%c",&ch);
    if (ch>64 && ch<91 || ch>96 && ch<123)
    {
        switch(ch)
    {
        case 'A' || 'E' || 'I' || 'O' || 'U':printf("\n\n %c Is A Vowel",ch);break;
        default :printf("\n\n %c Is A Consonant",ch);
    }}
    else
    {
        printf ("\n\n\t\t!! %c Is INVALID INPUT!!\n\n",ch);
        printf ("\n\t\t\t\t     ......Program Restarted......\n\n");
        goto start;
    }
    printf("\n\n  Do you Wanna Continue? Yes/No ");
    fflush(stdin);
    scanf("%c",&c);
    if(c=='y'||c=='Y')
        {
            printf ("\n\t\t\t\t     ......Program Restarted......\n\n");
            goto start;
        }o
        printf ("\n\t\t\t\t\t....ThAnK U :-) ....\n\n");
    return 0;
}
