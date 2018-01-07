#include <stdio.h>

int fibo(int i)
{
    if(i==0)
        return 0;
    else if (i==1)
        return 1;
    else
        return (fibo(i-1)+fibo(i-2));
}

void main()
{
    int n,i=0;
    printf("Enter the nth position till where fibo series is required: ");
    scanf("%d", &n);
    for(int c=1;c<=n;c++)
    {
        printf("%d ", fibo(i));
        i++;
    }   
}
