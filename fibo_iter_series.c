#include <stdio.h>

void main()
{
    int n, i, first=0, second=1, next;
    printf("Enter the number till series is required: ");
    scanf("%d", &n);
    printf("Thus the first %d terms of fibbonaci series are: \n", n);
    for(i=0;i<n;i++)
    {
        if(i<=1)
            next=i;
        else
        {
            next=first+second;
            first=second;
            second=next;
        }
        printf("%d ", next);
    }
    printf("\n");
}