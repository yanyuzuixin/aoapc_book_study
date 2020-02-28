/**
 * @file ex2_10.c
 * @author hjr (yanyuzuixin@163.com)
 * @brief 数据统计 重定向版 熟悉freopen的用法
 * @version 0.1
 * @date 2020-02-28
 * 
 * @copyright Copyright (c) 2020 yanyuzuixin.com All Rights Reserved.
 * 
 */

#include <stdio.h>

#define LOCAL
#define INF 100000000

int main()
{
#ifdef LOCAL

    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);

#endif

    int min = INF;
    int max = -INF;

    int n;
    int sum = 0;
    int cnt = 0;

    while (scanf("%d", &n) == 1) {
        if (min > n) {
            min = n;
        }
        if (max < n) {
            max = n;
        }
        cnt++;
        sum += n;
    }

    printf("%d %d %.3f\n", min, max, (double)sum / cnt);
    
    return 0;
}