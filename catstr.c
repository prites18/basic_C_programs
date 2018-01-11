#include <stdio.h>
#include "lenstr.c"

char* concat(char *a, char *b)
{
    int i=0, j=0,k=0;
    char lenc;
    lenc=lenstr(a)+lenstr(b);
    char c[lenc];
    while(a[i])
    {
        a[k++]=a[i++];
    }
    while(b[j])
    {
        a[k++]=b[j++];
    }
    a[k]='\0';
    return a;
}

void main()
{
    char a[30], b[30];
    printf("Enter the first string: ");
    gets(a);
    printf("Enter the second string: ");
    gets(b);
    char *c=concat(a,b);
    printf("Thus the new string is: %s",c);
}

