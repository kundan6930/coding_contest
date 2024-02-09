#include<stdio.h>



#define mult(x) (x*x*x)
int main()
{
    int a=4;
    printf("%d, %d \n",a,mult(a++));
    return 0;
}