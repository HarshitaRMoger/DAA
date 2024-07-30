#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int count;
void bubblesort(int A[SIZE],int n)
{

    int i,j,temp;
    for(i=0;i<=n-2;i++)
    {

        for(j=0;j<=n-2;j++)
        {

            if(A[j]>A[j+1])
            {
                count++;
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
            count++;
        }
    }
}
int main()
{
   int i,A[SIZE],n;
   printf("\n Read a size:");
   scanf("%d",&n);
   printf("\n Read array elements:\n");
   for(i=0;i<=n-1;i++)
   scanf("%d",&A[i]);
   bubblesort(A,n);
   printf("\n sorted elements are: \n");
   for(i=0;i<=n-1;i++)
   printf("%d \t",A[i]);
   printf("\number of comparision is %d",count);
   return 0;
}
