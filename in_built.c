#include<stdio.h>
#include<string.h>
#include<unistd.h>
void p_wd(char c[])
{
	printf("%s\n",c);
}
void echo(char c[])
{
        int i;
        for(i=5;i<strlen(c);i++)
        {
                if((c[i]!=34 && c[i]!='\n'))
                        printf("%c",c[i]);
        }
        printf("\n");
}
void ch_dir(char c[],int done,char ho[])
{
        char d1[2]=" ";
        char *token[100];
        int m=0,i,k;
        token[m]=strtok(c,d1);
        while(token[m]!=NULL)
        {
                //printf("%s\n",token[m]);
                m++;
                token[m]=strtok(NULL,d1);
        }
        if(done==1)
        {
                k=strlen(token[m-1]);
                token[m-1][k-1]='\0';
        }
        int re,len; 
	char bo[100];
	len=strlen(token[1]);
        if(token[1]!=NULL)
        {
		if(token[1][0]=='~')
		{
			if(token[1][len-1]!='/')
			{
				token[1][len]='/';
				token[1][len+1]='\0';
			}
			for(i=1;i<strlen(token[1]);i++)
				token[1][i-1]=token[1][i];
			strcpy(bo,ho);
			strcat(bo,token[1]);
			re=chdir(bo);		
		}
		else
		{
                	re=chdir(token[1]);
		}
                if(re==-1)
                        fprintf(stderr,"Change directory failed\n");
        	
	}
        else 
        chdir(ho);
}

