#include<stdio.h>
int main ()
{
    int n1,n2;
    printf("Enter 1st array size: ");
    scanf("%d",&n1);
    int arr1[n1];
    for(int i=0; i<n1; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter 2nd array size: ");
    scanf("%d",&n2);
    int arr2[n2];

    for(int i=0; i<n2; i++)
    {
        scanf("%d",&arr2[i]);
    }
    int count=0,arr3[50],index=0;
    for(int i=0; i<n1; i++)
    {
        int dup1=0;
        for(int j=i+1; j<n1; j++)
        {
            if(arr1[i]==arr1[j])
            {
                count ++;
                dup1=1;
                break;
            }
        }
        if(dup1==0)
        {
            arr3[index]=arr1[i];
            index++;
        }
    }

    for(int i=0; i<n2; i++)
    {
        int dup2=0;
        for(int j=i+1; j<n2; j++)
        {
            if(arr2[i]==arr2[j])
            {
                count ++;
                dup2=1;
                break;
            }
        }
        if(dup2==0)
        {
            arr3[index]=arr2[i];
            index++;
        }
    }

    int arr4[50],index1=0;
    for(int i=0; i<index; i++)
    {
        int dup3=0;
        for(int j=i+1; j<index; j++)
        {
            if(arr3[i]==arr3[j])
            {
                count ++;
                dup3=1;
                break;
            }
        }
        if(dup3==0)
        {
            arr4[index1]=arr3[i];
            index1++;
        }
    }

    printf("[");
    for(int i=0; i<index1; i++)
    {
        printf(" %d ",arr4[i]);
        if(i<index1-1)
        {
            printf(",");
        }
    }
    printf("]");
    return 0;
}

