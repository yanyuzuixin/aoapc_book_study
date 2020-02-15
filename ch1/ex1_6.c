/**
 * @file ex1_6.c
 * @author hjr
 * @brief 三位数反转
 * @details 输入一个三位数，反转后输出
 *          例：123 输入321
 * @version 0.1
 * @date 2020-02-15
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d%d%d\n", n % 10, n / 10 % 10, n / 100);
    return 0;
}