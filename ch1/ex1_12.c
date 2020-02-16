/**
 * @file ex1_12.c
 * @author hjr (yanyuzuixin@163.com)
 * @brief 三整数排序（错误解法）讲解条件语句的条件的合理性
 * @version 0.1
 * @date 2020-02-16
 * 
 * @copyright Copyright (c) 2020 yanyuzuixin.com All Rights Reserved.
 * 
 */

#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    /* 将所有可能排列判断输出 */
    if (a < b && b < c) {
        printf("%d %d %d\n", a, b, c);
    }
    if (a < c && c < b) {
        printf("%d %d %d\n", a, c, b);
    }
    if (b < a && a < c) {
        printf("%d %d %d\n", b, a, c);
    }
    if (b < c && c < a) {
        printf("%d %d %d\n", b, c, a);
    }
    if (c < a && a < b) {
        printf("%d %d %d\n", c, a, b);
    }
    if (c < b && b < a) {
        printf("%d %d %d\n", c, b, a);
    }
    return 0; 
}