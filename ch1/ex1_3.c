/**
 * @file ex1_3.c
 * @author hjr
 * @brief 复杂表达式计算 math.h
 * @version 0.1
 * @date 2020-02-15
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <stdio.h>
#include <math.h>

int main()
{
    printf("%.8f\n", 1 + 2 * sqrt(3) / (5 - 0.1)); /* sqrt平方根运算，math.h库里面的函数 */
    return 0;
}
