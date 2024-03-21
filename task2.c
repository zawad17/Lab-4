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
    if(n<=3)
    {
        printf("Not Posssible");
    }
    for(int i=2; i<n-2; i++)
    {
        printf("%d ",array[i]);

    }



    return 0;
}
