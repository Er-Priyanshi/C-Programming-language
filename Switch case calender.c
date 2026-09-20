
#include <stdio.h>
 int main()
 {
     long dd,mm,yy,days,wd;
     char co,ch;
     printf ("\n\t\t\t\t\t.....Calender.....\n");
     start:

     printf ("\n\t\t\t\t\t........HELLO........\n\n");
     printf ("Enter Any Date (DD:MM:YYYY) :- ");
     scanf ("%ld%c%ld%c%ld",&dd,&ch,&mm,&ch,&yy);
     printf ("\n\n Date Entered--> %ld%c%ld%c%ld",dd,ch,mm,ch,yy);
     days=(yy-1900)*365+(yy-1900)/4;
     switch (mm)
     {
         case 1:days+=dd;break;
         case 2:days+=dd+31;break;
         case 3:days+=dd+31+28;break;
         case 4:days+=dd+31+28+31;break;
         case 5:days+=dd+31+28+31+30;break;
         case 6:days+=dd+31+28+31+30+31;break;
         case 7:days+=dd+31+28+31+30+31+30;break;
         case 8:days+=dd+31+28+31+30+31+30+31;break;
         case 9:days+=dd+31+28+31+30+31+30+31+31;break;
         case 10:days+=dd+31+28+31+30+31+30+31+31+30;break;
         case 11:days+=dd+31+28+31+30+31+30+31+31+30+31;break;
         case 12:days+=dd+31+28+31+30+31+30+31+31+30+31+30;break;
     }
     if((yy%400==0 || (yy%4==0&&yy%100!=0))&&mm<=2)
     days-=1;
     wd=days%7;
     printf("\n\n And The Is/Was ");
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
    printf("\n\nDo you Wanna Continue? Yes/No: ");
    fflush(stdin);
    scanf("%c",&co);
    if(co=='y'||co=='Y')
        {
            printf ("\n\t\t\t\t     ......Program Restarted......\n\n");
            goto start;
        }
    else
        printf ("\n\t\t\t\t\t....ThAnK U :-) ....\n\n");

     return 0;
 }