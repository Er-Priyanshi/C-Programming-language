#include <stdio.h>
int main ()

{
      int  s,d,r,i,t;
      char ch;
      printf ("\n\t\t\t\t\t   .....D.T.S.....\n");
      start:
      fflush(stdin);
      printf ("\n\t\t\t\t\t........HELLO........\n\n");
      printf ("\n\nPlease Select One Of The Following");
      printf ("\n\t1.(Distance) \n\t2.(Time)\n\t3.(Speed)\n\n\t=> ");
      scanf ("%d",&i);

      if (i==1)
      goto distance;
    else if (i==2)
      goto time;
    else if (i==3)
      goto speed;
    else
      goto input;

    distance:
             printf ("\nPlease Enter Speed in (km/ph):- ");
             scanf ("%d",&s);
             printf ("\nPlease Enter Time in (hrs)-: ");
             scanf ("%d",&t);
             r=s*t;
             printf ("\n\n\tDistance=> %d kms",r);
        goto end;

    speed:
             printf ("\nPlease Enter Distance in (kms)-: ");
             scanf ("%d",&d);
             printf ("\nPlease Enter Time in (hrs)-: ");
             scanf ("%d",&t);
             r=d/t;
             printf ("\n\n\tSpeed =>%d km/ph",r);
          goto end;

    time:
             printf ("\nPlease Enter Distance in (kms)-: ");
             scanf ("%d",&d);
             printf ("\nPlease Enter Speed in (km/ph):- ");
             scanf ("%d",&s);
             r=d/s;
             printf ("\n\n\tTime =>%d hrs",r);
        goto end;

    input:
          printf ("\n\n\t\tINVALID INPUT\n\n\n");

    end:
        printf("\n\nDo you Wanna Continue? Yes/No ");
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
