#include<stdio.h>

void main()
{
    int n, c;
    printf("Enter n = ");
    scanf("%d", &n);
    int mid = n-1;

    for(int i = 0; i<n; i++)
    {
        c = i; // 1
        for(int j = 0; j<(2*n-1); j++)
        {
            if(j>=(mid-i) && j<=(mid+i))
            {
                if(j<=mid)
                    printf("%d ",++c);
                else
                    printf("%d ",--c);
            }
            else
                printf("  ");
        }
        printf("\n");
    }
}
