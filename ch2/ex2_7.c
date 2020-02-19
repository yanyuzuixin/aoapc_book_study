/**
 * @file ex2_7.c
 * @author hjr (yanyuzuixin@163.com)
 * @brief 输入n，计算S = 1! + 2! + 3! + ... + n! 的末6位（不含前导0），n <= 10的6次方
 *        样例：输入 10；输出 37913
 *        n 输入过大时会溢出
 * @version 0.1
 * @date 2020-02-19
 * 
 * @copyright Copyright (c) 2020 yanyuzuixin.com All Rights Reserved.
 * 
 */

#include <stdio.h>

int main()
{
    int n;
    int factorial = 1;
    int sum = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        factorial *= i;
        sum += factorial;
    }

    int mod = sum % 1000000;

    printf("%d\n", mod);
    return 0;
}
