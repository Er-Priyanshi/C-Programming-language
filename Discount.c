#include <stdio.h>

int main()
{
    int s;
    char t,ch;
    printf ("\n\t\t\t\t\t.....Discount.....\n");
    start:
          fflush(stdin);
  printf ("\n\t\t\t\t\t........HELLO........\n\n");
    printf ("\n\tEnter Type Of TV:- ");
    scanf ("%c",&t);
    printf ("\n\tEnter Size:- ");
    fflush (stdin);
    scanf ("%d",&s);
    if (s<32 && (t=='E' || t=='e'))
        printf ("Discount:- 10%");

    else if (s>=32 && (t=='e' || t=='E'))
        printf ("Discount:- 12%");

    else if (s<32 && (t=='c' || t=='C'))
        printf ("Discount:- 8%");
    else if (s>=32 && (t=='c' || t=='C'))
        printf ("Discount:- 10%");
    else
        printf ("INVALID INPUT ");
   printf("\nDo you Wanna Continue? Yes/No");
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
