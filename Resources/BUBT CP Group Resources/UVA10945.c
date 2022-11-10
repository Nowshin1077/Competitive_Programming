#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
int main()
{
    char sr[501],a[]= {"DONE"},x[501],m[501];
    int i,j;
    while(gets(sr))
    {
        fflush(stdin);
        j=0;
        if(strcmp(sr,a)==0)
            break;
        for(i=0; sr[i]!='\0';i++)
        {
            if(sr[i]>='a'&&sr[i]<='z')
            {
                x[j]=sr[i];
                j++;
            }
            else if(sr[i]>='A'&&sr[i]<='Z')
            {
                 x[j]=sr[i]+32;
                j++;
            }

        }
        x[j]='\0';
        j=0;
        for(i=0;x[i]!='\0';i++)
        {
            m[i]=x[i];
            j++;
        }
         m[j]='\0';
       strrev(m);
       if(strcmp(x,m)==0)
        printf("You won't be eaten!\n");
       else
        printf("Uh oh..\n");
    }
    return 0;
}
