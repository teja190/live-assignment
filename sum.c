#include <stdio.h>
int sumofdigits(int);
int main()
{
    int num, result;
    printf("enter num:");
    scanf("%d",&num);
    result=sumofdigits(num);
    printf("sum:%d",result);
    return 0;
}
int sumofdigits(int num)
{
    if (num==0)
    {
    return 0;
    }
    else
    {
    return((num%10)+sumofdigits(num/10));
    }
}
