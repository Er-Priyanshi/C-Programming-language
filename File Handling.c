#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
char ch,w[200],file_name[50],m[5];
FILE *fp;
printf("\n\n Enter the file Path : ");
gets(file_name);
fp = fopen(file_name,"r");
if( fp==NULL )
{
printf ("\n Error while opening the file.\n");
}
else
printf("\n\n The contents of %s file are :\n\n", file_name);
do
{
    ch=fgetc(fp);
    printf("%c",ch);
}while(ch != EOF);
fclose(fp);
printf("\n\n What You Want To Do With > %s <\n",file_name);
printf("\n\n\n r => Open text file.\n\n w => Open text file or create new file if it doesn't exist\n\n a => It opens text file for appending(Writing text at the end)or create new if it doesn't exist\n\n r+ => It opens text file or reading only\n\n w+ => It opens a text file for reading and writing,create the file if it doesn't exist,\n\tand empties it if it already exist.\n\n a+ => It opens a text fie for reading and appending and creates the file if it doesn't exist (Writing can only append.)\n\n rb => Opens a binary file in read mode\n\n wb => opens a binary file in write mode\n\n ab => opens a binary file in append mode\n\n rb+ => opens a binary file in read and write mode\n\n wb+ => opens a binary file in read and write mode\n\n ab+ => opens a binary file in read and write mode\n");
printf("\n Enter Mode: ");
gets(m);
fp = fopen(file_name,m);
printf("\n\n Write Down Below:\n\n");
gets(w);
fprintf(fp,"%s",w);
printf("\n\t Your Message Is Saved\n\n");
fclose(fp);
printf(" Your Actual Content Is:\n\n");
fp=fopen(file_name,m);
do
{
    ch=fgetc(fp);
    printf("%c",ch);
}while(ch != EOF);
fclose(fp);
printf("\n\n\t\t\t....Thank you....\n\n");
return 0;
}