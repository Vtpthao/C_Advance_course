#include <stdio.h>
#include <assert.h>

#define LOG(condition, content) assert(condition && #content)
double divide(int a, int b)
{
    // if (b==0){
    //     printf("chia cho 0\n");
    // }else{
    //     return (double)a/b;
    // }
    
    //assert(b!=0 && "mau dang bang 0");
    LOG(b!=0,mau dang bang 0);
    return (double)a/b;
}

int main(int argc, char const *argv[])
{
    int x=5;
    //assert(x==5 && "X phai bang 5");
    LOG(x==5, X phai bang 5);
    printf("x = %d\n",x);
    int a=2,b=2;
    printf("ket qua: %f\n", divide(a,b));
    return 0;
}