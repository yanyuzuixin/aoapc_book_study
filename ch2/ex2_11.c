/**
 * @file ex2_11.c
 * @author hjr (yanyuzuixin@163.com)
 * @brief 数据统计 fopen版
 *        熟悉 fopen fclose fscanf fprintf的用法
 * @version 0.1
 * @date 2020-02-28
 * 
 * @copyright Copyright (c) 2020 yanyuzuixin.com All Rights Reserved.
 * 
 */

#include <stdio.h>

#define INF 100000000

int main()
{
    FILE *fin;
    FILE *fout;

    fin = fopen("data.in", "r");
    fout = fopen("data.out", "w");

    int min = INF;
    int max = -INF;

    int n;
    int sum = 0;
    int cnt = 0;

    while (fscanf(fin, "%d", &n) == 1) {
        if (min > n) {
            min = n;
        }
        if (max < n) {
            max = n;
        }
        cnt++;
        sum += n;
    }

    fprintf(fout, "%d %d %.3f\n", min, max, (double)sum / cnt);
    
    fclose(fin);
    fclose(fout);

    return 0;
}