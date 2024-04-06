#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter The Size of Array:");
    scanf("%d",&n);

    int array[n];
    printf("Enter The Array:");

    for(int i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    int max=array[0],min=array[0],index1,index2;

    for(int i=1; i<n; i++)
    {
        if(min>array[i])
        {
            min=array[i];
            index1=i;
        }
        if(array[i]>max)
        {
            max=array[i];
            index2=i;
        }
    }
    printf("My Array:{");
    for(int i=0; i<n; i++)
    {
        printf(" %d",array[i]);
        if(i<n-1)
          {
            printf(",");
          }
    }
    printf("}");
    printf("\nThe Minimum Value is:%d which was found at index: %d",min,index1);
    printf("\nThe Maximum Value is:%d which was found at index: %d\n",max,index2);

    return 0;
}

