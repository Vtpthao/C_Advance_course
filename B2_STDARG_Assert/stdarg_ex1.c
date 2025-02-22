#include <stdio.h>
#include <stdarg.h>

void test(int count, ...)
{
    va_list args;
    va_start(args, count);
    printf("value 1: %d\n", va_arg(args, double));
    printf("value 2: %d\n", va_arg(args, int));
    printf("value 3: %f\n", va_arg(args, double));
    printf("value 4: %s\n", va_arg(args, char*));
}

int main(int argc, char const *argv[])
{
    test(4,1,2,3.14,"hello world"); // số 4 đầu tiên là chỉ số lượng phần tử
    return 0;
}