#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int count;
int partition(int A[SIZE],int l,int r)
{

    int i,j,pivote,temp;
    pivote=A[l];
    i=l+1;
    j=r;
    while(1)
    {

        while(pivote>=A[i] && i<=r)
        {
            count++;

            i++;}
        while(pivote<A[j])
           {count++;

            j--;}
            count++;
        if(i<j)
        {

            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
        else{
            temp=A[j];
            A[j]=A[l];
            A[l]=temp;
            return j;
        }
    }
}
void quicksort(int A[SIZE],int l,int r)
{

    int s;
    if(l<r)
    {

        s=partition(A,l,r);
        quicksort(A,l,s-1);
        quicksort(A,s+1,r);
    }
}
int main()
{

    int i ,A[SIZE],n;
    printf("\n Read Size:");
    scanf("%d",&n);
    printf("\n Read array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    quicksort(A,0,n-1);
    printf("\n sorted elements are\n");
    for(i=0;i<n;i++)
        printf("%d\t",A[i]);
    printf("\n count=%d",count);
}
