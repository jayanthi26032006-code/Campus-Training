#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n][n];
    int (*a)[n];
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    scanf("%d",&arr[i][j]);
    a=arr;
    for(i=0;i<n;i++){
    for(j=0;j<n;j++)
    printf("%d ", *(*(a+i)+j));
    printf("\n");
    }
    return 0;
}