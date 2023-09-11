#include <stdio.h>
#include <float.h>
/*
变量练习与使用
*/
 int main(){
    // 定义变量
    int a = 1;
    double b = 1.23456;
    // 查看变量大小
    printf("int 的大小为 %lu 个字节",sizeof(a)); // sizeof 返回的是 32位无符号整数 lu
    printf("float 的最大值为 %E",FLT_MAX);  // 使用 E 的指数形式输出结果
    printf("float 的精度值为 %d\n",FLT_DIG);    // 使用整数输出结果
    // 类型转换
    double c = a;   // 隐式类型转换 小 -> 大
    int d = (int)b; // 显式类型转换 大 -> 小
    printf("c = %f\n",c);
    printf("d = %d",d);
    return 0;

 }