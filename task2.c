#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);

    int array[n];
    int array2[50],index=0;

    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
       int dup=0;
        for(int j=i+1;j<n;j++)
        {
            if(array[i]==array[j])
            {
                count ++;
                dup=1;
                break;
            }
        }
        if(dup==0)
        {
            array2[index]=array[i];
            index++;
        }
    }

    printf("Sample output1: %d \n",count);

    printf("Modified array:{");

    for(int i=0;i<index;i++)
    {
        printf("%d",array2[i]);
        if(i<index-1)
            printf(",");
    }
    printf("}");

   return 0;

}
