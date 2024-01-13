#include<stdio.h>
main()
{

        FILE *fp;
        char ch;

        fp = fopen("ABC.txt","w");

        printf("\n DATA INPUT : ");

        while(ch=getchar()!=EOF)
        {

                putc(ch,fp);

        }
        fclose(fp);

}