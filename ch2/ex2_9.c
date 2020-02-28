/**
 * @file ex2_9.c
 * @author hjr (yanyuzuixin@163.com)
 * @brief 输入一些整数，求出它们的最小值、最大值和平均值（保留3位小数），输入保证这些数都是不超过1000的数
 * @details 最大最小值赋初值的一些技巧
 *          1. 定义一个很大的数，如INF 令 min = INF, max = -INF
 *          2. 输入第一个数x，令 min = max = x，推荐这个方法
 * @version 0.1
 * @date 2020-02-28
 * 
 * @copyright Copyright (c) 2020 yanyuzuixin.com All Rights Reserved.
 * 
 */

#include <stdio.h>


int main()
{
    int max;
    int min;
    double avr;
    int n;
    int cnt = 0;
    int sum = 0;
    while (scanf("%d", &n) == 1) {
        if (cnt == 0) {
            min = n;
            max = n;
        }
        if (max < n) {
            max = n;
        }
        if (min > n) {
            min = n;
        }
        sum += n;
        cnt++;
    }

    avr = (double)sum / cnt;
    printf("%d %d %.3f", max, min, avr);
    return 0;
}