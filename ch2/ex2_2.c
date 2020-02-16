/**
 * @file ex2_2.c
 * @author hjr (yanyuzuixin@163.com)
 * @brief 输出所有形如aabb的4位完全平方数
 * @version 0.1
 * @date 2020-02-16
 * 
 * @copyright Copyright (c) 2020 yanyuzuixin.com All Rights Reserved.
 * 
 */

#include <stdio.h>
#include <math.h> /* 使用math.h时，链接时有加上-lm选项 */

/* 自己的代码 */
/* int main()
{
    for (int i = 30; i * i < 9999; i++) {
        int m = i * i;
        if (m > 1000 && m / 1000 == m / 100 % 10 && m / 10 % 10 == m % 10) {
            printf("%d\n", i * i);
        }
    }
    return 0;
}
*/

int main()
{
    for (int i = 1; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            int n = i * 1100 + j * 11;
            int m = floor(sqrt(n) + 0.5);
            if (m * m == n) {
                printf("%d\n", n);
            }
        }
    }
    return 0;
}


