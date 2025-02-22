#include <stdio.h>
#define CREATE_FUNC(name, content)  \
void name()                         \
{                                   \
    printf(content);                 \
}

CREATE_FUNC(test1,"this is function test1()\n");
CREATE_FUNC(test2,"this is function test2()\n");
CREATE_FUNC(test3,"this is function test3()\n");


// ##: dùng để nối chuỗi
#define CONCAT(a,b) a##b
//#: chuẩn hoá đoạn văn bản lên chuỗi
#define CREATE_STRING(content) printf(#content)
int main()
{
    test1();
    test2();
    test3();

    int ab=50;
    printf("value %d\n", CONCAT(a,b));

    CREATE_STRING(abc); //abc -> "abc"
    return 0;
}