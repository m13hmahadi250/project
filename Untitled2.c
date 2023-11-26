#include <stdio.h>
#include <string.h>

int main()
{
    int A, B, f = 0;
    scanf("%d%d", &A, &B);
    char mah[100];
    scanf("%s", mah);

    if (mah[A] != '-')
    {
        printf("No\n");
        return 0;
    }

    for (int i = 0; i < strlen(mah); i++)
    {
        if (mah[i] >= 48 && mah[i] <= 57)
        {
            f++;
        }
    }
    if (f == A + B)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
