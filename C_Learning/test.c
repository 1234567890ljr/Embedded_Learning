#include <stdio.h>
int main()
{
    printf("double占多少字节：%zu\n", sizeof(double));
    printf("指针(地址)占多少字节：%zu\n", sizeof(double*));
    return 0;
}
