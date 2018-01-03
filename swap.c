# include <stdio.h>
void swap(int* a,int* b)
{
    int *tmp;
    *tmp=*a;
    *a=*b;
    *b=*tmp;
}
void main()
{
    int a, b;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter second number:\n");
    scanf("%d", &b);
   /*
   a=a+b;
   b=a-b;
   a=a-b;
   */
  //XOR gate outputs 1 when there are odd number of 1s
   a=a^b;
   b=a^b;
   a=a^b;
   //swap(&a, &b);
   printf("Thus after swapping:\n");
   printf("First number\tSecond number\n");
   printf("%d\t\t%d\n", a, b);
}
