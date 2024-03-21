#include<stdio.h>
int main()
{
    int n,i,index;
    printf("Enter array size: ");
    scanf("%d",&n);

    int array[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    int max=array[i];
    for(i=0; i<n; i++)
    {
        if(max<array[i+1])
        {
            max=array[i+1];
            index=i+1;
        }

    }
    printf("Max number: %d\n",max);
    printf("Index no: %d\n",index);




    return 0;
}
