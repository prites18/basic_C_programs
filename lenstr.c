#include <stdio.h>
//#include <malloc.h>

int lenstr(char *s)
{
    int i=0;
     while(s[i])
    {
        i++;
    }
    return i;
}
/*
void main()
{
    char *a;
    a=(char*)malloc(sizeof(char)*11);
    printf("Enter the string: ");
    gets(a);
    int length=lenstr(a);
    printf("%d", length);
}
*/