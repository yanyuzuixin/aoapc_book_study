/**
 * @file ex1_9.c
 * @author hjr (yanyuzuixin@163.com)
 * @brief 变量交换2 无中间变量，加减法 及 同原理的异或法
 * @version 0.1
 * @date 2020-02-15
 * 
 * @copyright Copyright (c) 2020 yanyuzuixin.com All Rights Reserved.
 * 
 */

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    /* 加减法 */
    a = a + b;
    b = a - b;
    a = a - b;
    
    /* 异或法  */
    // a = a ^ b;
    // b = a ^ b;
    // a = a ^ b;

    printf("%d %d", a, b);
    return 0;
}

