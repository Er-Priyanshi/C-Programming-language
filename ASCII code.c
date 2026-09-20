
#include <stdio.h>

int main()
{
    char ch,re;
    printf ("\n\t\t\t\t\t.....ASCII Code.....\n");
    start:

    printf ("\n\t\t\t\t\t........HELLO........\n\n");
    fflush (stdin);
    printf ("\n Enter A Character :- ");
    scanf ("%c",&ch);

    printf ("\n Input Char. -> %c",ch);
    printf ("\n ASCII Code:- %d",ch);
    if (ch>=97)
  printf (" \n Upper Case Letter:- %c\n",ch-32);
  else if (ch<=90)
    printf ("\n Lower Case Letter:- %c\n",ch+32);

    printf("\n Do you Wanna Continue ? Yes/No: ");
    fflush(stdin);
    scanf("%c",&re);
    if(re=='y'||re=='Y')
        {
            printf ("\n\t\t\t\t     ........Program Restarted________\n\n");
            goto start;
        }
    else
        printf ("\n\t\t\t\t\t....Thank you :-) ....\n\n");

    return 0;
}
