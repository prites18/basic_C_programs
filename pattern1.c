#include <stdio.h>

void main()
{
    /*
A B C D E D C B A
  A B C D C B A
    A B C B A
      A B A
        A
*/
// indirectly using acsII values
int n,i,j;
printf("Enter the number of lines: ");
scanf("%d", &n);
for(i=0;i<n;i++)
{
    for(j=0;j<i;j++)
    {
        printf(" ");
    }
    for(j=0;j<n-i;j++)
    {
        printf("%c ", 'A'+j);
    }
    for(j=n-i-2;j>=0;j--)
    {
        printf("%c ",'A'+j);
    }
printf("\n ");
}

}