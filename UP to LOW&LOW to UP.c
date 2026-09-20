#include <stdio.h>
int main ()
{
  char ch,c;
  printf ("\n\t\t\t\t     ...Up To Low & Low To Up...\n");
  start:
      fflush(stdin);
  printf ("\n\t\t\t\t\t........HELLO........\n\n");
  printf (" Enter A Character:- ");
  scanf ("%c",&ch);
  if (ch>=97)
  printf (" Upper Case Letter:- %c\n",ch-32);
  else if (ch<=90)
    printf (" Lower Case Letter:- %c\n",ch+32);

    printf("\nDo you Wanna Continue? Yes/No: ");
    fflush(stdin);
    scanf("%c",&c);
    if(c=='y'||c=='Y')
        {
            printf ("\n\t\t\t\t     ......Program Restarted......\n\n");
            goto start;
        }
        printf ("\n\t\t\t\t\t....ThAnK U :-) ....\n\n");

  return 0;
}
