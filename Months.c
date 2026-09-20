#include <stdio.h>

int main()
{
   int n;
   char ch;
   printf ("\n\t\t\t\t\t....months....\n");
   start:
    printf ("\nEnter the number of month\  ");
    scanf ("%d",&n);
   if (n<2)
    printf ("\n\n%d The Month  is JANUARY",n);
   else if (n<3)
    printf ("\n\n%d The Month is FEBRUARY",n);
   else if (n<4)
    printf ("\n\n%d The Month is MARCH",n);
   else if (n<5)
    printf ("\n\n%d The Month is APRIL",n);
   else if (n<6)
    printf ("\n\n%d The Month is MAY",n);
   else if (n<7)
    printf ("\n\n%d The Month is JUNE",n);
   else if (n<8)
    printf ("\n\n%d The Month is JULY",n);
   else if (n<9)
    printf ("\n\n%d The Month is AUGUST",n);
   else if (n<10)
    printf ("\n\n%d The Month is SEPTEMBER",n);
   else if (n<11)
    printf ("\n\n%d The Month is OCTOBER",n);
   else if (n<12)
    printf ("\n\n%d The Month is NOVEMBER",n);
   else if (n<13)
    printf ("\n\n%d The Month is DECEMBER",n);
   else if (n>=13)
    printf ("\n\nPLEASE ENTER CORRECT NUMBER OF MONTH");

       printf("\n\nDo you Wanna Continue? Yes/No");
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
