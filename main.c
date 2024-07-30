#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int count;
int BFSM(char T[20],char P[10])
{

    int m,n,i,j;
    n=strlen(T);
    m=strlen(P);
    for(i=0;i<=n-m; i++)
    {

        j=0;
        while(j<m && P[j]==T[i+j]){
              j=j+1;
              count++;
        }
            count++;
        if(j==m)
            return i;
    }
    }

int main()
{
    char T[20],P[10];

    printf("\n Read text \n");
    scanf("%s",T);
     printf("\n Read pattern \n");
    scanf("%s",P);
    flag=BFSM(T,P);

    if(flag==-1)
        printf("\n pattern NOT found");
        printf("\n number of comaprision is %d",count);
    else{
        printf("\n not found at %d location",flag+1);
        printf("\n number of comparision is %d",count-1)
    }

return 0;
}
