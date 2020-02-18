/**
 * @file ex2_6.c
 * @author hjr (yanyuzuixin@163.com)
 * @brief 计算1 - 1/3 + 1/5 - 1/7 ... 直到最后一项小于10的-6次方
 * @version 0.1
 * @date 2020-02-18
 * 
 * @copyright Copyright (c) 2020 yanyuzuixin.com All Rights Reserved.
 * 
 */

#include <stdio.h>
#include <math.h>

int main()
{
    double sum = 0;
    for (int i = 0; ; i++) {
        double term = 1.0 / (i * 2 + 1);
        if (i % 2 == 0) {
            sum += term;
        } else {
            sum -= term;
        }
        if (term < 1e-6) {
            break;
        }
    }
    printf("%.6f\n", sum);
    return 0;
}