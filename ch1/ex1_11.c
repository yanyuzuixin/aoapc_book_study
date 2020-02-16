/**
 * @file ex1_11.c
 * @author hjr (yanyuzuixin@163.com)
 * @brief 鸡兔同笼
 *        已知鸡和兔的总数量为n，总腿数为m，输入n和m，依次输出鸡的数目的兔的数目
 * @version 0.1
 * @date 2020-02-16
 * 
 * @copyright Copyright (c) 2020 yanyuzuixin.com All Rights Reserved.
 * 
 */

#include <stdio.h>

/* 自己的解法 */
/* int main()
{
    int n, m;
    int chicken = -1;
    int rabbit = -1;
    scanf("%d%d", &n, &m);
    for(int i = 0; i <= n; i++) {
        if (2 * i + (n - i) * 4 == m) {
            chicken = i;
            rabbit = n - i;
            break;
        }
    }

    if (chicken < 0 || rabbit < 0) {
        printf("No answer\n");
    } else {
        printf("%d %d\n", chicken, rabbit);
    }

    return 0;
} */

/* 书本代码 */
int main()
{
    int a, b, n, m;
    scanf("%d%d", &n, &m);

    /* 二元一次方程组求解 */
    a = (4 * n - m) / 2;
    b = n - a;

    if (m % 2 == 1 || a < 0 || b < 0) {
        printf("No answer\n");
    } else {
        printf("%d %d\n", a, b);
    }
    return 0;
}

