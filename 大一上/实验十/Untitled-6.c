/*��һ��/** / ֮����ճ���sample6.c������Ĺ�����ʵ��ɾ�������ַ��������е���ĸ 'b'��*/
/**/ #include /**/ <stdio.h> 
int main()
{
    char str[100];
    int /**/ i, j /**/;
    printf("Input string :");
    gets_s(str);
    for (i = j = 0; str[i] != '\0'; i++)
    {
        if (str[i] != 'b')
        {
            str[j] = str[i];
            /**/ j++ /**/;
        }
    }
    str[j] = '\0';
    printf("Now string is:");
    puts(str);
    return 0;
}
