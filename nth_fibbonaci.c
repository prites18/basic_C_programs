#include <stdio.h>

int fibbonaci(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    return fibbonaci(n-1)+fibbonaci(n-2);
}
/*
int fibo(int n)
{
  if(n==0 || n==1)
    {
        return n;
    }
  else
  {

  }  
}
*/
void main()
{
    int n;
    int ans;
    printf("Enter the position: ");
    scanf("%d", &n);
    ans=fibbonaci(n);
    printf("The %d th fibbonaci number is %d \n", n, ans);
}