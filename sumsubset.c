#include <stdio.h>
#include <stdlib.h>
int w[10],x[10],d;
void sum_subset(int S,int k,int r)
{
    int i;
    static int b=1;
    x[k]=1;
    if(w[k]+S==d)
    {
        printf("\n solution %d=",b++);
        for(i=1;i<=k;i++)
        {
            if(x[i]==1)
                printf("%d\t",w[i]);
        }
        printf("\n");
    }
    else if(S+w[k]+w[k+1]<=d)
        sum_subset(S+w[k],k+1,r-w[k]);
        if(S+r-w[k]>=d && S+w[k+1]<=d)
    {
        x[k]=0;
        sum_subset(S,k+1,r-w[k]);

    }
    if(b==1)
       {

        printf("\n No solution");
    exit(0);}
}

int main()
{ int i,n,sum=0;
    printf("Read number of elements:\n");
    scanf("%d",&n);
    printf("\n Read elements in increasing order \n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&w[i]);
        sum=sum+w[i];

    }
    printf("\nRead value for d \n");
    scanf("%d",&d);
    sum_subset(0,1,sum);
    return 0;
}
