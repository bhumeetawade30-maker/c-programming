#include <stdio.h>
// Fixed: Specified 'int n' as the parameter type
int fib(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}
int main()
{
    int n, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    // Removed the broken, duplicate text blocks and the redundant fib(n) call
    for (i = 0; i < n; i++)
    {
        printf("%d \t", fib(i));
    }

    return 0;
}


