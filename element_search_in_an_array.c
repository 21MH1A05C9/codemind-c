#include<stdio.h>
int binary_search(int *arr,int L,int H,int se)
{
    int M;
    if(L>H)
    {
        return 0;
    }
    M=(L+H)/2;
    if(se==arr[M])
    {
        return 1;
    }
    if(se>arr[M])
    {
        L=M+1;
    }
    if(se<arr[M])
    {
        H=M-1;
    }
    return binary_search(arr,L,H,se);
}
int main()
{
    int size,arr[100],i,se;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&se);
    if(binary_search(arr,0,size-1,se))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}