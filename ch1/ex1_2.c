/**
 * @file ex1_2.c
 * @author hjr
 * @brief 浮点数除法运算
 * @version 0.1
 * @date 2020-02-15
 * 
 * @copyright Copyright (c) 2020-2030 yanyuzuixin.com All Rights Reserved.
 * 
 */

#include <stdio.h>

/**
 * @brief 主函数
 * @todo printf函数%d格式来打印浮点数为什么不确定数
 * @return int 
 */
int main()
{
    printf("%.1f\n", 8.0/5.0);
    printf("%.2f\n", 8.0/5.0); /* .2f表示保留2位小数 */
    printf("%.1f\n", 8/5);     /* 编译会有warning，但输出是1.6 */
    printf("%d\n",   8.0/5.0); /* 编译会有warning，输出是非确定数 */
    return 0;
}
