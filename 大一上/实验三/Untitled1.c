/*��дһ���������ڼ���������ѧ���ʽ��ֵ��
fun(x)=(2x^2-1)/(|e^(2x)-tan(x)|+1)*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    double x, y;
    scanf_s("%lf", &x);
    y = (2 * x * x - 1) / (((fabs(exp(2 * x))) - tan(x)) + 1);
    printf("y = %.3lf", y);
    return 0;
}
