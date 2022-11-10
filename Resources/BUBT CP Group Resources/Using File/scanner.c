#include <stdio.h>
#include <string.h>

int main ()
{


    char sentence[500];     // Our target: i.e. stream of character to make token
    char word[100][100];    // 2D array. it will contain all words

    freopen("in.txt", "r", stdin);
    fgets(sentence,500,stdin);         // getting input
    fclose(stdin);

    int i=0, j=0;           // i is using to iterate sentence , j is using for word
    int count=0, len, status;            // number of words in sentence
    while (sentence[i]!=NULL)// until our input is finish
    {
        if(sentence[i]==32) // checking for a space
        {
            word[count][j]=NULL;
            count++;
            j=0;
            i++;
        }
        else{               // otherwise we shall continuing copy
            word[count][j]=sentence[i];
            j++; i++;
        }
    }
    word[count][j]=NULL;    // finally after getting a null in sentence we shall find our last word

    int k=0;
/*    while (k<=count)
    {
        printf("%s\n", word[k]);
        k++;
    }
*/
    //Write your code here
    freopen("out.txt", "w", stdout);

    for(i=0;i<=count;i++)
    {
        if(word[i][0]>=48&&word[i][0]<=57)
        {
            //printf("\nSl %d. \t- \tNum - \t%s",i+1,word[i]);
            len=strlen(word[i]);
            status = 0;
            for(j=0;j<len;j++)
            {
                if(!(word[i][j]>=48&&word[i][j]<=57||word[i][j]=='.')) status =1;
            }
            if(status==0) printf("\nToken %d. \t- \tNum - \t%s",i+1,word[i]);
            else{         printf("\nERROR. See Token No. %d",i+1);
                          break;}
        }
         else if((word[i][0]>=65&&word[i][0]<=90)||(word[i][0]>=97&&word[i][0]<=122))
        {
            printf("\nToken %d. \t- \tID - \t%s",i+1,word[i]);
        }
        else
        {
            printf("\nToken %d. \t- \tChar - \t%s",i+1,word[i]);
        }
    }

    fclose(stdout);

    return 0;
}



