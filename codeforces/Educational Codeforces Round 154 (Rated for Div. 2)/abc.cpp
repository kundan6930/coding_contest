#define mult(x) (x*x*x)
main()
{
    int a=4;
    printf("%d,%d \n",a,mult(a++));
    return 0;
}