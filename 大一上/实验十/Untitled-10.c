/*��һ��/** / ֮����ճ���sample10.c������Ĺ����ǣ��ҳ�һ���ַ�����ASCII��ֵ�����ַ���ASCII��ֵ��С���ַ���*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50], max, min /**/, *p /**/;
    int i;
    printf("Input a string:\n");
    gets_s(str);
    for (p = str, max = min = *p; *p; /**/ p++ /**/)
    {
        if (*p > max)
            max = *p;
        if (/**/ *p < min /**/)
            min = *p;
    }
    printf("In string: max = %c, min = %c\n", max, min);
}