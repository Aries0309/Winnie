/*��һ��/** / ֮����ճ���sample5.c������Ĺ����ǱȽ������ַ�����СдӢ����ĸ������ǰһ���ַ����ж��򷵻�������ֵΪ�����ַ�����СдӢ����ĸ�����Ĳ����ͬ����0��ǰһ���ַ������򷵻ظ�����ֵΪ�����ַ�����СдӢ����ĸ�����Ĳ��*/
#include <stdio.h>
int main()
{
    char a[50], b[50];
    /**/ int i = 0, j = 0, k = 0, num; /**/
    printf("Please input two strings:\n");
    gets_s(a);
    gets_s(b);
    while (a[i])
    {
        if (a[i] >= 'a' && a[i] <= 'z')
            j++;
        i++;
    }
    i = 0;
    while (/**/ b[i] /**/)
    {
        if (b[i] >= 'a' && b[i] <= 'z')
            k++;
        i++;
    }
    /**/ if (j == k) /**/
        num = 0;
    else
        num = j - k;
    printf("num = %d\n", num);
    return 0;
}