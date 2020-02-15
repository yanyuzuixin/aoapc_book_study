/**
 * @file ex1_7.c
 * @author hjr
 * @brief 三位数反转2
 *        整数输出 %03d 一种左边补0的等宽格式
 * @version 0.1
 * @date 2020-02-15
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d", &n);

    m = (n % 10) * 100 + (n / 10 % 10) * 10 + n / 100;

    printf("%d\n", m);
    printf("%03d\n", m);
}