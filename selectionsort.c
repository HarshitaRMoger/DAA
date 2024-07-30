#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int count;
void selectionsort(int A[SIZE],int n)
{

    int i,j,temp,min;
    for(i=0;i<=n-2;i++)
    {
        min=i;
    for(j=i+1;j<=n-1;j++)
    {
        count++;
       if(A[j]<A[min])
        min=j;
    }

        temp=A[i];
        A[i]=A[min];
        A[min]=temp;
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
   selectionsort(A,n);
   printf("\n sorted elements are: \n");
   for(i=0;i<=n-1;i++)
   printf("%d \t",A[i]);
   printf("\number of comparision is %d",count);
   return 0;
}
