/**
 * @file ex2_3.c
 * @author hjr (yanyuzuixin@163.com)
 * @brief 输出所有形如aabb的4位完全平方数 不需要开平方的解法
 * @version 0.1
 * @date 2020-02-17
 * 
 * @copyright Copyright (c) 2020 yanyuzuixin.com All Rights Reserved.
 * 
 */

#include <stdio.h>

int main()
{
    for (int i = 1; ; i++) {
        int n = i * i;
        if (n < 1000) {
            continue;
        }
        if (n > 9999) {
            break;
        }
        int hi = n / 100;
        int lo = n % 100;
        if (hi / 10 == hi % 10 && lo / 10 == lo % 10) {
            printf("%d\n", n);
        }
    }
    return 0
}