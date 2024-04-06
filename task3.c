#include <stdio.h>
int main()
{
    int n1,n2;
    printf("Enter array size 1 and array size 2: ");
    scanf("%d %d", &n1,&n2);
    char a1[n1], a2[n2];
    for(int i=0; i<n1; i++)
    {
        scanf(" %c", &a1[i]);
    }
    for(int i=0; i<n1; i++)
    {
        scanf(" %c", &a2[i]);
    }
    printf("Common Elements are [");
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n2; j++)
        {
            if(a1[i]==a2[j])
            {
                printf(" '%c' ", a1[i]);
            }
        }
    }
    printf("]");
    return 0;
}

