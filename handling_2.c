#include<stdio.h>
#include<stdlib.h>
main()
{
        char filename[10];
        FILE *fp1,*fp2;
        int i, number;

        fp1 = fopen("TEST","w");
        for(i=10;i<=100;i+=10)
        {
            putw(i,fp1);
        }
        fclose(fp1);

        printf("\n input filename \n");
        scanf("%s",filename);

        if((fp2 = fopen(filename,"r"))==NULL)
        {
            printf("can not open the file.\n");
            exit(0);
        }
        else
            for(i=1;i<=20;i++)
            {
                number=getw(fp2);
                if(feof(fp2))
                {
                    printf("\n Ran out of data \n");
                    break;
                }
                else
                    printf("%d\n",number);
            }
        fclose(fp2);       
}