#include <stdio.h>

int main() {
int n;
printf("Enter array size: ");
scanf("%d",&n);
    int arr[n] ;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1;
            }
        }
        if (arr[i] != -1) {
            printf("%d occurs %d times\n", arr[i], count);
        }
    }

    return 0;
}
