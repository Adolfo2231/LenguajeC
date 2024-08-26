#include <stdio.h>
#include <stdarg.h>
int sum(int num, ...)
{
    va_list list;
    va_start(list, num);
    int sum = 0;
    for (int i = 0; i < num; i++)
    {
        sum += va_arg(list, int);
    }
    va_end(list);
    printf("%d", sum);
}
int main()
{
    sum(2, 20, 30);
    return 0;
}