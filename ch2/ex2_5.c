/**
 * @file ex2_5.c
 * @author hjr (yanyuzuixin@163.com)
 * @brief 3n+1问题 避免long long输入的方法
 * @version 0.1
 * @date 2020-02-18
 * 
 * @copyright Copyright (c) 2020 yanyuzuixin.com All Rights Reserved.
 * 
 */

#include <stdio.h>

int main()
{
    int n2;
    int count = 0;
    long long n;
    
    scanf("%d", &n2);
    n = n2;

    while (n > 1)
    {
        if (n % 2) {
            n = 3 * n + 1;
        } else {
            n = n / 2;
        }
        count++;
    }
    
    printf("%d\n", count);

    return 0;
}