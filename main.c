#include <stdio.h>
char arr[1024];
int index = 0;
int main()
{

    printf("jinruminganzifuguanlixitong");

    while (1)
    {
        printf("1\n");
        printf("2\n");
        printf("3\n");
        printf("4\n");
        printf("5\n");
        printf("qingshuruyaoxuanzedegongneng\n");
        int code;
        scanf("%d", &code);

        if (code == 1)
        {
            printf("aaa\n");
            char m;
            scanf("%c", &m);
            scanf("%c", &m);
            arr[index] = m;
            index++;
            printf("aaa\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 2)
        {
            printf("bbb\n");
            index--;
            printf("bbb\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 3)
        {
            printf("ccc\n");
            for (int i = 0; i < index; i++)
            {
                printf("%c\n", arr[i]);
            }
            printf("ccc\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 4)
        {
        }
        if (code == 5)
        {
        }
    }
    return 0;
}