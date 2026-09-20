
#include<stdio.h>
#include<math.h>
int main()
{
    float p,t,r,s,si,c;
    char ch,h;
    printf ("\n\t\t\t\t\t....INTEREST....\n");
    start:
    fflush(stdin);
    printf ("\n\t\t\t\t\t.....HELLO.....\n\n");

    printf(" Enter Principal Amount : ");
    scanf("%f",&p);
    printf("\n Enter Time in year : ");
    scanf("%f",&t);
    printf("\n Enter Rate Of Interest : %");
    scanf("%f",&r);
    printf("\n\a Choose Which You Want :-\n");
    printf("\n\t Simple Interest \t Compound Interest \t Both\n => ");
    scanf ("%s",&h);

    si=(p*t*r)/100.0;
    c=p*(pow(1+r/100,t)-1);

    if (h=='s' && h=='S')
    goto sim;
    else if (h=='c' || h=='C')
    goto comp;
    else if (h=='b' || h=='B')
    goto both;


    sim:
    printf("\n\n\a  Simple Interest = %0.3f\n",si);
    goto end;

    comp:
    printf("\n\n\a  Compound Interest = %0.3f\n",c);
    goto end;

    both:
    printf("\n\n\a  Simple Interest = %0.3f\n",si);
    printf("\n\a  Compound Interest = %0.3f\n",c);

    end:
    printf("\n\n  Do you Wanna Continue? Yes/No: ");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='y'||ch=='Y')
    {
    printf ("\n\t\t\t\t     ......Program Restarted......\n\n");
    goto start;
    }
    else
    printf ("\n\a\t\t\t\t\t....ThAnK U :-) ....\n\n");
    return(0);
}
