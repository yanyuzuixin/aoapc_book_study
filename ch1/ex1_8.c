/**
 * @file ex1_8.c
 * @author hjr
 * @brief 变量交换1 中间变量法
 * @version 0.1
 * @date 2020-02-15
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <stdio.h>

int main()
{
    int a, b, tmp;
    scanf("%d%d", &a, &b);
    
    tmp = a;
    a = b;
    b = tmp;
    
    printf("%d %d\n", a, b);
}