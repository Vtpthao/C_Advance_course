#include <stdio.h>

//variadic
#define sum(...)            \
int arr[]= {__VA_ARGS__,0}; \
int tong=0;                 \
int i=0;                    \
while (arr[i]!=0)           \
{                           \
    tong = tong + arr[i];   \
    i++;                    \
}                           \
printf("Tong: %d\n", tong);

int main()
{
    sum(1,2,3,4,5,6);
    return 0;
}