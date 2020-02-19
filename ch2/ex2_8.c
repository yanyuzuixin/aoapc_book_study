/**
 * @file ex2_8.c
 * @author hjr (yanyuzuixin@163.com)
 * @brief 阶乘之和 2_7的防溢出版
 *        原理：计算只包含加法、减法和乘法的整数表达式除以正整数n的余数，可以在每一步计算之后对n取余，结果不变
 *        知识点：可以用clock函数计算程序耗时
 *               可以用echo n | ./ex2_8的方式提供命令行参数
 * @version 0.1
 * @date 2020-02-19
 * 
 * @copyright Copyright (c) 2020 yanyuzuixin.com All Rights Reserved.
 * 
 */

#include <stdio.h>
#include <time.h>

int main()
{
    const int MOD = 1000000;

    int n;
    int factorial = 1;
    int sum = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        factorial *= i;
        factorial %= MOD;
        sum += factorial;
        sum %= MOD;
    }

    printf("%d\n", sum);
    printf("Time use %.2f\n", (double)clock() / CLOCKS_PER_SEC);
    return 0;

}