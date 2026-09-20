#include <stdio.h>
 int main()
 {
     long dd,mm,yy,days,wd;
     char s,ch;
     printf ("\n\t\t\t\t\t  .....Calender.....\n");
     start:
         fflush(stdin);
     printf ("\n\t\t\t\t\t........HELLO........\n\n");
     printf ("Enter Any Date (DD:MM:YYYY) :- ");
     scanf ("%ld%c%ld%c%ld",&dd,&s,&mm,&s,&yy);
     printf ("\nDate Entered--> %ld%c%ld%c%ld",dd,s,mm,s,yy);
     days=(yy-1900)*365+(yy-1900)/4;
     switch (mm)
     {
         case 12:days+=30;
         case 11:days+=31;
         case 10:days+=30;
         case 9:days+=31;
         case 8:days+=31;
         case 7:days+=30;
         case 6:days+=31;
         case 5:days+=30;
         case 4:days+=31;
         case 3:days+=28;
         case 2:days+=31;
         case 1:days+=dd;
     }
     if((yy%400==0 || (yy%4==0&&yy%100!=0))&&mm<=2)
     days-=1;
     wd=days%7;
     printf("\n\n And The Day Is/Was ");
     switch (wd)
     {
         case 0: printf ("Sunday");break;
         case 1: printf ("Monday");break;
         case 2: printf ("Tuesday");break;
         case 3: printf ("Wednesday");break;
         case 4: printf ("Thursday");break;
         case 5: printf ("Friday");break;
         case 6: printf ("Saturday");break;
     }
    printf("\n\n Do you Wanna Continue? Yes/No: ");
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
