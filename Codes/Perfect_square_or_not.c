#include <stdio.h>

int main()
{
    int t, num, p = 0;
    printf("Enter the number of test cases\n");
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        printf("Enter the number\n");
        scanf("%d", &num);
        for (int j = 1; j <= num; j++)
        {
            if (j * j == num)
            {
                p = p + 1;
                printf("Perfect square\n");
            }
        }
        if (p == 0)
        {
            printf("Not a perfect square\n");
        }
        p=0;
    }
    return 0;
}
