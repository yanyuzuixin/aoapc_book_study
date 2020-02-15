/**
 * @file ex1_5.c
 * @author hjr
 * @brief 求圆柱体的表面积
 * @details pi的一种求法 acos(-1.0) 也可以直接使用M_PI
 *          scanf输入浮点数 float类型用%f double类型用%lf，printf函数不存在%lf
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
    double r, h;
    const double pi = acos(-1.0);
    scanf("%lf%lf", &r, &h);
    printf("%lf\n", pi);
    printf("%.3lf\n", 2 * pi * r * h + 2 * r * r * pi);
}