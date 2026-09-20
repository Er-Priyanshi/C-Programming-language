#include <stdio.h>
int main()
{
    int x=1,y;


    printf ("\nx=%d",x);
    x++; //++x
    printf ("\nx=%d",x);

{
    printf ("\nx=%d",x);
    y=++x+x++;
    printf ("\nx=%d y=%d",x,y);
}

{
    printf ("\nx=%d",x);
    y=x++ + ++x + ++x;
    printf ("\nx=%d y=%d",x,y);
}
{
    printf ("\nx=%d",x);
    y=x++ + ++x;
    printf ("\nx=%d y=%d",x,y);
}
{
    printf ("\nx=%d",x);
    y=x++ + ++x + x++;
    printf ("\nx=%d y=%d",x,y);
}
{
    printf ("\nx=%d",x);
    y=x++&&++x;
    printf ("\nx=%d y=%d",x,y);
}
{
    printf ("\nx=%d",x);
    y=--x&&x++;
    printf ("\nx=%d y=%d",x,y);
}
{
    printf ("\nx=%d",x);

    printf ("%d%d%d%d%d%d",x++,x,++x,x++,++x,x++);
}

    return 0;
}
