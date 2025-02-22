#include <stdio.h>
#include <stdarg.h>
#define tong(...) sum(__VA_ARGS__,'a')
int sum(int count, ...)
{
    va_list args;
    va_list check;
    va_start(args, count);
    va_copy(check, args);

    int result = count;

    while (va_arg(check, char*) != (char*)'a')
    {
        result += va_arg(args, int);
    }
    va_end(args);
    return result;
}

int main(int argc, char const *argv[])
{
    printf("tong = %d\n",tong(-1,4,1,2,0,3,5,0)); // số 4 đầu tiên là chỉ số lượng phần tử
    return 0;
}