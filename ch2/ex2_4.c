/**
 * @file ex2_4.c
 * @author hjr (yanyuzuixin@163.com)
 * @brief 3n+1问题
 * @details 对于任意大于1的自然数n，若n为奇数，则n变为3n+1，否则变为n的一半，经过若干次这样的变换，一定会使n变为1.
 *          n < 10的9次方
 * @version 0.1
 * @date 2020-02-18
 * 
 * @copyright Copyright (c) 2020 yanyuzuixin.com All Rights Reserved.
 * 
 */

#include <stdio.h>

int main()
{
    long long n;  /* 使用int类型会导致3n+1计算时可能会溢出，故使用long long类型 */
    int count = 0;
    scanf("%lld", &n);  /* long long 类型使用%lld输入 */
    
    while (n != 1) {
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