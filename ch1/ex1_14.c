/**
 * @file ex1_14.c
 * @author hjr (yanyuzuixin@163.com)
 * @brief 三整数排序 交换变量法
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

    if (a > b) {
        int tmp = a;
        a = b;
        b = tmp;
    }

    if (a > c) {
        int tmp = a;
        a = c;
        c = tmp;
    }

    if (b > c) {
        int tmp = b;
        b = c;
        c = tmp;
    }

    printf ("%d %d %d\n", a, b, c);
    return 0;
}