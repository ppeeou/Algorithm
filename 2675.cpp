#include <stdio.h>
int main()
{
    int input;
    scanf("%d", &input);

    while (input--)
    {

        int num;
        char s[1010];
        int k = 0;
        scanf("%d", &num);
        scanf("%s", s);

        while (s[k] != '\0')
        {
            for (int i = 0; i < num; i++)
            {
                printf("%c", s[k]);
            }
            k++;
        }

        printf("\n");
    }
    return 0;
}
