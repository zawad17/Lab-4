#include<stdio.h>
int main()
{   int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int array[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }    printf("Numbers in the array : ");

    for(int i=0; i<n; i++)
   {    printf("%d ",array[i]);

   }


    return 0;
}
