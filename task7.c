#include<stdio.h>
int main()
{

    int n1,n2,i,n3,temp;
    printf("Enter array 1 size: ");
    scanf("%d",&n1);
    int arr1[n1];
    for(i=0; i<n1; i++)
    {
        scanf("%d",&arr1[i]);

    }
    printf("Enter array 2 size: ");
    scanf("%d",&n2);
    int arr2[n2];



    for(int j=0; j<n2; j++)
    {
        scanf("%d",&arr2[j]);
    }

    n3=n1+n2;
    int arr3[n3];

    for(i=0; i<n1; i++)
    {
        arr3[i]=arr1[i];
    }
    for(i=0; i<n2; i++)
    {
        arr3[i+n1]=arr2[i];
    }
    for(i=0; i<n3-1; i++)
    {
        for(int j=0; j<n3-i-1; j++)
        {
            if(arr3[j]>arr3[j+1])
            {
                temp=arr3[j];
                arr3[j]=arr3[j+1];
                arr3[j+1]=temp;
            }
        }

    }
    for(i=0; i<n3; i++)
        printf("%d ",arr3[i]);
    return 0;
}
