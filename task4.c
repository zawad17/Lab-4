#include<stdio.h>
int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);

    int array[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0; i<n; i++)
    {
        array[i]=array[i]*array[i];
        printf("%d ",array[i]);
    }

    return 0;

}
