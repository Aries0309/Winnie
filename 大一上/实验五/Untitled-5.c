/*��дһ����������һ������n,ʹ��������¶���ʽ�ļ��㡣*/
#include <stdio.h>
#include <math.h>
int main(void)
{
    int n, i = 1;
    double sum = 0;
    scanf("%d", &n);
    for (; i <= n; i++)
        sum += pow(-1, i - 1) / i * 1.0;
    printf("f(%d) = %lf", n, sum);
}