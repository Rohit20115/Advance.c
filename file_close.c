#include<stdio.h>
main()
{

        FILE *fp;
        char ch;

        fp=fopen("ABC.txt","r");

        printf("\n DATA OUTPUT ");

        while((ch=getc(fp)!=EOF))
        {
                printf("%c",ch);

        }
        fclose(fp);

}