#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...)
{
    va_list args;
    va_start(args, count);
    int result = 0;
    for (int i=0;i<count;i++)
    {
        result +=va_arg(args,int);
    }
    va_end(args);
    return result;
}

int main(int argc, char const *argv[])
{
    printf("tong = %d\n",sum(4,1,2,3,5)); // số 4 đầu tiên là chỉ số lượng phần tử
    return 0;
}