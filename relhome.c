#include<stdio.h>
#include<string.h>
#include<unistd.h>
void pwd(char t[],char r[],char ho[])
{
        getcwd(t,1023);
        int i,len1,len2;
        len1=strlen(t);
        len2=strlen(ho);
        if(len1<len2)
                strcpy(r,t);
        else if(strncmp(t,ho,len2-1)==0)
        {
                r[0]='~';
                r[1]='/';
                for(i=0;i<len1-len2;i++)
                {    
                        r[i+2]=t[len2+i+1];
                }       
                r[len2-len1+2]='\0';
        }
                else
                strcpy(r,t);
}
	
