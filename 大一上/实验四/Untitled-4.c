/*��дһ��������������������Ȼ�������������������˳�������Ҫ��
1�������������ͱ���x��y��z��
2������scanf�������������������ֱ𸳸�x��y��z��
3�����������㷨�������ɴαȽϽ�����ʹ��x��y��z��ֵ����������������printf�����������x��y��z��ֵ��*/
#include <stdio.h>
int main(void)
{
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    int a;
    if (x > y)
    {
        a = x;
        x = y;
        y = a;
    }
    if (x > z)
    {
        a = x;
        x = z;
        z = a;
    }
    if (y > z)
    {
        a = y;
        y = z;
        z = a;
    }
    printf("small to big: %d %d %d", x, y, z);
}
