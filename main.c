#include <stdio.h>
char arr[1024];
int index = 0;
int isMingan(char x)
{
    int count = 0;
    for (int i = 0; i < index; i++)
    {
        if (x==arr[i])
        {
            count++;
        }
    }
    if (count == 0)
    {
        return 0;
    }
    else
        {
            return 1;
        }
}
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
            printf("ddd\n");
            char neirong[1024];
            scanf("%s", neirong);
            for (int i = 0; 1; i++)
            {
                if (neirong[i] == '\0')
                {
                    break;
                }
                int r = isMingan(neirong[i]);
                if (r == 1)
                {
                    neirong[i] = '*';
                }
                printf("%c", neirong[i]);
            }
            printf("\n");
            printf("ddd\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 5)
        {
            printf("eee\n");
            break;
        }
    }
    return 0;
}