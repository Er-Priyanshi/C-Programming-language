#include<stdio.h>
#include<windows.h>

int main()
{
    int h=1,m=0,s=0;
    printf("Please Enter A Time Formate HH:MM:SS\n");
    scanf("%d:%d:%d",&h,&m,&s);
    for ( ; ; )
 {
    for( ;h<13;h++)
    {
        for( ;m<60;m++)
        {
            for (;s<60;s++)
            {

                        printf("\r%02d:%02d:%02d",h,m,s);
                        Sleep(1000);
                        fflush(stdout);

            }
           s=0;
        }
       m=0;
    }
    h=1;
  }
  return 0;
}
