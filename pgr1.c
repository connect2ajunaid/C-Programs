#include <stdio.h>
int main()
{
    int num;
    printf("enter ur num:");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("the num is even");
    }
    else
    
    {
        printf("the num is odd");
    }
    return 0;
}