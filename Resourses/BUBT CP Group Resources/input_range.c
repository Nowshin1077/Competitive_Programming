#include<stdio.h>
#include<string.h>

int main(void)
{
char sentence[500];
char word[100][100];
char st,e;

gets(sentence);

int i=0,j=0,n;
int count=0;

printf("Enter set Number : ");
scanf("%d",&n);

printf("Enter 1st set  : \nStart1 : ");
scanf("%c ",&st);
//getch(st);

printf("\nEnd1 : ");
scanf("%c ",&e);
//getch(e);




while(sentence[i]!=NULL)

{
    if(sentence[i]==32)
    {
        word[count][j]=NULL;
        count++;
        j=0;
        i++;
    }

    else{
    word[count][j]=sentence[i];
    j++;
    i++;
    }
}


word[count][j]=NULL;
int k=0;
while(k<=count)
{
    printf("%s\n",word[k]);
    k++;
}


int m,l,len,status=0;

for(m=0;m<=count;m++)
{
    l=(int) word[m][0];
    printf("L=%c=%d\n",l,l);

    if(l>='st'&&l<='e')//evabe variable use kore valu hisebe a,z dile (not match dekhasse)
    //if((l>='a'&&i<='z'))//eta use korle result pawa jay
    {
printf("\nToken %d. \t- \tSmall letter - \t%s",m+1,word[m]);    }

  /*
    else if(l>='0'&&l<='9')
    {

        len=strlen(word[m]);
       // printf("len:%d",len);

        for(j=0;j<len;j++){
        if(word[m][j]=='.')status=1;
        //else status=0;


        }

        if(status==1){printf("\nToken %d. \t- \tDeci - \t%s",m+1,word[m]);    }

        else if(status==0){printf("\nToken %d. \t- \tNum - \t%s",m+1,word[m]);    }

    }

    else {printf("\nToken %d. \t- \tChar - \t%s",m+1,word[m]);    }
*/

else
{printf("\ntoken does not match");}

}
return 0;
}

