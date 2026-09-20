#include <stdio.h>
int main ()
{
    int sal;
    char s,ch;
    printf ("\n\t\t\t\t\t....Salary As Grade....\n");
      start:
  fflush(stdin);
  printf ("\n\t\t\t\t\t........HELLO........\n\n");


    printf ("\nEnter Grade ");
    scanf ("%c",&s);
    sal=0;
    switch (s)
    {
      case 'A':
      case 'a': sal+=15000;
      case 'B':
      case 'b': sal+=15000;
      case 'C':
      case 'c': sal+=15000;
    }
    printf("\Your Salary: %d",sal);

          printf("\n\nDo you Wanna Continue? Yes/No ");
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
