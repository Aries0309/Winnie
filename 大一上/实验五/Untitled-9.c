/*��дһ��������������n������������������������С��������������������е�λ�á�*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a, max, min, i = 2, m, l, r;
    r = scanf("%d", &a);
    if (r != 1)
        exit(0);
    max = a;
    min = a;
    while (scanf("%d", &a) == 1)
    {
        if (a > max)
        {
            max = a;
            l = i;
        }
        if (a < min)
        {
            min = a;
            m = i;
        }
        i++;
    }
    printf("max = %d max_at = %d, min = %d min_at = %d", max, l, min, m);
}