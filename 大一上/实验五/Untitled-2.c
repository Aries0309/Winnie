/*��дһ����������һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ����� */
#include <stdio.h>
int main(void)
{
    int i = 1, b, c = 0, d = 0, e = 0, f = 0;
    char a[100], k;
    do
    {
        a[i] = getchar();
        k = a[i];
        i++;
    } while (k != '\n');
    b = i - 1;
    i = 1;
    while (i < b)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
            c++;
        else if (a[i] == ' ')
            d++;
        else if (a[i] >= '0' && a[i] <= '9')
            e++;
        else
            f++;
        i++;
    }
    printf("all in all: char = %d space = %d digit = %d others = %d", c, d, e, f);
}